#include <stdio.h>
int main()
{
	int a, b, c, d;
	printf("请输入两个整数：");
	scanf("%d %d",&a,&b);
	c = a / b;
	d = a % b;
	printf("%d,%d",a,b);
	printf("%13d Remainder = %d\n",c,d);
	printf("       ------\n");
	printf("%5d ) %5d",b,a);
	
	return 0;
}
