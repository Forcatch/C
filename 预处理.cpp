#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string>

#define MYALPHA(c) ((c)>'a'&&(c)<'z'||(c)>'A'&&(c)<'Z'?1:0)
#define AREA(a,b,c) sqrt((a+b+c)/2.0*((a+b+c)/2.0-a)*((a+b+c)/2.0-b)*((a+b+c)/2.0-c))


//1.��дһ���궨��MYALPHA(c),�����ж�c�Ƿ�����ĸ�ַ������ǣ���1�������0��
static void test1()
{
	printf("input a character: ");
	char ch = 0;
	scanf("%c", &ch);
	if (MYALPHA(ch) == 1)
	{
		printf("is alphabet.\n");
	}
	else
	{
		printf("is not alphabet");
	}

}

//2.��дһ���궨��AREA(a,b,c)��������һ���߳�Ϊa��b��c�������ε������

static void test2()
{
	double a = 0.0, b = 0.0, c = 0.0;
	printf("intput a b c :");
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("area is :%6.3f", AREA(a, b, c));
	system("pause");
}

#define MAX(a,b,c) ((a)>(b)?(a):(b))
//3.��дһ���������������е�����ߣ�Ҫ���ô��κ�ʵ�֡�
static void test3()
{
	printf("input three number : ");
	int x1 = 0, x2 = 0, x3 = 0;
	scanf("%d %d %d", &x1, &x2, &x3);
	printf("max: %d\n", MAX(MAX(x1, x2), x3));

}


//4.��дһ��������1+2+����+n֮�ͣ�Ҫ���ô��κ�ʵ�֡�
//(�겻��ʵ�ֵݹ�)
#define SUM(n) (1+n)*n/2

static void test4()
{
	printf("n: ");
	int n = 0;
	scanf("%d", &n);
	printf("sum= %d", SUM(n));
}

//5.��дһ���궨��LEAPYEAR(y),�����ж����y�Ƿ������ꡣ�ж���׼�ǣ���y��4�ı����Ҳ���100�ı���������400�ı�������y�����ꡣ
#define LEAPYEAR(y) (y%400==0||y%100!=0&&y%4==0)
static void test5()
{
	int year = 0;
	printf("input a year : ");
	scanf("%d", &year);
	if (LEAPYEAR(year))
	{
		printf("is leapyear");
	}
	else
	{
		printf("is not leapyear");
	}
}


int main11()
{
	//test1();
	//test2();
	//test3();
	//test4();
	test5();

	return 0;
}�궨��LEAPYEAR(y),�����ж����y�Ƿ������ꡣ�ж���׼�ǣ���y��4�ı����Ҳ���100�ı���������400�ı�������y�����ꡣ