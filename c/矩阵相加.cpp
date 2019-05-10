#include <stdio.h>
int main()
{
	int m, n, i, j;
	printf("Input m, n:");
	scanf("%d,%d",&m,&n);
	
	int a[m][n], b[m][n];
	printf("Input %d*%d matrix a:\n",m,n);
	for(i = 0;i < m;i++)
	{
		for(j = 0;j < n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Input %d*%d matrix b:\n",m,n);
	for(i = 0;i < m;i++)
	{
		for(j = 0;j < n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("Results:\n");
	for(i = 0;i < m;i++)
	{
		for(j = 0;j < n;j++)
		{
			printf("%6d",a[i][j]+b[i][j]);
		}
		printf("\n"); 
	}
	
	
	return 0;
 } 
