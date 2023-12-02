#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//自测题一，把输入的整数（最多不超过五位）按输入顺序的反方向输出。
static void test01()                 //该做法核心思想是利用整数除法省略小数的特性
{
	int m = 0, x = 0, n = 1;
	printf("input m :");
	scanf("%d", &m);
	if (m < 0 || m>99999)
	{
		printf("输入错误.");
	}
	while (1)
	{
		x = m / (n * 10);
		printf("%d", (m - x * n * 10) / n);
		if (x == 0)
			break;
		n *= 10;
	}
}


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
		a[i][0] = 1;
		a[i][i] = 1;
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

//辗转相除法求最大公约数

//自测题四 编一程序，对于给定的一个百分制成绩，输出相应的五分制成绩。设：>90为A;89~90B
static void test7()
{
	int score = 0;
	printf("请输入一个百分制成绩：");
	scanf("%d", &score);
	if (score > 100 || score < 0)
	{
		printf("成绩输入格式错误。");
		return;
	}
	if (score > 90)
	{
		printf("A");
	}
	else if (score > 80)
	{
		printf("B");
	}
	else if (score > 70)
	{
		printf("C");
	}
	else if (score > 60)
	{
		printf("D");
	}
	else
	{
		printf("E");
	}

}

//自测题四 2.有一个5*5的数组，试编程求周边元素及对角线元素之和，并输出该数组中值最小的元素
static void test8()
{
	float a[5][5] = { 0 };
	printf("请输入一个5*5的矩阵：");
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			scanf("%f", &a[i][j]);

	float sum = 0;
	float min = a[0][0];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i == 0 || i == 4 || i == j || i + j == 4 || j == 0 || j == 4)
			{
				sum += a[i][j];
			}
			if (min > a[i][j])
			{
				min = a[i][j];
			}
		}
	}

	printf("sum=%f  min=%f\n", sum, min);

}

//自测题四 3.编写一个程序，用12月份的英文名称初始化一个字符指针数组，当键盘输入整数为1到12时，显示相应的月份名，键入其他整数时显示错误信息。
static void test9()
{
	int mon = 0;
	const char* month[12] = { "January","February","March","April","May","June","July","August","September","October","November","December" };
	printf("输入一个月份：");
	scanf("%d", &mon);
	if (mon <= 0 || mon > 12)
	{
		printf("输入有误！\n");
	}
	else
	{
		printf("%s", month[mon - 1]);
	}

}

//自测题五 1.试编程完成如下功能：输入一个不多于4位的整数，求出它是几位数，并逆序输出各位数字。
static void test10()
{
	int x = 0;
	printf("输入一个不多于4位的整数: ");
	scanf("%d", &x);
	if (x > 9999 || x < 0)
	{
		printf("输入有误!\n");
		return;
	}
	int x1, x2, x3, x4;
	x1 = x / 1000;
	x2 = x / 100 % 10;
	x3 = x / 10 % 10;
	x4 = x % 10;
	if (x1 > 0)
	{
		printf("4位数 %d%d%d%d", x4, x3, x2, x1);
	}
	else if (x2 > 0)
	{
		printf("3位数 %d%d%d", x3, x2, x1);
	}
	else if (x3 > 0)
	{
		printf("2位数 %d%d", x2, x1);
	}
	else
	{
		printf("1位数 %d", x1);
	}

}

//若有一4*4二维数组，试编程完成如下功能：（1）求4*4列数组的对角线元素值和。(2)将二维数组元素行列互换后存入另一数组，并将此数组输出。
static void test11()
{
	int a[4][4] = { 0 };
	printf("输入一个4*4的数组");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	int sum = 0;
	int b[4][4] = { 0 };
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i == j || i + j == 3)
			{
				sum += a[i][j];
			}
			b[j][i] = a[i][j];
		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d", b[i][j]);
		}
	}
}
//有两个字符串，各有10个字符，试编程完成如下功能：（1）分别找出两个字符串中最大的字符元素；
//（2）将两字符串对应位置元素逐个比较，并统计输出两个字符串对应元素大于，小于和等于的次数。（所有功能通过函数调用实现）
char findMax(char a[])
{
	char* p = a;
	char max = *p;
	while (*p++)
	{
		if (max < *p)
		{
			max = *p;
		}
	}
	return max;
}
void my_compare(char a[], char b[])
{
	int greater = 0, equl = 0, less = 0;
	char* p1 = a, * p2 = b;
	while (*p1 && *p2)
	{
		if (*p1 > *p2)
		{
			greater += 1;
		}
		else if (*p1 = *p2)
		{
			equl += 1;
		}
		else
		{
			less += 1;
		}
		p1++;
		p2++;
	}
	printf("greater:%d  equl:%d  less:%d", greater, equl, less);
}
static void test12()
{
	printf("输入两个长度为10个字符的字符串：");
	char a[11] = { 0 };
	char b[11] = { 0 };
	gets_s(a);
	gets_s(b);
	char maxa = findMax(a);
	char maxb = findMax(b);
	my_compare(a, b);

}

struct stru {
	int x;
	char c;
};

static void func(struct stru* b)
{
	b->x = 20;
	b->c = 'y';
}

int f(int a, int b)
{
	int c;
	if (a > b)
	{
		c = 1;
	}
	else if (a == b)
	{
		c = 0;
	}
	else
		c = -1;
	return(c);
}
static void test13()
{
	int i = 2, p;
	p = f(i++, ++i);
	printf("%d", p);
}

int main()
{

	//test01();
	//test2();
	//test3();
	//test5();
	//test6();
	//test8();
	test13();

	return 0;
}