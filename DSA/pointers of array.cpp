#include<stdio.h>
int main()
{
	int A[5]={1,2,3,4,5};
	int *p;
	p=A;
	for(int i=0;i<5;i++)
	{
		printf("%d", *p[i+1]);
	}
}
