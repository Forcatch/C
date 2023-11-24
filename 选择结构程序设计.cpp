#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string>
#define PAI 3.14
//1.编写一个程序，要求有键盘输入三个数，计算这三个数为边长的三角形的面积。
static void test1()
{
	float a = 0, b = 0, c = 0;
	printf("请正确输入三角形的3条边\na=");
	scanf("%f", &a);
	printf("b=");
	scanf("%f", &b);
	printf("c=");
	scanf("%f", &c);
	if (a > 0 && b > 0 && c > 0 &&
		a + b > c && a + c > b && b + c > a &&
		a - b < c && a - c < b && b - c < a)
	{
		float p = (a + b + c) / 2;
		float s = sqrt(p * (p - a) * (p - b) * (p - c));
		printf("%f\n", s);
	}
	else
	{
		printf("输入的三角形有误\n");
	}
	system("pause");
}

//2.输入圆的半径r和一个整型数k，当k=1时，计算圆的面积；但k=2时，计算圆的周长，当k=3时
//既要求圆的周长也要求出圆的面积。编程实现以上功能。
static void test2()
{
	printf("请输入圆的半径r以及k的值\n当k=1时，计算圆面积\n当k=2时，计算圆的周长\n当k=3时，计算周长和面积\nr=");
	float r = 0;
	int k = 0;
	scanf("%f", &r);
	printf("k=");
	scanf("%d", &k);

	float s = PAI * r * r;
	float p = 2 * PAI * r;
	switch (k)
	{
	case 1:
		printf("圆面积为：%f", s);
		break;
	case 2:
		printf("圆周长为：%f", p);
		break;
	case 3:
		printf("圆面积为：%f\n圆周长为：%f", s, p);
		break;
	default:
		printf("k的值输入有误\n");
		break;
	}
	system("pause");
}

//3.编写程序，判断某一年是否为闰年
static void test3()
{
	printf("请输入一个年份\nyear:");
	int year = 0;
	scanf("%d", &year);
	if (year <= 0)
	{
		printf("输入有误，请输入一个正数\n");
		return;
	}
	if (year % 400 == 0)
	{
		printf("%d为闰年\n", year);
	}
	else if (year % 4 == 0)
	{
		printf("%d为闰年\n", year);
	}
	else
	{
		printf("%d不为闰年\n", year);
	}
	system("pause");
}

//4.有一函数，其函数关系如下，试编程求对应于每一自变量的函数值。
//y=x^2        (x<0)
// =-0.5x+10   (0<=x<10)
// =x-sqrtx    (x>=10)
static void test4()
{
	printf("输入自变量x的值：");
	float x = 0;
	scanf("%f", &x);
	float y = 0;
	if (x < 0)
	{
		y = x * x;
	}
	else if (x >= 10)
	{
		y = x - sqrt(x);
	}
	else
	{
		y = -0.5 * x + 10;
	}
	printf("y=%f\n", y);

	system("pause");
}

//5.编一程序，对于给定的一个百分制成绩，输出相应的五分制成绩。设：90分以上为‘A’;
//80-89分为‘B’；70-79分为‘C’;60-69为‘D’；60分以下为‘E’。
static void test5()
{
	printf("请输入一个百分制成绩:");
	int score = 0;
	char grade = '\0';
	scanf("%d", &score);
	if (score >= 90 && score <= 100)
	{
		grade = 'A';
	}
	else if (score >= 80 && score < 90)
	{
		grade = 'B';
	}
	else if (score >= 70 && score < 80)
	{
		grade = 'C';
	}
	else if (score >= 60 && score < 70)
	{
		grade = 'D';
	}
	else if (score >= 0 && score < 60)
	{
		grade = 'E';
	}
	else
	{
		printf("输入有误，请输入一个百分制成绩\n");
		return;
	}

	printf("五分制成绩为：%c\n", grade);
	system("pause");
}

//6.试编程完成如下功能：输入一个不多于4位的整数，求出他是几位数，并逆序输出各位数字。
static void test6()
{
	printf("请输入一个不多于4位的整数：");
	int a = 0;
	scanf("%d", &a);
	if (a > 9999 || a <= 0)
	{
		printf("输入整数错误，请重新输入一个不多于4位的整数\n");
		return;
	}
	int n1, n2, n3, n4;
	n1 = a / 1000;
	n2 = a / 100 % 10;
	n3 = a / 10 % 10;
	n4 = a % 10;
	if (n1 != 0)
	{
		printf("4位数,%d %d %d %d\n", n4, n3, n2, n1);
	}
	else if (n2 != 0)
	{
		printf("3位数,%d %d %d\n", n4, n3, n2);
	}
	else if (n3 != 0)
	{
		printf("2位数,%d %d\n", n4, n3);
	}
	else if (n4 != 0)
	{
		printf("1位数,%d\n", n4);
	}
	system("pause");
}

//int main()
//{
//	//test1();
//	//test2();
//	//test3();
//	//test4();
//	//test5();
//	//test6();
//	return (0);
//}