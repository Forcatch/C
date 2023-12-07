#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//1.判断101-200之间有多少个素数，并输出所有素数
static void test1()
{
	int count = 0, flag = 0;
	for (int i = 101; i <= 200; i++)
	{
		flag = 0;
		for (int j = 2; j < i / 2; j++)
		{
			if (i % j == 0)
			{
				flag = 1;
			}
		}
		if (flag == 0)
		{
			count++;
			printf("%d  ", i);
		}
	}
	printf("\n一共有%d个", count);

}
//2.求s=a+aa+aaa+aaaa+aa……a的值，其中a是一个数字。例如2+22+222+2222+22222(此时共有5个数相加),几个数相加有键盘控制。分析：关键是计算出每一项的值
static void test2()
{
	int n, a, s = 0, x;
	printf("input a and n : ");
	scanf("%d %d", &a, &n);
	x = a;
	for (int i = 1; i <= n; i++)
	{
		s += x;
		if (i == n)
		{
			printf("%d=", x);
		}
		else
		{
			printf("%d+", x);
		}
		x = x * 10 + a;
	}
	printf("%d", s);
}


//3.将一个数组逆序输出。分析：用第一个与最后一个交换，然后用第二个与倒数第二个交换，其余依次类推
static void reverse(int a[], int n)
{
	int* p = a;
	for (int i = 0; i < n / 2; i++)
	{
		int temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
static void test3()
{
	int a[10] = { 2,4,5,3,6,8,6,5,5,4 };
	reverse(a, sizeof(a) / sizeof(int));
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}

}


int main004()
{
	//test1();
	//test2();
	test3();
	return 0;

}