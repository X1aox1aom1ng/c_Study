#include <stdio.h>
#include <string.h>
#define N 25
#define M 2500
int main()
{
	int i, str, num = 0, a[5] = {0,0,0,0,0};
	char word[M];
	printf("请输入一行字符：");
	gets(word);
	str = strlen(word);
	word[str+1] = '\0';
	
	for(i=0;i<=str;i++)
	{
		num++;
		if(word[i] == ' ' || word[i] == '\0')
		{
			num--;
			if(num == 1)
			{
				a[0]++;
			}else if(num >= 2 && num <= 5)
			{
				a[1]++;
			}else if(num >= 6 && num <= 10)
			{
				a[2]++;
			}else if(num >= 11 && num <= 20)
			{
				a[3]++;
			}else if(num >= 21)
			{
				a[4]++;
			}
			num = 0;
		}
	}
	
	printf("长度为1的单词数：%d\n",a[0]);
	printf("长度在2到5的单词数：%d\n",a[1]);
	printf("长度在6到10的单词数：%d\n",a[2]);
	printf("长度在11到20的单词数：%d\n",a[3]);
	printf("长度大于等于21的单词数：%d\n",a[4]);
	
	return 0;
}
