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
	printf("������[%d..%d]���һ��������\n",min,max);
	scanf("%d",&n);
	if(n >= min && n <= max)
	{
		printf("�����������Ϊ��%d\n",n);
		return 1;
	}else{
		return 0;
	}
}
