#include<stdio.h>
int main()
{
	int a[50],b[10][10];
	int n,rows,cols;
	int i,j,sum1,sum2;
	sum1=0;
	sum2=0;
	printf("Enter the number of element in 1D array:");
	scanf("%d",&n);
	printf("Enter %d element:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n 1D Array elements:\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		sum1=sum1+a[i];
	}
	printf("\n Sum of 1D Array=%d",sum1);
	printf("\nEnter the number of row in 2D array:");
	scanf("%d",&rows);
	printf("\nEnter the number of column in 2D array:");
	scanf("%d",&cols);
	printf("Enter the elements of 2D array:\n\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)	
	 {
		scanf("%d",&b[i][j]);
	 }
	}
	printf("\n 2D Array elements:\n");
	for(i=0;i<rows;i++)
	{
	for(j=0;j<cols;j++)
	{
		printf("%d\t",&b[i][j]);
		sum2=sum2+b[i][j];
	}	
	printf("\n");	
	}
	printf("Sum of 2D Array=%d",sum2);
	return 0;
	}
	
	


