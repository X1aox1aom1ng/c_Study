#include <stdio.h>
#include <math.h>
int main()
{
	int x, y, a, b, c;
	printf("input data is:" );
	scanf("%d",&x);
	
	x = fabs(x);
	a = x / 100;
	b = (x - a * 100) / 10;
	c = x % 10;
	y = a + b + c;
	
	printf("The sum of the total bit is %d\n",y);
	
	return 0;
 } 
