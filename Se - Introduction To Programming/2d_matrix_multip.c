//2d matrix multiplication

#include <stdio.h>

int main()
{	
	int i,j,k;
	int a[2][2],b[2][2],result[2][2];
	
	printf("-------------------Matrix: 1-------------------\n\n");
	
	//get value From user for matrix 1
	for(i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			printf("Enter elements : ");
			scanf("%d",&a[i][j]);
		}
	}
	
	//print user entered value in matrix 1
	printf("\n");
	for(i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}	
	
	printf("\n\n-------------------Matrix: 2-------------------\n\n");
	
	//get value From user for matrix 2
	for(i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			printf("Enter elements : ");
			scanf("%d",&b[i][j]);
		}
	}
	
	//print user entered value in matrix 2
	printf("\n");
	for(i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	
	//calculate matrix1 and matrix2
	
	for(i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			result[i][j] = a[i][j] * b[i][j];
		}
	}
	printf("\n\n-------------Result is-------------\n\n");
	//print final result
	for(i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			printf("%d\t",result[i][j]);
		}
		printf("\n");
	}		
	return 0;
}
