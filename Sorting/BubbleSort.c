#include <stdio.h>
void bubble(int *arr, int n)
{
	int i,j,temp=0;
	for(i=0;i<n;i=i+1)
	{
		for(j=0;j<n-i-1;j=j+1)
		{
			if(*(arr+j) > *(arr+j+1))
			{
				temp = *(arr+j);
				*(arr+j) = *(arr+j+1);
				*(arr+j+1) = temp;
			}
		}
	}
}
int main()
{
	printf("Bubble Sort\n");
	printf("***********\n\n");
	int arr[100];
	int n,i;
	printf("Enter Size of Array : ");
	scanf("%d",&n);
	printf("\n");
	printf("Enter Numbers : \n");
	for(i=0;i<n;i=i+1)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n");
	bubble(arr,n);
	printf("Sorted in Ascending Order : \n");
	for(i=0;i<n;i=i+1)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}