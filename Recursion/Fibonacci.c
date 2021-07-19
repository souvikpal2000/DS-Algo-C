#include <stdio.h>
void fibonacci(int n, int a, int b)
{
	if(n==0)
	{
		printf("\n");
		return;
	}
	else
	{
		int result = a + b;
		printf("%d ",result);
		a = b;
		b = result;
		fibonacci(n-1,a,b);
	}
}
int main()
{
	printf("Fibonacci Series\n");
	printf("****************\n\n");
	int n;
	printf("Enter Number of Terms : ");
	scanf("%d",&n);
	printf("\n");
	int a=0,b=1;
	printf("%d %d ",a,b);
	fibonacci(n-2,a,b);
}