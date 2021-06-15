#include <stdio.h>
int main()
{
	printf("Inserting an Element in a Sorted Array\n");
	printf("**************************************\n\n");
	int arr[100],n,i,j,no;
	printf("Enter Size of Array : ");
	scanf("%d",&n);
	printf("\n");
	printf("Enter Elements : \n");
	for(i=0;i<n;i=i+1)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n");
	printf("Enter Number to be Inserted : ");
	scanf("%d",&no);
	for(i=0;i<n;i=i+1)
	{
		if(no<=arr[i])
		{
			for(j=n-1;j>=i;j=j-1)
			{
				arr[j+1] = arr[j];
			}
			arr[i] = no;
			break;
		}
		else
		{
			arr[n] = no;
		}
	}
	for(i=0;i<n+1;i=i+1)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}