// Input Data on 2D Array

#include<stdio.h>
void main()
{
	int arr[50][50],m,n;

	printf("Enter the size of row: ");
	scanf("%d",&m);
	printf("\nEnter the size of column: ");
	scanf("%d",&n);

	printf("\nEnter the elements in the array:\n");
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			scanf("%d\n",&arr[i][j]);
		}
	}

	printf("\nElements in the array are:\n");
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
}