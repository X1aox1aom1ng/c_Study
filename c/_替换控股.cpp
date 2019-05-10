#include <stdio.h>
int main()
{
	int i = 0, j = 0;
	char chars[] = {'a',' ','b',' ','c',' ',' ','d'};
	char s[50];
	char *a, *b;
	a = chars;
	b = s;
	do
	{
		if(a[i]!= ' ')
		{
			*(b+j) = *(a+i);
			j++;
		}else if(a[i]== ' ')
		{
			if(*(b+j-1)!=' ')
			{
				*(b+j) = *(a+i);
				j++;
				*(b+j) = '_';
				j++;
				*(b+j) = ' ';
			}else{
				*(b+j) = '_';
				j++;
				*(b+j) = ' ';
			}
		}
		i++;
	}while(i<8);
	printf("替换后数组为：");
	for(i=0;i<8;i++)
	{
		printf("%c",chars[i]);
	}
	return 0;
 } 

