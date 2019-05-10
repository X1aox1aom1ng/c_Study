#include <stdio.h>
int main()
{
	int size, i, j, x;
	printf("Input array size:");
	scanf("%d",&size);
	
	int a[size];
	printf("Input array:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Input x:");
	scanf("%d",&x);
	
	for(i=0;i<size;i++)
	{
		if(x > a[i] && x < a[i+1])
		{
			j = i;
		}
		if(x == a[i])
		{
			j = i;
		}
	}
	
	for(i = size;i > j + 1;i--)
	{			
		a[i] = a[i-1];
		a[i-1] = x;
	}
		
	printf("After insert %d:\n",x);
	for(i=0;i<=size;i++)
	{
		printf("%4d",a[i]);
	}
	
	return 0;
 } 
