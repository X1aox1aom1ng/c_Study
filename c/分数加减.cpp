#include <stdio.h>
int main()
{
	int a, b, c, d, i, fmu, fzi, max;
	char e;
	scanf("%d/%d%c%d/%d",&a,&b,&e,&c,&d);
	
//	if(b%d == 0||d%b == 0)
//	{
//		if(b >= d)
//		{
//			c=(b/d)*c;
//			fmu=b;
//		}else{
//			a=(d/b)*a;
//			fmu=d;
//		}
//	}else{
//		fmu=b*d;
//		a=a*d;
//		c=c*b;
//	}

	fmu=b*d;
	a=a*d;
	c=c*b;
	
	if(e == '+')
	{
		fzi=a+c;
	}else{
		fzi=a-c;
	}
	
	for(i=0;i<(fmu<fzi?fmu:fzi);i++)
	{
		if(fmu%i==0&&fzi%i==0)
		{
			fmu=fmu/i;
			fzi=fzi/i;
		}
	}
	
	printf("%d/%d",fzi,fmu);
	return 0;
 } 
