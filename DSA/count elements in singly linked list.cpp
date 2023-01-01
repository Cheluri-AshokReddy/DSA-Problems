#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
} *first,*temp,*temp1;
void create(int A[] , int n)
{
    first =(struct node*)malloc(sizeof(struct node));
    first->data=A[0];
    first->next=NULL;
    temp=first;
    int i;
    for(i=1;i<n;i++)
    {
        temp1=(struct node*)malloc(sizeof(struct node));
        temp1->data=A[i];
        temp1->next=NULL;
        temp->next=temp1;
        temp=temp1;
    }
}
    void come(struct node*p)
    { 
      int c=0;
        if(p!=0)
        { 
            c++;
        	come(p->next);
        }
        printf("%d",c);
    }

    int  main()
    {
    int A[]={ 2,5,8,9,6,4,3};
    create(A,7);
    come(first);
    }
