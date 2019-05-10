#include <stdio.h>
#include <ctype.h>
int isdigit(int c);
int count(int d);
int ini();

int main()
{
	int days,num;
	
	days=ini();
	num=count(days);
	printf("x=%d\n",num); 
	
	return 0;
}

int count(int d)
{
	int i,j=1;
	for(i = 2;i <= d;i++)
	{
		j=(j+1)*2; 
	}
	return j;
}

int ini()
{
	int day;
	tt:printf("Input days:\n");
	scanf("%d",&day);
//	while(!scanf("%d",&day))
//	{
//	fflush(stdin);
//	printf("Input days:\n");
//	}
//	while(day<=0)
//	{
//	day=1;
//	printf("Input days:\n");
//	scanf("%d",&day);
//	}
	if(day <= 0)
	{
		fflush(stdin);
		goto tt;
	}else if(isdigit(day) == 1)
	{
		return day;
	}else{
		fflush(stdin);
		goto tt;
	}
	
} 

int isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
