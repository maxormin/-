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
	printf("����\t\t����\t\t��н\n");
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
	printf("����ͬѧ����ƽ���ɼ�Ϊ:%.2lf\n",sum1/5);
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
	printf("�����꣬�£���:\n");
	scanf("%d%d%d",&info.year,&info.month,&info.day);
	printf("%d-%d-%d\n",info.year,info.month,info.day);
}

void a5()
{
	struct A5 info[5];
	int i;
	printf("����5֧��Ʊ����Ϣ\n");
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
	printf("�����·�\n");
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
	printf("�������ƺ�\tÿ��Ӣ�����ĵ�ȼ�ϼ�����\n");
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
	puts("������ϰ");
	puts("1.������ 25 2500 ���� 22 2300 ���� 30 3000����ṹ�岢���");
	puts("2.��5��ѧ����ÿλѧ�����ݰ���ѧ�ţ����������ſγɼ���������ſ���ƽ���ɼ�����߷�ѧ��������");
	puts("3.���庬��������Ա�Ľṹ��,��ʼ�����ݣ������к���5�������͵Ľṹ��");
	puts("4.�û����뵱ǰ�����գ�����������ݱ��浽һ���ṹ�岢���");
	puts("5.����ṹ�壬��¼��Ʊ��Ϣ���������ƣ�ÿ��Ԥ�����棬Ԥ���Ĺɼ�����ȣ�����5֧��ͬ�Ĺ�Ʊ��Ϣ�������Ʊ������Ԥ�ڵĹ�Ʊ�۸�");
	puts("������ϰ");
	puts("6.��ʼ��5���ṹ�壬�����");
	puts("7.����ʱ�䣬��ʾһ���Ӻ��ʱ��");
	puts("8.����ṹ�屣����ͣ����С�����ݣ����а������ơ���ʻ֤�š����ȡ�ͣ������ͷ�ţ�����5����ͣ����С�����ݲ����");
	puts("9.����һ��MonthDays���͵Ľṹ����conver[12],�����·ݣ�������·ݵ����Ƽ�����");
	puts("10.����ṹ�壬���а���ʶ��š������������ʡ��ѹ���Сʱ��������6�����ݣ����ʶ��š��������ܹ���");
	puts("11.����ṹ�壬��5���������а������ƺš�����ʻӢ�����������ĵ�ȼ�ϼ��ضأ�������ƺţ�ÿ������ÿ�������ĵ�ȼ��");
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


