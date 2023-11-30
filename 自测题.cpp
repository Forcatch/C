#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//自测1题3.编写一个函数计算一个字符串的长度，输入输出在主函数内完成。（使用指针）
int my_strlen(const char* str)
{
	const char* p = str;
	while (*p++);
	return(p - str - 1);
}
//自测2题1，打印以下杨辉三角
static void test2()
{
	int a[10][10], i, j;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			a[i][j] = 1;
		}
	}
	for (i = 2; i < 10; i++)
	{
		for (j = 1; j < i; j++)
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}
	for (i = 0; i < 10; i++)
	{

		for (j = 1; j <= i; j++)
		{
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	test2();


	return 0;
}