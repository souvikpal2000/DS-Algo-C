#include <stdio.h>
int main()
{
	printf("Inserting an Element in an Array\n");
	printf("*******************************\n\n");
	int arr[100],n,i,no,pos;
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
	while(1)
	{
		printf("Enter Position : ");
		scanf("%d",&pos);
		if(pos<1)
		{
			continue;
		}
		else if(pos>n+1)
		{
			continue;
		}
		for(i=n-1;i>=pos-1;i=i-1)
		{
			arr[i+1] = arr[i];
		}
		arr[pos-1] = no;
		break;
	}
	printf("\n");
	for(i=0;i<n+1;i=i+1)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}