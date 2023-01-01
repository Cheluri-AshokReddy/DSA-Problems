#include<stdio.h>
int linearSearch(int a[],int n,int item)
{	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==item)
		{
		  return i;
		
		}	
		
	}
	return -1;
}
int main ()
{
	int a[10],i,item,n;
	printf("enter the size of the arry:__\n");
	scanf("%d",&n);
	printf("enter the elements to print:___\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for (i=0;i<n;i++)
	{
		
		printf("%d\n",a[i]);
	}
	printf("\n\n\n");
	printf("enter the  number to be search:_");
	scanf("%d",&item);
	
   int result=linearSearch(a,n,item);
    
    if (result == -1)
    {
    	printf("element notfound in the index:_\n");
    	
	}
	else
	{
		printf("element found in the index:_%d\n",result);
	}
}
	
