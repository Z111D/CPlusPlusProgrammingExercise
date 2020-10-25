#include <bits/stdc++.h>

using namespace std;
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2

typedef int Status;

#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10
typedef int ElemType;
typedef struct
{
    ElemType *elem;
    int length;
    int listsize;
}
SqList;
Status InitList_Sq(SqList &L)
{
    L.elem = (ElemType *) malloc(LIST_INIT_SIZE * sizeof(ElemType));
    if (!L.elem)
    {
        exit(OVERFLOW);
    }
    L.length = 0;
    L.listsize = LIST_INIT_SIZE;
    return OK;
}
int main()
{
    SqList L,t;
    int x,y;
    int n;
    cin>>n;
    L.length=n;
    L.elem=(ElemType *)malloc(L.length*sizeof(ElemType));
    for(int i=0; i<L.length; i++)
    {
        cin>>L.elem[i];
    }
    cin>>x>>y;
    t.elem=(ElemType *)malloc(L.length*sizeof(ElemType));
    t.length=0;
    int r=0;
    for(int i=0; i<L.length; i++)
    {
        if(L.elem[i]<x||L.elem[i]>y)
        {
            t.elem[r++]=L.elem[i];
        }
    }
    t.length+=r;
    for(int i=0;i<t.length-1;i++)
        cout<<t.elem[i]<<" ";
    cout<<t.elem[t.length-1];
}
/*��һ�����Ա�L����˳��洢�ṹ�洢���������е�Ԫ��Ϊ���������һ���㷨��ɾ��Ԫ��ֵ��[x,y]֮�������Ԫ�أ�Ҫ���㷨��ʱ�临�Ӷ�ΪO(n)���ռ临�Ӷ�ΪO(1)��

�����ʽ:
�������ݣ���һ����˳����Ԫ�ظ������ڶ�����˳����Ԫ�أ���������x��y��

�����ʽ:
ɾ��Ԫ��ֵ��[x,y]֮�������Ԫ�غ��˳���

��������:
10
5 1 9 10 67 12 8 33 6 2
3 10

�������:
1 67 12 33 2*/ 
