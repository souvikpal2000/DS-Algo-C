#include <stdio.h>
int factorial(int no)
{
	if(no==0)
	{
		return 1;
	}
	else
	{
		return no * factorial(no-1);
	}
}
int main()
{
	printf("Factorial\n");
	printf("*********\n\n");
	int no;
	printf("Enter Number : ");
	scanf("%d",&no);
	printf("\n");
	int result = factorial(no);
	printf("Factorial of %d is %d\n",no,result);
}