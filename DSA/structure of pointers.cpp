#include<stdio.h>
#include<stdlib.h>
struct Rectangle
{
	int l;
	int b;
	int area;
};
int main()
{
	struct Rectangle *p;
	p=(struct Rectangle*)malloc(sizeof(struct Rectangle));
	p->l=10;
	p->b=10;
	p->area=p->l*p->b;
	printf("%d",p->l);
	printf("\n%d",p->b);
	printf("%d",p->area);
}
