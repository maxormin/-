struct birthday
{
	int year;
	int month;
	int day;
};
struct A1
{
	char name[20];
	int year;
	int salary;
};

struct A2
{
	char no[20];
	char name[20];
	double a;
	double b;
	double c;
};
struct A3
{
	char no[10];
	char name[20];
	struct birthday info;
};
struct A4
{
	int year;
	int month;
	int day;
};
struct A5
{
	char name[10];
	double estimate;
	double precent;
};
struct B1_1
{
	char no[20];
	double com;
	double add;
	double aver;
};
struct B1_2
{
	char name[20];
	struct birthday info;
	double com;
	double add;
	double aver;
};
struct B1_3
{
	char name[20];
	char street[10];
	char city[10];
	char counter[10];
	char no[10];
};
struct B1_4
{
	char name[20];
	double sale;
	struct birthday info;
};
struct B1_5
{
	int no[10];
	char name[10];
	int hdata;
	int preson_no[10];
};

struct B2
{
	char h[3];
	char min[3];
};

struct B3
{
	char name[10];
	char no[10];
	double len;
	int no2;
};

struct MonthDays
{
	char name[11];
	int days;
};

struct B5
{
	int no;
	char name[20];
	double pre;
	double work_h;
};

struct B6
{
	int no;
	int mile;
	double exp_bun;
};