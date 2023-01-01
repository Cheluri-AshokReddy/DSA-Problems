#include<stdio.h>
int main()
{
	int a[100];
	int i,sum=0,n;
	printf("entre the size of the ayyay:__________________");
	scanf("%d",&n);
	printf("entre the elements of the array:______");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		printf(" %d",a[i]);
	}
		for(i=0;i<n;i++)
		{
			sum+=a[i];
		}
				printf("\n\n\n sum of the elements in the arry is %d",sum);
				
				
}
