#include<stdio.h>
void swap(int x ,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	
}
int main()
{
	int x=11,y=12;
	swap(x,y);
	printf("%d,%d",x,y);
	
}

