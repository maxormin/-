#include<stdio.h>

int num[100100];
int sum;

int main()
{
	int T,N,i,j,t_start,t_end,t_max,start,end,max,m;
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		sum=0;
		max = 0;
		t_max = 0;
		m=0;
		scanf("%d",&N);
		for(j=0;j<N;j++)
		{
			scanf("%d",&num[j]);
			if(m==0 && num[j]>=0)
			{
				sum += num[j];
				t_start = j;
				t_max = sum;
				m++;
			}
			else if(sum >= 0)
			{
				sum += num[j];
				if(sum>t_max)
				{
					t_max = sum;
					t_end = j;
				}
				if(sum < 0 || j == N-1)
				{
					if(t_max>max)
					{
						max = t_max;
						start = t_start+1;
						end = t_end+1;
					}
					sum = 0;
					m=0;
				}
			}
		}
		if(max==0)
		{
			max = num[0];
			start = 1;
			end = 1;
			for(j=1;j<N;j++)
			{
				if(num[j]>max)
				{
					max = num[j];
					start = j+1;
					end = j+1;
				}
			}
		}
		printf("Case %d:\n",i+1);
		printf("%d %d %d\n",max,start,end);
		if(i!=T-1)
			printf("\n");
	}
	return 0;
}