#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//1.用冒泡发对数组进行排序（升序）。冒泡法排序：两两比较待排序序列中的元素，并交换不满足顺序要求的各对元素，直到全部满足顺序要求为止
static void test1()
{
	printf("input 10 numbers :");
	float a[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		scanf("%f", &a[i]);
	}
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		printf("  %f", a[i]);
	}
}

//2.输入一个年份判断它是否为闰年，满足下面条件之一就称为闰年：
//（1）能被4整除而不能被100整除。（2）能被100整除也能被400整除
//year%400==0||year%100!=0&&year%4==0
static void test2()
{
	printf("input a year: ");
	int year = { 0 };
	scanf("%d", &year);
	if (year % 400 == 0)
	{
		printf("%d is leapyear.", year);
	}
	else if (year % 4 == 0)
	{
		printf("%d is leapyear.", year);
	}
	else
	{
		printf("%d is not leapyear.", year);
	}
}

//3.一个数恰好等于它的因子之和，这个数被称为“完数”。例如6=1+2+3.编程找出1000以内所有完数。
static void test3()
{
	int sum = 0;
	for (int i = 2; i < 1000; i++)
	{
		for (int j = 1; j < i; j++)
		{
			if (i % j == 0)
			{
				sum += j;
			}
		}
		if (sum == i)
		{
			printf(" %d", i);
		}
		sum = 0;
	}
}

int main002()
{
	test3();


	return 0;
}