#include <stdio.h>
int main()
{
	int i[10], j;
	printf("������һ��������");
	scanf("%d",&i);
	if(i > 0)
	{
		j = i[0];
		printf("��������%d��ͷ��\n",i[0]);
	}else if(i == 0)
	{
		printf("��������%d��ͷ��\n",0);
	}else{
		j = i[1];
		printf("��������-%d��ͷ��\n",j);
	}
	
	return 0;
}
