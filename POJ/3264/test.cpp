//ST
#include <stdio.h>

int mm[50000][100],mi[50000][100],x[50000];

int max(int a, int b)
{
if(a>b) return a;
return b;
}
int min(int a, int b)
{
if(a<b) return a;
return b;
}

int main()
{
	int i,j,N,q,m,n,len,k,t_max,t_min;
	scanf("%d%d",&N,&q);
	for(i=0;i<N;i++)
	{
		scanf("%d",&x[i]);
		mm[i][0] = x[i];
		mi[i][0] = x[i];
	}
	for(j=1;(1<<j)<=N;j++)
	{
		for(i=0;i<N-(1<<(j-1));i++)
		{
			mm[i][j] = max(mm[i][j-1],mm[i+(1<<(j-1))][j-1]);
			mi[i][j] = min(mi[i][j-1],mi[i+(1<<(j-1))][j-1]);
		}
	}
	for(i=0;i<q;i++)
	{
		scanf("%d%d",&m,&n);
		m--;
		n--;
		len = n-m+1;
		k = 0;
		while((1<<(k+1))<=len)
			k++;
		t_max = max(mm[m][k],mm[n-(1<<k)+1][k]);
		t_min = min(mi[m][k],mi[n-(1<<k)+1][k]);
		printf("%d\n",t_max-t_min);
	}
	return 0;
}