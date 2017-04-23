//for grammar
//E->iE1
//E1->+iE1/#(epsilon)
//testing input is : i+i$
#include<stdio.h>
int i=0;
char expr[20];
void e();
void e1();
void match(char c);
int main()
{
	printf("enter the expression:\n");
	scanf("%s",expr);
	e();
	if(expr[i]=='$')
	{
		printf("Succesfully parsed");
	}
	else
	{
		printf("Unsuccessful parsing");
	}
return 0;
}
void e()
{
	if(expr[i]=='i')
	{
		match('i');
		e1();
	}
}
void e1()
{
	if(expr[i]=='+')
	{
		match('+');
		match('i');
		e1();
	}
	else
	{
		return;
	}
}
void match(char c)
{
	if(expr[i]==c)
	{
		i++;
	}
	else
	{
		printf("error");
	}
}
		
