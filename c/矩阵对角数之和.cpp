#include <stdio.h>
#define  N 10
int AddDiagonal(int a[N][N], int n);
int main()
{
    int a[N][N], i, j, n, sum;
    printf("Input n:");
    scanf("%d", &n);
    printf("Input %d*%d matrix:\n", n, n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    sum=AddDiagonal(a,n);
    printf("sum = %d\n", sum);
    
    return 0;
}

int AddDiagonal(int a[N][N], int n)
{
	int i, sum = 0, su = 0, num = 0;
    for (i = 0; i < n; i++)
    {
        sum += a[i][i];
        su += a[i][n - 1 - i];
    }
    num = su + sum;	
    
    if(n%2==1)
    {
    	num=num-a[n/2][n/2];
	}
	
	return num;
	
}
