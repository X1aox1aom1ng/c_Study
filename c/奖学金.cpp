#include <stdio.h>
#define N 5
char next(int num);
int main()
{
    int a[N][N + 1], i, j;

    for (i = 0; i < N; i++)
    {
    	printf("Enter No. and score as: MT EN PH\n"); 
        for (j = 0; j < N - 1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < N; i++)
    {
        a[i][N - 1] = 0;
        for (j = 1; j < N - 1; j++)
        {
            a[i][N - 1] += a[i][j];
        }
    }

    for (i = 0; i < N; i++)
    {
        a[i][N] = a[i][N - 1] / 3;
    }

    printf("NO\tMT\tEN\tPH\tSUM\tV\t>90\n" );
    printf("------------------------------------------------------\n");
    for (i = 0; i < N; i++)
    {
        printf("%d\t%d\t%d\t%d\t%d\t%d\t%c\n", a[i][0], a[i][1], a[i][2], a[i][3], a[i][4], a[i][5], next(a[i][5]));
    }

    return 0;
}

char next(int num)
{
    if (num > 90)
    {
        return 'Y';
    }
    else
    {
        return 'N';
    }
}
