//#include <stdio.h>
//#include<string.h>
//int main()
//{{
//	int i,j;
//	int RREAK=0,DO=0,GOTO=0,IF=0,WHILE=0;
//	char str[10][6];
//	printf("本程序将为您统计C语言的关键字的个数，请输入，输入end结束输入");
//	for(i=0;str[i]=='end';i++)
//	{
//		scanf("%s",&str[i]);
//		fflush(stdin);
//	}
//	for(i=0;i<10;i++)
//	{
//		switch(str[i])
//		{
//			case 'break':BREAK++;
//			case 'do':DO++;
//			case 'goto':GOTO++;
//			case 'if':IF++;
//			case 'while':WHILE++;
//		}
//			
//	}
//	printf("break     :      %d",BREAK);
//	printf("do        :      %d",DO);
//	printf("goto      :      %d",GOTO);
//	printf("if        :      %d",IF);
//	printf("while     :      %d",WHILE);
//	return 0;
// } 


#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAXWORD 80
#define NKEYS (sizeof(keytab) / sizeof(struct key))
struct key
{                        
    char*word;
    int count;
}keytab[] ={"break", 0,"do", 0,"goto", 0,"if", 0,"while", 0};

void getword(char*word, int lim);
int binsearch(char*word, struct key tab[], int n);
int main(int argc, char*argv[])
{
	int n;
	char word[MAXWORD];
    printf("本程序将为您统计C语言的关键字的个数，请输入，输入end结束输入：\n");
    do
    {                        
        getword(word, MAXWORD);
        if(isalpha(word[0]))
        {               
            if((n = binsearch(word, keytab, NKEYS)) >= 0)
            {                        
                keytab[n].count++;//找到则对应次数+1
            }
        }
    }
    while(strcmp(word,"end") != 0);
    printf("您的输入中C语言关键字出现的次数统计如下：\n");
    for(n = 0; n < NKEYS; n++)
    {                        
        if(keytab[n].count > 0)
        {                        
            printf("%-10s: %6d\n", keytab[n].word, keytab[n].count);
        }
    }
    return 0;
}

/* 折半查找：在tab[0]到tab[n-1]中查找word */
int binsearch(char*word, struct key tab[], int n)
{                        
    int result;
    int low, high, mid;
    low = 0;
    high = n - 1;
    
    while(low <= high)
    {
        mid = (low + high) / 2;
        if((result = strcmp(word, tab[mid].word)) < 0)
        {                        
            high = mid - 1;
    	}
        else if(result > 0)
        {                        
            low = mid + 1;
        }
        else{
            return mid;
        }
    }
    return -1;
}              

/* getword：从输入中获取某个单词 */
void getword(char*word, int lim)
{
    int c;
    void ungetch(int);
    char*w = word;
    while(isspace(c = getchar()))
    {
    }
    
    if(c != EOF)
    {
        *w = c;
        w++;
    }
    if(!isalpha(c))
    {
        *w = '\0';
    }
    for( ; --lim > 0; w++)
	{   
        if(!isalnum(*w = getchar()))
        {                        
            //读入的某个字符不是字母，则将它退还给输入缓冲区
            ungetch(*w);
            break;
        }
    }
    *w = '\0';
}
