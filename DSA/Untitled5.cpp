/*
#include<stdio.h>
#include<string.h>
struct Book
{
	char title[30];
	int pages;
	char author[30];
	float price;
	
};

void input(struct Book b[],int n)
{	
	for(int i=0;i<n;i++)
	{
		printf("    book %d details \n",i+1);
		fflush(stdin);
		printf("enter title of the book : ");
		gets(b[i].title);

		printf("enter author name : ");
		gets(b[i].author);
	
		printf("enter number of pages : ");
		scanf("%d",&b[i].pages);
	
		printf("enter price of the book : ");
		scanf("%f",&b[i].price);
	
		printf("\n");
	}

}

void display(struct Book b[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("-------book details--------\n");
	
		printf("title : %s \n",b[i].title);
		printf("author : %s \n",b[i].author);
		printf("number of pages : %d \n",b[i].pages);
		printf("price : %f \n",b[i].price);
	
		printf("----------------------------\n");
	}
	
}

int main()
{
	int i,n;
	
	printf("enter number of books :\n");
	scanf("%d",&n);
	printf("\n");
	
	struct Book b[n];
	
	input(b,n);
	display(b,n);
}*/


#include<stdio.h>
#include<string.h>

struct Book 
{
	char title[30];
	char author[30];
	int pages;
	float price;
	char DOP[10];
	int edition;
};

void input(struct Book *book)
{
	printf("-----enter Book details-----\n");
	printf("enter the title: \n");
	gets(book->title);
	printf("enter the author name: \n");
	gets(book->author);
	printf("enter the no.of pages: \n");
	scanf("%d",&book->pages);
	printf("entre the price of book: \n");
	scanf("%f",&book->price);
	fflush(stdin);
	printf("enter the date of publication: \n");
	scanf("%s",&book->DOP);
	printf("enter the book edition: \n");
	scanf("%d",&book->edition);
}
void display(struct Book *book)
{
	printf("------BOOK DETAILS ARE ------\n");
	printf("TITLE : %s\n",book->title);
	printf("NAME OF AUTHOR : %s\n",book->author);
	printf("NO.OF PAGES : %d\n",book->pages);
	printf("PRICE : %f\n",book->price);
	printf("DATE OF PUBLICATION : %s\n",book->DOP);
	printf("BOOK EDITION : %d\n",book->edition);	
}
int main()
{
	struct Book book;
	input(&book);
	display(&book);
}
