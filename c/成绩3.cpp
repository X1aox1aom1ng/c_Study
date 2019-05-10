#include <stdio.h>
#define N 5
int main()
{
	int i, ma1 = 0, ma2 = 0;
	float a[N], b[N], av = 0, bv = 0, cv = 0, dv = 0, max1 = a[0], max2 = b[0];
	
	printf("\n输入学生%4d的5个成绩：\n",1);
	for(i = 0;i < N;i++)
	{
		scanf("%f",&a[i]);
		av=av+a[i];
	}
	printf("\n输入学生%4d的5个成绩：\n",2);
	for(i = 0;i < N;i++)
	{
		scanf("%f",&b[i]);
		bv=bv+b[i];
	}
	
	a[N]=av/5;
	b[N]=bv/5;
	
	printf("\n 序号     课程1     2     3     4     5     平均分\n");
	printf("\n NO%2d",1);
	for(i = 0;i <= N;i++)
	{
		printf("%8.2f",a[i]);
	}
	printf("\n NO%2d",2);
	for(i = 0;i <= N;i++)
	{
		printf("%8.2f",b[i]);
	}
	
	printf("\n课平均");
	for(i = 0;i < N;i++)
	{
		cv = (a[i] + b[i])/2;
		printf("%8.2f",cv);
	}
	
	for(i = 1;i < N;i++)
	{
		if(a[i] > max1)
		{
			max1 = a[i];
			ma1 = i + 1;
		}
		if(b[i] > max2)
		{
			max2 = b[i];
			ma2 = i + 1;
		}
	}
	if(max1 > max2)
	{
		printf("\n\n最高分%8.2f是%d号学生的第%d门课\n",max1,1,ma1);
	}else{
		printf("\n\n最高分%8.2f是%d号学生的第%d门课\n",max2,2,ma2);
	}
	
	dv = (a[N] + b[N])/2;
	printf("\n方差 %8.2f",(a[N]*a[N]+b[N]*b[N]-dv*dv*2)/2);
	
	return 0;
}
