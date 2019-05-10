#include <stdio.h>
#define N 5

void average(float a[N],float b[N])
{
	int i,j=0;
	float av, bv;
	for(i = 0;i < N;i++)
	{
		av=av+a[i];
		bv=bv+b[i];
	}
	a[5]=av/5;
	b[5]=bv/5;
	printf("\n 序号     课程1     2     3     4     5     平均分\n");
	printf("\n NO%2d",1);
	for(i = 0;i < N;i++)
	{
		if(av>bv)
		{
			printf("%8.2f",a[i]);
		}else{
			printf("%8.2f",b[i]);
			j=1;
		}
	}
	printf("\n NO%2d",2);
	if(j == 0){
		printf("%8.2f",b[i]);
	}else{
		printf("%8.2f",a[i]);
	}
}

int main()
{
	int i;
	float a[N], b[N];
	
	printf("\n输入学生%4d的5个成绩：\n",1);
	for(i = 0;i < N;i++)
	{
		scanf("%f",&a[i]);
	}
	printf("\n输入学生%4d的5个成绩：\n",2);
	for(i = 0;i < N;i++)
	{
		scanf("%f",&b[i]);
	}
	
	average(a,b);
	
	return 0;
}
