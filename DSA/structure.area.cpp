#include<stdio.h>
struct Rectangle
{
	int lenth;
	int breadth;
	char x;
};
int main()
{
	struct Rectangle r1={12,45};
	r1.lenth=99;
	r1.breadth=99;
	printf("area of rectangle is %d\n",r1.lenth*r1.breadth);
	printf("%d",sizeof(r1));
}
