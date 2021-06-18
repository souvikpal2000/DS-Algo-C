#include <stdio.h>
void multiply(int (*arr)[100], int row, int col)
{
	/*printf("%p\n", arr);
	printf("%d\n", **arr);
	printf("%d\n", *(*arr+1));
	printf("%d\n", *(*arr+2));
	printf("%d\n", *(*(arr+1)+0));*/
	int i,j;
	for(i=0;i<row;i=i+1)
	{
		for(j=0;j<col;j=j+1)
		{
			*(*(arr+i)+j) = *(*(arr+i)+j) * 2;
		}
	}
}
int main()
{
	printf("Passing 2D Array to Function\n");
	printf("****************************\n\n");
	int arr[100][100],row,col,i,j;
	printf("Enter Number of Row    : ");
	scanf("%d",&row);
	printf("Enter Number of Column : ");
	scanf("%d",&col);
	printf("\n");
	for(i=0;i<row;i=i+1)
	{
		for(j=0;j<col;j=j+1)
		{
			printf("a[%d][%d] : ",(i+1),(j+1));
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	multiply(arr,row,col);
	printf("After Multiplication : \n");
	for(i=0;i<row;i=i+1)
	{
		for(j=0;j<col;j=j+1)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
}