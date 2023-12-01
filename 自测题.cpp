#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
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

static void test3()
{
	int mol = 2, den = 1;
	float sum = 0;
	for (int i = 0; i < 20; i++)
	{
		sum += (float)mol / den;
		int temp = mol + den;
		den = mol;
		mol = temp;
	}
	printf("%f", sum);

}


//自测题2
//1.已知三角形的三边长，试编程求三角形的面积,要求：三边长从键盘输入，要考虑数据输入是否正确，能否构成三角形
//等情况，假设三边分别为：a,b,c


//2.有一分数列：2/1，3/2，5/3，8/5，13/8.21/13，试编程求数列前20项的和


//自测题3
//有一函数关系如下，试编程求对应于每一自变量的函数值
static void test4()
{
	float x, y;
	scanf("%f", &x);
	if (x < 0)
	{
		y = x * x;
	}
	else if (x >= 0 && x < 10)
	{
		y = -0.5 * x + 10;
	}
	else
	{
		y = x - sqrt(x);
	}
	printf("y=%f", y);
}

//2 若有如下公式：求出pai的近似值。
static void test5()
{
	float t = 1, sum = 0, n = 1;
	while (t >= 0.000001)
	{
		t = 1.0 / (n * n);
		sum += t;
		n++;
	}
	printf("pai=%f", sqrt(6 * sum));

}
//3.编一程序，首先将一个包含10个数的数组按照升序排列，然后将从一指定位置m开始的n个数按照逆序重新排列，并将新生成的
//数组输出。要求使用指针控制方法实现上述功能
static void sort(int a[], int n)
{
	int* p = a;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (*(p + i) > *(p + j))
			{
				int temp = *(p + i);
				*(p + i) = *(p + j);
				*(p + j) = temp;
			}
		}
	}
}
static void reverseArray(int a[], int arraynum, int m, int n)
{
	if (m + n > arraynum)
		return;
	for (int i = 0; i < n / 2; i++)
	{
		int temp = a[m - 1 + i];
		a[m - 1 + i] = a[m - 1 - i + n - 1];
		a[m - 1 - i + n - 1] = temp;
	}

}
static void test6()
{
	int a[10] = { 0 };
	printf("输入是个数：");
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a, 10);
	printf("输入m和n的值：");
	int m = 0, n = 0;
	scanf("%d %d", &m, &n);
	reverseArray(a, 10, m, n);
	for (int i = 0; i < 10; i++)
	{
		printf("%3d", a[i]);
	}

}

int main()
{
	//test2();
	//test3();
	//test5();
	test6();

	return 0;
}