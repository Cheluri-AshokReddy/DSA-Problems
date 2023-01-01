#include<stdio.h>
int sum(int n1,int n2);

int main()
{
	int n1,n2,res;
	printf("entre the first element %d:___\n",n1);
	scanf("%d",&n1);
	printf("entre the second element %d:__\n",n2);
	scanf("%d",&n2);
	res=sum(n1,n2);
	printf("sum of two numbers is  :  %d\n",res);
	
	
}
 int sum(int n1,int n2)
 {
 	int n3;
 	n3=n1+n2;
 	return(n3);
 }

