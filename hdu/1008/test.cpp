#include<stdio.h>
#include<math.h>

int main()
{
	int a,i,b,time,lou;
	while(1)
	{
		scanf("%d",&a);
		if(a==0)
			break;
		time = 0;
		lou = 0;
		for(i=0;i<a;i++)
		{
			scanf("%d",&b);
			if(b>lou)
				time += (b-lou)*6;
			else
				time += (lou-b)*4;
			time += 5;
			lou = b;
		}
		printf("%d\n",time);
	}
	return 0;
}