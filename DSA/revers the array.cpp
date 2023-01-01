#include<stdio.h>


int main ()


{
	int a[10],i,n;
	printf("entre the size of the array:_________");
	scanf("%d",&n);
	printf("entre the elements of the array_________");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d",a[i]);
	printf("elements stored in the array is:_________");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	printf("\nelements after rever is:_______________________");
	for(i=n-1;i>=0;i--)
	{
		printf("\n%d",a[i]);
	}
	
	}
	

