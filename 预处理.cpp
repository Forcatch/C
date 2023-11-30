#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string>

#define MYALPHA(c) ((c)>'a'&&(c)<'z'||(c)>'A'&&(c)<'Z'?1:0)
#define AREA(a,b,c) sqrt((a+b+c)/2.0*((a+b+c)/2.0-a)*((a+b+c)/2.0-b)*((a+b+c)/2.0-c))


//1.编写一个宏定义MYALPHA(c),用以判定c是否是字母字符，若是，得1；否则得0。
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

//2.编写一个宏定义AREA(a,b,c)，用于求一个边长为a，b和c的三角形的面积。

static void test2()
{
	double a = 0.0, b = 0.0, c = 0.0;
	printf("intput a b c :");
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("area is :%6.3f", AREA(a, b, c));
	system("pause");
}

#define MAX(a,b,c) ((a)>(b)?(a):(b))
//3.编写一个程序求三个数中的最大者，要求用带参宏实现。
static void test3()
{
	printf("input three number : ");
	int x1 = 0, x2 = 0, x3 = 0;
	scanf("%d %d %d", &x1, &x2, &x3);
	printf("max: %d\n", MAX(MAX(x1, x2), x3));

}


//4.编写一个程序求1+2+……+n之和，要求用带参宏实现。
//(宏不能实现递归)
#define SUM(n) (1+n)*n/2

static void test4()
{
	printf("n: ");
	int n = 0;
	scanf("%d", &n);
	printf("sum= %d", SUM(n));
}

//5.编写一个宏定义LEAPYEAR(y),用以判定年份y是否是闰年。判定标准是：若y是4的倍数且不是100的倍数或者是400的倍数，则y是闰年。
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
}宏定义LEAPYEAR(y),用以判定年份y是否是闰年。判定标准是：若y是4的倍数且不是100的倍数或者是400的倍数，则y是闰年。