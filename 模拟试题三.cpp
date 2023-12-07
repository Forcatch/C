#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//1.编写一个函数，输入两个数字，并实现交换两个数的值。
static void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

//2.给一个正整数，要求：一，求他是几位数，二，逆序打印出各位数字。   ps:可以用C语言的整数除法特性
static void test2()
{
	int x, n = 0, x_divd = -1;
	printf("input a number :");
	scanf("%d", &x);
	while (x_divd != 0)
	{
		x_divd = x / 10;
		printf("%d", x - x_divd * 10);
		x = x_divd;
		n++;
	}
	printf(" %d位数\n", n);

}

//3.将b字符串复制到a中，编写函数实现此功能。
static char* my_strcpy(char* a, const char* b)   //包括b数组的空字符也会复制过去
{
	char* eos = a;
	while (*b)
	{
		*eos++ = *b++;
	}
	*eos = 0;
	return a;
}
static void test3()
{
	char a[] = "hello  ";
	char b[] = "world";
	my_strcpy(a, b);
	printf("%s", a);
}


int main003()
{
	//test2();
	//test3();
	return 0;
}