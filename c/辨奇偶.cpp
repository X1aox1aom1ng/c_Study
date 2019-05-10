#include <stdio.h>
int main()
{
	int x, odd = 0, even = 0, time = 0, end = 0;
	printf("Please enter the number:\n");
	do
	{
		fflush(stdin);
		scanf("%d",&x);
		time++;
		
		if(time == 1 && x == -1)
		{
			printf("over!\n");
			printf("The total number of odd is %d\n",odd);
			printf("The total number of even is %d\n",even);
			end++;
		}
		
		if(x % 2 == 1)
		{
			printf("%d:odd\n",x);
			odd++;
		}
		
		if(x % 2 == 0)
		{
			printf("%d:even\n",x);
			even++;
		}
		
		if(time != 1 && x == -1)
		{
			printf("The total number of odd is %d\n",odd);
			printf("The total number of even is %d\n",even);
			end++;
		}
	}while(end == 0);
	
	return 0;
}
