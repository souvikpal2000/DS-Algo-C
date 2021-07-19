#include <stdio.h>
int multiplication(int *arr, int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return *(arr+n) * multiplication(arr,n-1);
	}
}
int main()
{
	printf("Multiplication of Numbers\n");
	printf("*************************\n\n");
	int n;
	printf("Enter Size of Array : ");
	scanf("%d",&n);
	printf("\n");
	int arr[100],i;
	printf("Enter Numbers : \n");
	for(i=0;i<n;i=i+1)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n");
	int result = multiplication(arr,n-1);
	printf("Result : %d\n",result);
}