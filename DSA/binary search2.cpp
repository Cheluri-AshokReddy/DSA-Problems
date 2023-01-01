#include<stdio.h>

int binarySearch(int A[],int n, int x)
{
	int l,mid,h;
	l=0;
	h=n-1;
	
	while(l<=h)
	{
		mid=(l+h)/2;
		
		if(x==A[mid])
		{
			return mid;
		}
		else if(x<A[mid])
		{
			h=mid-1;
		}
		else
		{
			l=mid+1;
		}
	}
	return -1;
}

int main()
{
	int a[5]={1,2,3,4,5},x;
	printf("enter an element to search: \n");
	scanf("%d",&x);
	int n = sizeof(a)/sizeof(a[0]);
	int index = binarySearch(a,n,x);
		
	if(index != -1)
	{
		printf("element %d is found at index %d....",x,index);
	}
	else
	{
		printf("element not found....");
	}

}
