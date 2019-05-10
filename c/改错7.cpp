#include <stdio.h>
int main()
{
    int x, y;
    printf("Input x:");
    scanf("%d", &x);
    if (x >= -5 && x <= 5)
    {
        y = -x;
    }
    else if (x == 10)
    {
        y = 100;
    }
    else if ((x >= -10 && x < 5) || (x > 5 && x <= 10)) 
    {
        y = -x;
    }
    printf("f(%d)=%d", x, y);
}
