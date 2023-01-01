#include<stdio.h>
struct rectangle
{
	int length;
	int breadth;
};
void fun(struct rectangle *r1)
{
	int Area;
	Area =r1->length*r1->breadth;
	printf("%d",Area);
	int r=r1->length+1;
	printf("\n%d",r);
}
int main()
{
	struct rectangle r={ 12,45};
	printf("%d %d\n",r.length,r.breadth);
	fun(&r);
}
