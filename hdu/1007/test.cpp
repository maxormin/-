#include<stdio.h>
#include<math.h>
#include<stdlib.h>

double xy[2][100010],xy_2[2][100010];
int n;

void Merge(int startIndex, int midIndex, int endIndex)
{
    int i = startIndex, j=midIndex+1, k = startIndex;
    while(i!=midIndex+1 && j!=endIndex+1)
    {
        if(xy[1][i] > xy[1][j])
		{
            xy_2[0][k] = xy[0][j];
			xy_2[1][k] = xy[1][j];
			j++;
			k++;
		}
        else
		{
            xy_2[0][k] = xy[0][i];
			xy_2[1][k] = xy[1][i];
			i++;
			k++;
		}
    }
    while(i != midIndex+1)
	{
		xy_2[0][k] = xy[0][i];
		xy_2[1][k] = xy[1][i];
		i++;
		k++;
	}
    while(j != endIndex+1)
	{
		xy_2[0][k] = xy[0][j];
		xy_2[1][k] = xy[1][j];
		j++;
		k++;
	}
	for(i=startIndex; i<=endIndex; i++)
	{
        xy[0][i] = xy_2[0][i];
		xy[1][i] = xy_2[1][i];
	}
}

void MergeSort(int startIndex, int endIndex)
{
    int midIndex;
    if(startIndex < endIndex)
    {
        midIndex = startIndex + (endIndex-startIndex) / 2;
        MergeSort(startIndex, midIndex);
        MergeSort(midIndex+1, endIndex);
        Merge(startIndex, midIndex, endIndex);
    }
}

double count()
{
	int id = n/2,i,j;
	double temp,min = 10000;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(abs(xy_2[1][i]-xy_2[1][j]) < min)
			{
				temp = sqrt(pow(xy_2[0][j]-xy_2[0][i],2)+pow(xy_2[1][j]-xy_2[1][i],2));
				if(min>temp)
					min = temp;
			}
			else
				break;
		}
	}
	return min;
}

int main()
{
	int i;
	double num;
	while(1)
	{
		scanf("%d",&n);
		if(n==0)
			break;
		for(i=0;i<n;i++)
			scanf("%lf%lf",&xy[0][i],&xy[1][i]);
		MergeSort(0,n-1);
		num = count();
		printf("%.2lf\n",num/2);
	}
	return 0;
}
