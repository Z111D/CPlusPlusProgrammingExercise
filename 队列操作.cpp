#include<iostream> 
using namespace std;
typedef struct queue{
	int x;
	struct queue *next;
} LinkList;	//�ṹ�� 
class  MyQueue{
	LinkList *head, *node, *end; //�ṹ���Ա 
	static int j;	//���г��� 
	public:
		MyQueue()		//���캯�� 
		{
			head=NULL; 
			node=NULL;
			end=NULL; 
			head=new LinkList;
			end=head;
			
		}
		void push(int x)	//��Ӻ��� 
		{
	    	node=new LinkList;
			node->x=x;
			end->next=node;
			node=end; 
			j++;			//���г���++ 
		}
		void pop()		//���Ӻ��� 
		{
			if(j==0)				//����Ϊ�� 
		    	cout<<"Invalid"<<endl;
			else
			     {
			     	cout<<head->next->x<<endl;	//�������Ԫ�� 
			     	head->next=head->next->next;
			     	delete head->next;				//ͷһ��ɾ�� 
		        	j--;
				 }
		}
		int size()		//����г��Ⱥ��� 
		{
			return j;
		}
};
int MyQueue::j=0;

int main(void)
{
	MyQueue ob;		//���� 
	int n,i,c,d;
	scanf("%d",&n); 
	for(i=0;i<n;i++)
	{
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				{
					scanf("%d",&d);
					ob.push(d);
					break;
				}
			case 2:ob.pop();break;
			case 3:cout<<ob.size()<<endl;break;
		}
	}
}
