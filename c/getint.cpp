#include <stdio.h>
int getint(int min, int max);
int main()
{
	int min = 3, max = 100, num;
	num = getint(min,max);
	do
	{
		fflush(stdin);
		num = getint(min,max);
	}while(num == 0);
	
	return 0;
}

int getint(int min, int max)
{
	int n;
	printf("请输入[%d..%d]间的一个整数：\n",min,max);
	scanf("%d",&n);
	if(n >= min && n <= max)
	{
		printf("你输入的整数为：%d\n",n);
		return 1;
	}else{
		return 0;
	}
}
