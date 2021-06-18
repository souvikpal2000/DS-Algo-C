#include <stdio.h>
void multiply(int *arr, int n)
{
	int i=0;
	while(i<n)
	{
		*(arr + i) = *(arr + i) * 2;
		i++;
	}
}
int main()
{
	printf("Passing Array to Function\n");
	printf("*************************\n\n");
	int arr[100],n,i;
	printf("Enter Number of Elements : ");
	scanf("%d",&n);
	printf("\n");
	printf("Enter Elements : \n");
	for(i=0;i<n;i=i+1)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n");
	multiply(arr,n);
	printf("After Multiplication : \n");
	for(i=0;i<n;i=i+1)
	{
		printf("%d\n",arr[i]);
	}
}