#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
#define list 10
#define max 10
 
typedef int Elemtype;
typedef struct sqlist *List;
struct sqlist{
	Elemtype *elem;
	int length;
	int listsize;
};
 
void initlist(List L){
	L->elem=(Elemtype *)malloc(list*sizeof(Elemtype));
	L->length=0;
	L->listsize=max;
}
 
void creat(List L){
	initlist(L);
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	   scanf("%d",&L->elem[i]);
	   L->length++;
	   if(L->length==L->listsize) {
			int *new_elem = (Elemtype *)malloc((L->listsize+list)*sizeof(Elemtype));
			memcpy(new_elem,L->elem,L->length);
			L->elem = new_elem;
			L->listsize+=list;
	   }
	} 
}
 
void print(List L) {
	for(int i=0; i<L->length;i++) {
		if(i==L->length-1)
			printf("%d",L->elem[i]);
		else
			printf("%d ",L->elem[i]);
	}	
}
 
int main(){
	List L = (List)malloc(sizeof(struct sqlist));
	initlist(L);
	creat(L);
	print(L);
	return 0;
}
/*读入n值及n个整数，建立顺序表并遍历输出。

输入格式:
读入n及n个整数

输出格式:
输出n个整数，以空格分隔（最后一个数的后面没有空格）。

输入样例:
在这里给出一组输入。例如：

4
-3 10 20 78
输出样例:
在这里给出相应的输出。例如：

-3 10 20 78*/ 
