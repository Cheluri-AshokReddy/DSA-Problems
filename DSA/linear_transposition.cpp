#include<stdio.h>

void swap(int *a,int *b)
     {
     	int temp=*a;
     	*a=*b;
     	*b=temp;
	 }

int linearSearch(int a[],int n, int item)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==item)
		{
			swap(&a[i-1],&a[i]);
			return i;
		}
	}
	return -1;
}
	 
int main()
{
	int a[10];
	int n,i,item;
	printf("enter  the size of the array:---\n");
	scanf("%d",&n);
	printf("enter the elements of the array:__\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
		
	}
	printf("enter the element to search:__\n");
	scanf("%d",&item);
	linearSearch(a, n ,item);
	linearSearch(a, n ,item);
	linearSearch(a, n ,item);
	int result=linearSearch(a, n ,item);
	
	if(result==-1)
	{
		printf("element not found in the array");
	}
	else
	{
		printf("element found in the index:_%d\n",result);
	}
	for (i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	
}











