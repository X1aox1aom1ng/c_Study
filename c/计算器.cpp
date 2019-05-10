#include <stdio.h>
#include <stdlib.h>
main()
{
    float a = 0, b = 0;
    char op;
    scanf("%f%c%f", &a, &op, &b);
    if (op == '+') printf("%.2f%c%.2f=%.2f\n", a, op, b, a + b);
    else if (op == '-') printf("%.2f%c%.2f=%.2f\n", a, op, b, a - b);
    else if (op == '*') printf("%.2f%c%.2f=%.2f\n", a, op, b, a * b);
    else if (op == '/')
    {
        if (b != 0) printf("%.2f%c%.2f=%.2f\n", a, op, b, a / b);
        else printf("dat is 0!Error!\n");
    }
    else printf("Error!\n");
}
