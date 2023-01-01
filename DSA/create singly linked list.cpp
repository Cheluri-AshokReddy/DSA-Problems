#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
} *first,*temp,*temp1;
 void create(int A[] ,int n)
 { int i;
   first = (struct node*)malloc(sizeof(struct node));
   first->data=A[0];
   first->next=NULL;
   temp1=first;
 }
  for(i=1;i<n;i++)
  {
  	temp=(struct node*)malloc(sizeof(struct node));
  	temp->data=A[i];
  	temp->next=temp1;
  	temp1=temp;
  }
   void display(struct node *p)
   {
   	while(p->next!=0)
   	{
   		printf("%d",p->data);
   		p=p->next;
	   }
   }
int main()
{
	int A[]={ 3,5,7,8,9,3};
	create(A,6);
	display(first);
	return 0;
}
