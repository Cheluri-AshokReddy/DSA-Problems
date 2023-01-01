#include<stdio.h>
#include<stdlib.h>
 
 struct node
 {
     int data;
     struct node *next;
 }*head,*newnode,*temp,*ptr;
 
void insertion()
 {
     int item, choice;
     temp = head;
     newnode=(struct node *)malloc(sizeof(struct node));
     printf("enter the element to be inserted\n");
     scanf("%d",&item);
     newnode->data=item;
     if(head==NULL)
     {
         newnode->next=NULL;
         head=newnode;
     }
     else
     {
         printf("chose the place whare element is to be instered");
          printf("\n1.start\n 2.middle\n 3.end\n");
          scanf("%d",&choice);
         if(choice==1)
         {
             
             newnode->next=head;
             head=newnode;
             printf("inerted");
         }
         if(choice==2)
         {
             int pos;
             printf("enter position of whare elementto be inserted\n");
             scanf("%d",&pos);
             printf("element inserted at %d",pos);
             
             for(int i=1;i<pos-1;i++)
             {
                 temp=temp->next;
             }
                newnode->next=temp->next;
               temp->next=newnode;
        }
             
             if(choice==3)
             {
                 while(temp->next!=NULL)
                 {
                     temp=temp->next;
                 }
                 newnode->next=NULL;
                 temp->next=newnode;
                 
             }
             
         }
         
         printf("element is inserted");
 }
 void display()
 {
     temp=head;
     if(head==NULL)
     {
         printf("empty list\n");
     }
     else
     {
         printf("elements are\n");
         while(temp!=NULL)
         {
             printf("%d\n",temp->data);
             temp=temp->next;
         }
     }
     printf("elements are displayed\n");
 }
 int main()
 {
 	int choice=1;
 	while(choice)
 	 {
 	printf("enter your choice\n");
 	printf("1.insertion\n 2.display\n" );
 	scanf("%d",&choice);
 	
 	switch(choice)
 	{
 	  case 1:
 	   insertion();
 	   break;
 	case 2:
 	   display();
       break;
 	}
    }
 }  