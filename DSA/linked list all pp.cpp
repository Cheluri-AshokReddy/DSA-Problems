#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
}*head = NULL;

int count(struct Node *p)
{
	int c=0;
	while(p)
	{
		c++;
		p=p->next;
	}
	return c;
}

void insertion(struct Node *p, int pos, int key)
{
	struct Node *t;
	if(pos<1 || pos > count(p)+1)
	{
		return;
	}
	
	t = (struct Node *)malloc(sizeof(struct Node));
	t->data = key;
	t->next = NULL;
	if(pos==1)
	{
		t->next = head;
		head = t;
	}
	else
	{
		for(int i=1;i<pos-1;i++)
		{
			p=p->next;
		}
		t->next = p->next;
		p->next = t;
	}
	
	printf("element is inserted....\n");
}

int deletion(struct Node *p,int pos)
{
	struct Node *q, *r;
	int x;
	
	if(pos < 1 || pos > count(p))
	{
		return -1;
	}
	if(pos==1)
	{
		x = head->data;
		q=head;
		head = head->next;
		free(q);
	}
	else
	{
		q=p;
		r=NULL;
		for(int i=1;i<pos;i++)
		{
			r=q;
			q=q->next;
		}
		if(q)
		{
			r->next = q->next;
			x=q->data;
			free(q);
		}
	}
	return x;
}

bool searching(struct Node *p,int key)
{
	while(p)
	{
		if(p->data == key)
		{
			return true;
		}
		p=p->next;
	}
	return false;
}

void display(struct Node *p)
{
	while(p)
	{
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");
}

int main()
{
	printf("-------Select an option--------\n");
	printf("1.insertion\n");
	printf("2.deletion\n");
	printf("3.searching\n");
	printf("4.length\n");
	printf("5.display\n");
	printf("0.exit\n");
	
	int x,element,pos;
	printf("\nenter your choice:\n");
	scanf("%d",&x);
	
	while(x!=0)	
	{
		switch(x)
		{
			case 1:
				printf("enter the element and index position :\n");
				scanf("%d%d",&element,&pos);
				insertion(head,pos,element);
				printf("\nenter your choice:\n");
				scanf("%d",&x);
				break;
			case 2:
				printf("enter the index position :\n");
				scanf("%d",&pos);
				printf("deleted element is : %d \n",deletion(head,pos));
				printf("\nenter your choice:\n");
				scanf("%d",&x);
				break;
			case 3:
				printf("enter the key to search:\n");
				scanf("%d",&element);
				if(searching(head,element))
				{
					printf("element found");
				}
				else
				{
					printf("not found");
				}
				printf("\nenter your choice:\n");
				scanf("%d",&x);
				break;
			case 4:
				printf("length of the linked list is %d \n",count(head));
				printf("\nenter your choice:\n");
				scanf("%d",&x);
				break;
			case 5:
				printf("elements in the linked list are: \n");
				display(head);
				printf("\nenter your choice:\n");
				scanf("%d",&x);
				break;
		}
	}
}
