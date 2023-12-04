#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string>
//1.编写一个函数，输入一个数字，判断该数字是正数还是负数或是零

static void test1()
{
	printf("input a number : ");
	int x = 0;
	scanf("%d", &x);
	if (x > 0)
	{
		printf("%d是一个正数", x);
	}
	else if (x == 0)
	{
		printf("%d是零", x);
	}
	else
	{
		printf("%d是一个负数", x);
	}
}

//2.编写一个函数，输入一个数，判断是否为素数
static void test2()
{
	printf("int put a number: ");
	int x = 0;
	scanf("%d", &x);
	for (int i = 2; i < x / 2; i++)
	{
		if (x % i == 0)
		{
			printf("%d不为素数\n", x);
			return;
		}
	}
	printf("%d是素数\n");
}


//3.编写一个函数，输入一个数，判断是否为回文
//提示：设n是一任意自然数。若将n的各位数字反向排列所得自然数n1与n相等，则称n为一回文数。例如，若n=1234321,则称n为一回文数，若n=1234567，则n不是回文数

static void isHuiWen(char a[20])
{
	int len = strlen(a);
	char b[20] = { 0 };
	for (int i = 0; i < len; i++)
	{
		b[len - 1 - i] = a[i];
	}
	if (strcmp(a, b) == 0)
	{
		printf("该数是回文\n");
	}
	else
	{
		printf("该数不是回文\n");
	}
}

static void test3()
{
	printf("input a number: ");
	char a[20] = { 0 };
	gets_s(a);

	isHuiWen(a);

	system("pause");
}
//标准答案,用的循环除10


int main()
{
	//test1();
	test3();

	return 0;
}