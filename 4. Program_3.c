// Matrix Addition

#include<stdio.h>
#include<stdlib.h>
void main()
{
	int x[50][50],y[50][50],z[50][50],r1,r2,c1,c2;

	printf("Enter the size of row of 1st Matrix: ");
	scanf("%d",&r1);
	printf("Enter the size of column of 1st Matrix: ");
	scanf("%d",&c1);

	printf("Enter the size of row of 2nd Matrix: ");
	scanf("%d",&r2);
	printf("Enter the size of column of 2nd Matrix: ");
	scanf("%d",&c2);

	if(r1!=r2 || c1!=c2)
	{
		printf("\nMatrix Addition Not Possible");
		exit(0);
	}

	printf("\nEnter the elements in 1st Matrix:\n");
	for(int i=0; i<r1; i++)
	{
		for(int j=0; j<c1; j++)
		{
			scanf("%d\n",&x[i][j]);
		}
	}

	printf("\nElements in the 1st Matrix: are:\n");
	for(int i=0; i<r1; i++)
	{
		for(int j=0; j<c1; j++)
		{
			printf("%d\t",x[i][j]);
		}
		printf("\n");
	}


	

	printf("\nEnter the elements in 2nd Matrix:\n");
	for(int i=0; i<r2; i++)
	{
		for(int j=0; j<c2; j++)
		{
			scanf("%d\n",&y[i][j]);
		}
	}

	printf("\nElements in the 2nd Matrix are:\n");
	for(int i=0; i<r2; i++)
	{
		for(int j=0; j<c2; j++)
		{
			printf("%d\t",y[i][j]);
		}
		printf("\n");
	}

	
	printf("\nMatrix Addition is:\n");
	for(int i=0; i<r1; i++)
	{
		for(int j=0; j<c1; j++)
		{
			z[i][j]= x[i][j] + y[i][j];
			printf("%d\t",z[i][j]);
		}
		printf("\n");
	}







}