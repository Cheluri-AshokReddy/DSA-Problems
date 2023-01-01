#include<stdio.h>
#include<string.h>

struct Employee
{
	char name[20];
	int id;
	int experience;
	char company[20];
	float salary;
};

void input(struct Employee e[])
{
	for(int i=2;i<10;i++)
	{
		printf("   employee %d details \n",i+1);
		fflush(stdin);	
		printf("enter employee name : ");
		gets(e[i].name);
		
		printf("enter employee id : ");
		scanf("%d",&e[i].id);
		fflush(stdin);
		printf("enter company name: ");
		gets(e[i].company);
		
		printf("enter years of experience : ");
		scanf("%d",&e[i].experience);
		
		printf("enter employee's salary : ");
		scanf("%f",&e[i].salary);
		
		printf("\n");
	}
}

void raiseSalary(struct Employee e[])
{
	for(int i=2;i<10;i++)
	{
		e[i].salary=e[i].salary+e[i].salary*0.2;
	}
}

void display(struct Employee e[])
{
	for(int i=2;i<10;i++)
	{
		printf("------employee details--------\n");
		
		printf("employee name : %s\n",e[i].name);
		printf("employee id : %d\n",e[i].id);
		printf("employee comapny: %s\n",e[i].company);
		printf("employee experience(years) : %d\n",e[i].experience);
		printf("employee salary : %f\n",e[i].salary);
		
		printf("-------------------------------\n");	
	}
}

int main()
{
	
	
	struct Employee e[10];
	
	input(e);
	raiseSalary(e);
	display(e);
}
