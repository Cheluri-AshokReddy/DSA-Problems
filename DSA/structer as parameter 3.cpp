#include<stdio.h>
#include<stdlib.h>
struct rectangle
{
	int length;
	int breadth;
};
struct rectangle *fun()
{
	struct rectangle *p;
	p=(struct rectangle*)malloc(sizeof(struct rectangle));
	p->length=12;
	p->breadth=77;
	return (p);
}
int main()
{
	struct rectangle *A;
	A=fun();
	printf("%d %d",A->length,A->breadth);
}








