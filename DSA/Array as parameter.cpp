#include<stdio.h>
void fun(int *A,int n)
{
	int i;
    for(i=0;i<n;i++)
	{
		printf("%d",A[i]);
		printf("\t");
	}	
}
int main()
{
	int A[]={2,6,4,7,9};
	fun(A,5);
}
