//KMP
#include<stdio.h>

char b[2000000],c[1000005];

int main()
{
	int a,i,j,x,n,num=0,max,t_max,m;
	while(1)
	{
		scanf("%d",&a);
		getchar();
		if(a==0)
			break;
		scanf("%s",b);
		num++;
		printf("Test case #%d\n",num);
		n=0;
		c[n++] = b[0];
		max=2;
		t_max=1;
		m=0;
		for(i=0;i<a/2+1;i++)
		{
			if(b[i]==c[0])
			{
				for(j=1;j<a-i;j++)
				{
					if(b[i+j]!=c[j%n])
						break;
					if((j+1)%n==0)
					{
						x=i+j+1;
						t_max++;
						if(t_max>=max)
						{
							printf("%d %d\n",x,t_max);
							max = t_max;
						}
					}
				}
				if(j!=a-i+1)
					for(;n<=i;n++)
						c[n] = b[n];
				else
					break;
			}
			else
			{
				for(;n<=i;n++)
					c[n] = b[n];
				t_max=1;
			}
		}
		printf("\n");
	}
	return 0;
}
/*int next[1000000];
char s[1000000];

void findnext(int n)
{
	int i=0,j=-1;
	next[i] = j;
	while(i<n)
	{
		if(j==-1 || s[i]==s[j])
		{
			j++;
			i++;
			next[i] = j;
		}
		else
			j = next[j];
	}
}

int main()
{
	int i,a,num=1;
	while(1)
	{
		scanf("%d",&a);
		if(a==0)
			return 0;
		scanf("%s",s);
		printf("Test case #%d\n",num++);
		findnext(a);
		for(i=1;i<=a;i++)
		{
			if(i%(i-next[i])==0 && i!=(i-next[i]))
				printf("%d %d\n",i,i/(i-next[i]));
		}
		printf("\n");
	}
	return 0;
}*/
