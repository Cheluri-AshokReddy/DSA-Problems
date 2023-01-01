#include<stdio.h>

void swap (int *a,int *b)
{
    	int temp=*a;
    	*a=*b;
    	*b=temp;
}

int linearSearch(int a[],int n,int item)
{
	for( int i=0;i<n;i++)
    	{
    		if(a[i]==item)
    		{
    			swap(&a[i-1],&a[i]);
    			return i;
			}
			
		}
	return -1;
 } 
int main ()
{
	int a[10],i,item,n,m,temp;
	printf("enter the size of the arry:__\n");
	scanf("%d",&n);
	printf("enter the elements to print:___\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n\n\n");
	printf("enter the to be search:_");
	scanf("%d",&item);
     
    linearSearch(a,n,item);
    linearSearch(a,n,item);	
	linearSearch(a,n,item);	
	int result=linearSearch(a,n,item);	
    if(result==-1){
    	printf("element not found\n");
	}	
	else
	{
		printf("element found at index - %d\n",result);
	}
		
		
		
	for (i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	}
