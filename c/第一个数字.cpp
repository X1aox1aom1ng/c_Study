#include <stdio.h>
int main()
{
	int i[10], j;
	printf("请输入一个整数：");
	scanf("%d",&i);
	if(i > 0)
	{
		j = i[0];
		printf("该整数以%d打头！\n",i[0]);
	}else if(i == 0)
	{
		printf("该整数以%d打头！\n",0);
	}else{
		j = i[1];
		printf("该整数以-%d打头！\n",j);
	}
	
	return 0;
}
