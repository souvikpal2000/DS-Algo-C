#include <stdio.h>
int *findSmall(int *arr, int n)
{
	int i=0, small=999999, *smallAddress;
	while(i<n)
	{
		if(small > *(arr+i))
		{
			small = *(arr+i);
			smallAddress = arr + i;
		}
		i++;
	}
	return smallAddress;

}
int *findLarge(int *arr, int n)
{
	int i=0, large=-99999, *largeAddress;
	while(i<n)
	{
		if(large < *(arr+i))
		{
			large = *(arr+i);
			largeAddress = arr + i;
		}
		i++;
	}
	return largeAddress;
}
void interchange(int *smallAddress, int *largeAddress)
{
	int temp=0;
	temp = *smallAddress;
	*smallAddress = *largeAddress;
	*largeAddress = temp;
}
void passArray(int *arr, int n)
{
	int *smallAddress = findSmall(arr,n);
	int *largeAddress = findLarge(arr,n);
	interchange(smallAddress, largeAddress);
}
int main()
{
	printf("Interchange the Largest & Smallest Number in an Array\n");
	printf("*****************************************************\n\n");
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
	passArray(arr,n);
	printf("After Interchanging : \n");
	for(i=0;i<n;i=i+1)
	{
		printf("%d\n",arr[i]);
	}
}