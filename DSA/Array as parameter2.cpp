#include<stdio.h>
#include<stdlib.h>
int * fun(int n)
{
	int *p;
	p=(int*)malloc(n*(sizeof(int)));
	for(int i=0;i<n;i++)
	{
		p[i]=i*5+1;
	}
	return (p);	
}
int main()
{
	int *A;
	int n=20;
	A=fun(20);
	for(int i=0;i<n;i++)
	{
		printf("%d\n",A[i]);
	}
}
