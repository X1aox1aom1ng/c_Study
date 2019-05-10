#include<stdio.h>
long func(int n);
int main()
{
    int i, n;
    printf("Input n:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d! = %1d\n", i, func(i));
    }
    return 0;
}
long func(int n)
{
    static long p = 1;
    p = p * n;
    return p;
}
