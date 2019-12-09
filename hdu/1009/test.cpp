#include<stdio.h>

double J[100000],rate[2][10000];
int m,n,F[100000];

void sort()
{
	int i,j,m;
	double temp;
	for(i=0;i<n;i++)
	{
		m=0;
		for(j=0;j<n-i-1;j++)
		{
			if(rate[0][j]<rate[0][j+1])
			{
				temp = rate[0][j];
				rate[0][j] = rate[0][j+1];
				rate[0][j+1] = temp;
				temp = rate[1][j];
				rate[1][j] = rate[1][j+1];
				rate[1][j+1] = temp;
				m++;
			}
		}
		if(m==0)
			return;
	}
}

int main()
{
	int i,id;
	double sum;
	while(1)
	{
		scanf("%d%d",&m,&n);
		if(m==-1 && n==-1)
			break;
		sum = 0;
		for(i=0;i<n;i++)
		{
			scanf("%lf%d",&J[i],&F[i]);
			rate[0][i] = J[i]/F[i];
			rate[1][i] = i;
		}
		sort();
		for(i=0;i<n;i++)
		{
			id = (int)rate[1][i];
			if(m>F[id])
			{
				sum += J[id];
				m -= F[id];
			}
			else
			{
				sum += J[id]/F[id]*m;
				break;
			}
		}
		printf("%.3lf\n",sum);
	}
	return 0;
}