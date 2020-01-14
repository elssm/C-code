#include<stdio.h>
#include<stdlib.h>
#define TREELEN 6

struct NODE {
    NODE* pLeft;
    NODE* pRight;
    char chValue;
};

void ReBuild(char* pPreOrder,char* pInOrder,int nTreeLen,NODE** pRoot)
{
    if (pPreOrder == NULL || pInOrder == NULL) {
        return;
    }
    NODE* pTemp =(NODE* )malloc(sizeof(NODE));
    pTemp->chValue = *pPreOrder;
    pTemp->pLeft = NULL;
    pTemp->pRight = NULL;
    if (*pRoot == NULL) 
	{
        *pRoot = pTemp;
    }
    if (nTreeLen == 1) 
	{ 
        return;
    }
    char* pOrgInOrder = pInOrder;
    char* pLeftEnd = pInOrder;
    int nTempLen = 0;
    while (*pPreOrder != *pLeftEnd) {
        if (pPreOrder == NULL || pLeftEnd == NULL) {
            return;
        }
        nTempLen++;
        if (nTempLen > nTreeLen) {
            break;
        }
        pLeftEnd++;
    }
    int nLeftLen = 0;
    nLeftLen = (int)(pLeftEnd - pOrgInOrder);
    int nRightLen = 0;
    nRightLen = nTreeLen - nLeftLen - 1;
    if (nLeftLen > 0) {
        ReBuild(pPreOrder+1, pInOrder, nLeftLen, &((*pRoot)->pLeft));
    }
    if (nRightLen > 0) {
        ReBuild(pPreOrder + nLeftLen + 1, pInOrder + nLeftLen +1, nRightLen, &((*pRoot)->pRight));
    }
}


/****************
���ڵݹ�ʵ�ֺ������,
*****************/

void PostOrderTraverse(NODE* pRoot) {
    if (pRoot == NULL) {
        return;
    }
    else {
        PostOrderTraverse(pRoot->pLeft);
        PostOrderTraverse(pRoot->pRight);
        printf("%c", pRoot->chValue);
    }
    return;
}


/****************
����ջʵ��ǰ����������
*****************/

void OrderTraverseByStack(NODE* pRoot) {
   NODE* Stack[1000];
	int top = 0;
    while (top > 0 || pRoot != NULL) {
        for (; pRoot != NULL; pRoot = pRoot->pLeft) {
            Stack[top++] = pRoot;
            //ǰ�����
            //printf("%c",pRoot->chValue);
        }
        for (; pRoot == NULL&&top > 0; pRoot = pRoot->pRight) {
            pRoot = Stack[--top];
            //�������
            printf("%c", pRoot->chValue);
        }
    }
}

 

/****************
����ջʵ�ֺ������
*****************/

void PostOrderTraverseByStack(NODE* pRoot) {
    NODE *StackA[1000],*StackB[1000];
    int topA = 0,topB = 0;
    while (topA > 0 || pRoot != NULL) {
        for (; pRoot != NULL;pRoot = pRoot->pRight) {
            StackA[topA++] = pRoot;
            StackB[topB++] = pRoot;
        }
        for (; pRoot == NULL&&topA > 0; pRoot = pRoot->pLeft) {
            pRoot = StackA[--topA];
        }
    }
    while (topB > 0) {
        printf("%c", StackB[--topB]->chValue);
    }
}


/****************************
���ݲ���������ʣ����ڶ��в���
****************************/
void LevelOrderTraverseByQueue(NODE* pRoot) {
NODE* Queue[1000], *p = NULL;
int start = 0, end = 0;
Queue[end++] = pRoot;
if (pRoot == NULL) return;
while (start != end) {
p = Queue[start++];
printf("%c", p->chValue);
if (p->pLeft) Queue[end++] = p->pLeft;
if (p->pRight) Queue[end++] = p->pRight;
}
}

 

int main() {
    NODE* pRoot = NULL;
    char pre[TREELEN] = { 'a','b','d','e','c','f' };
    char in[TREELEN] = { 'd','b','e','a','f','c' };
    ReBuild(pre, in, TREELEN, &pRoot);
    printf("\nͨ��ջʵ�ֵ�������������\n");
    OrderTraverseByStack(pRoot);
    printf("\nͨ���ݹ�ʵ�ֵĺ�����������\n");
    PostOrderTraverse(pRoot);
    printf("\nͨ��ջʵ�ֵĺ�����������\n");
    PostOrderTraverseByStack(pRoot);
printf("\nͨ������ʵ�ֵĲ�����������\n");
    LevelOrderTraverseByQueue(pRoot);
   // getchar();
    return 0;
}

