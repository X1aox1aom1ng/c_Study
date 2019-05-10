#include<stdio.h>
#define N 16
int main()
{
    int a, b, n, i;
    int temp[N]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    printf("n=");
    scanf("%d", &a);
    
    n = 0;
    while (a > 0)
    {
        b = a % 2;
        a = a / 2;
        temp[n++] = b;
    }
    
    printf("the binary number is ");
    for (i = N - 1; i >= 0; i--)
    {
    	printf("%d", temp[i]);
	}
        
    return 0; 
}
