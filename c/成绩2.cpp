#include <stdio.h>
#define N 40
int GetAboveAver(int score[], int n);
int main()
{
	int a[N], i, j, n, sum = 0;
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
		if(a[i] < 0)
		{
			goto tt;
		}
		j=i + 1;
		sum = sum + a[i];
	}
	tt:n =GetAboveAver(a,j);
	
	printf("Total students are %d\n",j);
	printf("Average score is %d\n",sum/j);
	printf("Students of above average is %d\n",n);
	return 0;
}

int GetAboveAver(int score[], int n)
{
	int i, j = 0, sum = 0, ave;
	for(i=0;i<n;i++)
	{
		sum = sum + score[i];
	}
	ave=sum/n;
	
	for(i=0;i<n;i++)
	{
		if(score[i] >= ave)
		{
			j++;
		}
	}
	
	return j;
}
