#include<stdio.h>
#include"head.h"

void a1()
{
	struct A1 info[3];
	int i;
	fflush(stdin);
	for(i=0;i<3;i++)
	{
		scanf("%s",&info[i].name);
		scanf("%d",&info[i].year);
		scanf("%d",&info[i].salary);
	}
	printf("姓名\t\t年龄\t\t月薪\n");
	for(i=0;i<3;i++)
	{
		printf("%s",info[i].name);
		printf("\t\t%d\t\t%d\n",info[i].year,info[i].salary);
	}
}
void a2()
{
	struct A2 info[5];
	int i,b;
	double max=0,sum[5],sum1=0;
	for(i=0;i<5;i++)
	{
		scanf("%s",&info[i].no);
		scanf("%s",&info[i].name);
		scanf("%lf",&info[i].a);
		scanf("%lf",&info[i].b);
		scanf("%lf",&info[i].c);
		sum[i]=info[i].a+info[i].b+info[i].c;
		sum1+=sum[i];
		if(sum[i]>max)
		{
			max=sum[i];
			b=i;
		}
	}
	printf("五名同学的总平均成绩为:%.2lf\n",sum1/5);
	printf("%s\t%s\t%.2lf\t%.2lf\t%.2lf\n",info[b].no,info[b].name,info[b].a,info[b].b,info[b].c);
}

void a3_1(struct A3 info[5])
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("%s ",info[i].no);
		printf("%s ",info[i].name);
		printf("%d\n",info[i].info.year);
	}
}
void a3()
{
	struct A3 info[5];
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%s",&info[i].no);
		scanf("%s",&info[i].name);
		scanf("%d",&info[i].info.year);
		scanf("%d",&info[i].info.month);
		scanf("%d",&info[i].info.day);
	}
	a3_1(info);
}

void a4()
{
	struct A4 info;
	printf("输入年，月，日:\n");
	scanf("%d%d%d",&info.year,&info.month,&info.day);
	printf("%d-%d-%d\n",info.year,info.month,info.day);
}

void a5()
{
	struct A5 info[5];
	int i;
	printf("输入5支股票的信息\n");
	for(i=0;i<5;i++)
	{
		scanf("%s",&info[i].name);
		scanf("%lf",&info[i].estimate);
		scanf("%lf",&info[i].precent);
	}
	for(i=0;i<5;i++)
	{
		printf("%s ",info[i].name);
		printf("%.2lf\n",info[i].estimate*info[i].precent);
	}
}

void b1()
{
	struct B1_1 info1;
	struct B1_2 info2;
	struct B1_3 info3;
	struct B1_4 info4;
	struct B1_5 info5;
}

void b2()
{
	struct B2 info;
	scanf("%s",&info.h);
	scanf("%s",&info.min);
	if(info.min[1]!='9')
		printf("%s %c%c\n",info.h,info.min[0],info.min[1]+1);
	else
		printf("%s %c%c\n",info.h,info.min[0]+1,info.min[1]-9);
}

void b3()
{
	struct B3 info[5];
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%s",&info[i].name);
		scanf("%s",&info[i].no);
		scanf("%lf",&info[i].len);
		scanf("%d",&info[i].no2);
	}
	for(i=0;i<5;i++)
	{
		printf("%s ",info[i].name);
		printf("%s ",info[i].no);
		printf("%.2lf ",info[i].len);
		printf("%d\n",info[i].no2);
	}
}

void b4()
{
	struct MonthDays conver[12];
	int n,i;
	for(i=0;i<12;i++)
	{
		scanf("%s",&conver[i].name);
		scanf("%d",&conver[i].days);
	}
	printf("输入月份\n");
	scanf("%d",&n);
	printf("%s has %d days\n",conver[n-1].name,conver[n-1].days);
}

void b5()
{
	struct B5 info[6];
	int i;
	for(i=0;i<6;i++)
	{
		scanf("%d",&info[i].no);
		scanf("%s",&info[i].name);
		scanf("%lf",&info[i].pre);
		scanf("%lf",&info[i].work_h);
	}
	for(i=0;i<6;i++)
	{
		printf("%d ",info[i].no);
		printf("%s ",info[i].name);
		printf("%.2lf\n",info[i].pre*info[i].work_h);
	}
}

void b6()
{
	struct B6 info[5];
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%d",&info[i].no);
		scanf("%d",&info[i].mile);
		scanf("%lf",&info[i].exp_bun);
	}
	printf("汽车车牌号\t每百英里消耗的燃料加仑数\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t\t",info[i].no);
		printf("%.2lf\n",info[i].exp_bun/info[i].mile*100);
	}
}
void b7()
{
}

void main()
{
	int a;
	puts("基础练习");
	puts("1.将李明 25 2500 王利 22 2300 赵勇 30 3000赋予结构体并输出");
	puts("2.有5个学生，每位学生数据包括学号，姓名，三门课成绩，输出三门课总平均成绩及最高分学生的数据");
	puts("3.定义含有三个成员的结构体,初始化数据，数组中含有5个该类型的结构体");
	puts("4.用户输入当前年月日，将输入的数据保存到一个结构体并输出");
	puts("5.定义结构体，记录股票信息，包括名称，每股预估收益，预估的股价收益比，输入5支不同的股票信息，输出股票名称与预期的股票价格");
	puts("进阶练习");
	puts("6.初始化5个结构体，再输出");
	puts("7.输入时间，显示一分钟后的时间");
	puts("8.定义结构体保存已停靠的小船数据，其中包括名称、行驶证号、长度、停靠的码头号，输入5条已停靠的小船数据并输出");
	puts("9.定义一个MonthDays类型的结构数据conver[12],输入月份，输出该月份的名称及天数");
	puts("10.定义结构体，其中包括识别号、姓名、工资率、已工作小时，共输入6组数据，输出识别号、姓名和总工资");
	puts("11.定义结构体，有5辆汽车其中包括车牌号、已行驶英里数，已消耗的燃料加仑敦，输出车牌号，每辆汽车每百里消耗的燃料");
	do
	{
		scanf("%d",&a);
		switch(a)
		{
			case 1: a1(); break;
			case 2: a2(); break;
			case 3: a3(); break;
			case 4: a4(); break;
			case 5: a5(); break;
			case 6: b1(); break;
			case 7: b2(); break;
			case 8: b3(); break;
			case 9: b4(); break;
			case 10: b5(); break;
			case 11: b6(); break;
			case 12: b7(); break;
		}
	}
	while(a!=0);
}


