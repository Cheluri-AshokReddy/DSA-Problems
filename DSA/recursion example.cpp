#include<stdio.h>
int  display(int n)
{
	if(n==0)
	return 0;
	else
	{
		printf("%d",n);
		display(n-1);
		printf("%d",n);
	}
}
int  main()
{
	int n;
	display(1);
}
