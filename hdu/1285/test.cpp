#include<stdio.h>
#include<string.h>

int rank[510][510];
int point[510];
int num[510];
int m;

void tuopu()
{
	int i,j,k=0,top;
	for(i=0;i<m;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(point[j]==0)
			{
				
				top=j;
				break;
			}
		}
		num[k++]=top;
		point[top]=-1;
		for(j=1;j<=m;j++)
		{
			if(rank[top][j])
				point[j]--;
		}
	}
	for(i=0;i<k-1;i++)
		printf("%d ",num[i]);
	printf("%d\n",num[k-1]);
}

int main()
{
	int n,a,b,i;
 	while(scanf("%d%d",&m,&n)!=EOF)
	{
		memset(point,0,sizeof(point));
		memset(rank,0,sizeof(rank));
		for(i=0;i<n;i++)
		{
			scanf("%d%d",&a,&b);
			if(rank[a][b]!=1)
			{
				rank[a][b] = 1;
				point[b]++;
			}
		}
		tuopu();
	}
	return 0;
}
