#include <stdio.h>
int main()
{
	printf("Merge Two Sorted Array\n");
	printf("**********************\n\n");
	int arr1[100], arr2[100], arr[200], i, n1, n2;
	printf("Enter Size of 1st Array : ");
	scanf("%d",&n1);
	printf("\n");
	printf("Enter Elements for 1st Array : \n");
	for(i=0;i<n1;i=i+1)
	{
		scanf("%d",&arr1[i]);
	}
	printf("\n");
	printf("Enter Size of 2nd Array : ");
	scanf("%d",&n2);
	printf("\n");
	printf("Enter Elements for 2nd Array : \n");
	for(i=0;i<n2;i=i+1)
	{
		scanf("%d",&arr2[i]);
	}
	printf("\n");
	int n = n1 + n2;
	int x=0,y=0,pos=0;
	for(i=0;i<n;i=i+1)
	{
		if(x==n1 || y==n2)
		{
			break;
		}
		if(arr1[x] <= arr2[y])
		{
			arr[i] = arr1[x];
			x =  x + 1;
		}
		else if(arr1[x] >= arr2[y])
		{
			arr[i] = arr2[y];
			y = y + 1;
		}
		pos = i;
	}
	if(x<n1)
	{
		for(i=(pos+1);i<n;i=i+1)
		{
			arr[i] = arr1[x];
			x++;
		}
	}
	if(y<n2)
	{
		for(i=(pos+1);i<n;i=i+1)
		{
			arr[i] = arr2[y];
			y++;
		}
	}
	for(i=0;i<n;i=i+1)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}