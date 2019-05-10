#include <stdio.h>
#define P 3.14159
int main()
{
	int h ,r;
	double bucket,n;
	
	scanf("%d,%d",&h,&r);
	bucket=P*r*r*h;
	n=20000/bucket;
	printf("please input the height and the radius:\n");
	
	if(n-(int)n!=0)
	{
		printf("%d",(int)n+1);
	}else{
		printf("%d",n);
	}
}
