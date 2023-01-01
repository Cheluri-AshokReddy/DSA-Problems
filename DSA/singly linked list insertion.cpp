#include<stdio.h>
#include<stdlib.h>
 
 struct node
 {
     int data;
     struct node *next;
 }*head,*newnode,*temp,*ptr;
 
void insertion()
 {
     int item;
     newnode=(struct node*)malloc(sizeof(struct node));
     newnode->data=item;
     newnode->next=NULL;
     int choice;
     printf("enter the element to be inserted\n");
     scanf("%d",&item);
     printf("the elemented to be inserted is___ %d",item);
     printf("1.start\n 2.middle\n 3.end");
     scanf("%d",&choice);
     if(head=NULL)
     {
         newnode->data=item;
         newnode->next=NULL;
         head=newnode;
     }
     else
     {
         if(choice=1)
         {
             newnode->next=head;
             head=newnode;
         }
         if(choice=1)
         {
             int pos;
             printf("enter position of whare elementto be inserted\n");
             scanf("%d",&pos);
             printf("element inserted at %d",pos);
             head=temp;
             
             for(int i=1;i<pos-1;i++)
             {
                 temp=temp->next;
             }
                newnode->next=temp->next;
               temp->next=newnode;
        }
             
             if(choice=3)
             {
                 while(temp->next!=NULL)
                 {
                     temp=temp->next;
                 }
                 temp->next=newnode;
                 newnode->next=NULL;
             }
             
         }
         
         printf("element is inserted");
 }
 int main()
 {
 	int choice;
 	printf("start insertion");
 	printf("1.insertion");
 	scanf("%d",&choice);
 	switch(choice)
 	{
 	case 1:
 	insertion();
 	break;
    }
 }