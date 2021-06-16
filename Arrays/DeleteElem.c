#include <stdio.h>
int main()
{
	printf("Deleting an Element from an Array\n");
	printf("*********************************\n\n");
	int arr[100],i,n,pos;
	printf("Enter Number of Elements : ");
	scanf("%d",&n);
	printf("\n");
	printf("Enter Elements : \n");
	for(i=0;i<n;i=i+1)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n");
	while(1)
	{
		printf("Enter Position to be Deleted : ");
		scanf("%d",&pos);
		if(pos<1)
		{
			continue;
		}
		else if(pos>n)
		{
			continue;
		}
		for(i=pos;i<n;i=i+1)
		{
			arr[i-1] = arr[i];
		}
		break;
	}
	n = n - 1;
	printf("\n");
	for(i=0;i<n;i=i+1)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}