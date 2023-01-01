#include<stdio.h>
struct Rectangle
{
	int L;
	int B;
	char x;
};
int main()
{
	struct Rectangle r1={12,7};
	r1.L=12;
	r1.B=11;
	printf("%d",L);
	printf("%d",B);
	printf("%d",sizeof(r1));
}
