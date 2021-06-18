#include <stdio.h>
void transpose(int (*arr)[100], int row, int col)
{
	/*printf("%d", *(*(arr+0)+0));
	printf("%d", *(*(arr+1)+0));
	printf("%d", *(*(arr+2)+0));*/
	int i,j;
	for(i=0;i<col;i=i+1)
	{
		for(j=0;j<row;j=j+1)
		{
			printf("%d\t",*(*(arr+j)+i));
		}
		printf("\n");
	}
}
int main()
{
	printf("Transpose of Matrix\n");
	printf("*******************\n\n");
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
			printf("arr[%d][%d] : ",(i+1),(j+1));
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	printf("Original Matrix : \n");
	for(i=0;i<row;i=i+1)
	{
		for(j=0;j<col;j=j+1)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("Transpose Matrix : \n");
	transpose(arr,row,col);
}