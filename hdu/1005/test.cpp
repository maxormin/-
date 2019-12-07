#include<stdio.h>

int a,b,n;
int num[50];

int main()
{
	int i;
	while(1)
	{
		scanf("%d%d%d",&a,&b,&n);
		num[1]=1;
		num[2]=1;
		if(a==0 && b==0 && n==0)
			break;
		for(i=3;i<48;i++)
			num[i] = (a*num[i-1]+b*num[i-2])%7;
		printf("%d\n",num[n%48]);
	}
	return 0;
}