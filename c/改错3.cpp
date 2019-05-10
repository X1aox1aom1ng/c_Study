#include <stdio.h>

main()
{
    double b;
    long a = 65535;
    char c, d;
    int f, g;

    b = (1234.0 - 1) / 10;
    scanf("%c", &c);
    scanf("%c", &d);
    scanf("%c\t", &f);
    scanf("%c", &g);
    printf("%c,%c,%c,%c,%f,%d", c, d , f, g, b, a);
}
