#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string>


//1.有一个数组，内放10个学生的英语成绩，写一个函数，求出平均分，并且打印出高于平均分的英语成绩。
float my_Average(float a[],int n)
{
	float sum=0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
	}
	return sum / n;
}
static void test1()
{
	float a[10] = { 1,4,3,5,6,7,8,6,5,4 };
	float aver = my_Average(a,10);
	printf("%f", aver);

	system("pause");
}

//2.编写一个函数计算任一输入的整数的各位数字之和。主函数包括输入输出和调用该函数。
int numSum(int n)
{
	int n_sum=0;
	while (1)
	{
		if (n / 10 == 0)       //当条件没想好时直接用while 如果先实现一次用do while ，有循环次数和条件要计数用for 
		{
			n_sum += n % 10;
			break;               //每次都记录个位上的数，每次除10，知道只有个位跳出循环 返回函数值
		}
		n_sum+=n % 10;
		n /= 10;
	}
	return n_sum;
}
void test2()
{
	int n=0;
	printf("Input a integer: ");
	scanf("%d",&n);
	printf("%d", numSum(n));

}

//3.已有函数调用语句c=add(a,b)；请编写add函数，计算两个实数a和b的和，并返回和值。
//double add(double x,double y){}
double add(double x, double y)
{
	return x + y;
}

//4.已有变量定义语句double a=5.0;int n=5;和函数调用语句mypow(a,n);用以求a的n次方。请编写double mypow(double x,int y)函数
//double mypow(double x,int y){}
double mypow(double x, int y) 
{
	double num = 1;
	for (int i = 0; i < y; i++)
	{
		num *= x;
	}
	return num;
}

//5.已有变量定义和函数调用语句 int a,b;b=sum(a);函数sum()用以求 1+2+……+k，和数作为函数值返回。若a的值为10.经函数sum的计算
//后，b的值是55.请编写sum函数。
//sum(int n){}
int sum(int n) 
{
	int sum=0;
	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}
	return sum;
}
//6.已有变量定义和函数调用语句：int a=1,b=-5,c=fun(a,b);fun函数的作用是计算两个数之差的绝对值，并将差值返回调用
//函数，请编写fun函数。
//fun(int x,int y){}
int fun(int x, int y) 
{
	if (x>y)
	{
		return x - y;
	}
	else
	{
		return y - x;
	}
}

//7.已有变量定义和函数调用语句：int x=57;isprime(x);函数isprime()用来判断一个整型数a是否为素数，若是素数，函数返回1，否则返回0
//请编写isprime函数。
//isprime(int a){}
int isprime(int a) 
{
	for (int i = 2; i < a/2; i++)
	{
		if (a%i==0)
		{
			return 0;
		}
	}
	return 1;
}
static void test7()
{
	int x = 57;
	printf("%d\n", isprime(x));
}
//8.利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。
void reversePrint(char a[],int n)   //递归的用法，什么情况用递归
{
	if (n==0)
	{
		printf("\n");
		return;
	}
	printf("%c", a[n-1]);
	reversePrint(a,n-1);
}
static void test8()
{
	char a[5] = {0};
	printf("input five character: ");
	//fgets(a, 5, stdin);
	for (int i = 0; i < 5; i++)
	{
		scanf("%c", &a[i]);
	}
	reversePrint(a,5);

}
//标准答案  递归中每个函数都会在栈区开辟temp变量
void reverse(int n)
{
	char temp=0;
	if (n==0)
	{
		return;
	}
	temp=getchar();
	reverse(n - 1);
	putchar(temp);
}
static void test8A()
{
	int i = 5;
	printf("input five character: ");
	reverse(i);

	system("pause");
	
}
//9.函数递归调用计算阶乘
int factorial(int n)
{
	if (n <= 0)
		return 0;
	if (n==1)
	{
		return 1;
	}
	return n * factorial(n - 1);
}
static void test9()
{
	int n = 0;
	printf("input n: ");
	scanf("%d", &n);

	printf("%d", factorial(n));
	
}
//10.输入10个学生的成绩，分别用函数实现：
//(1)求平均成绩；
//(2)按分数高低进行排序输出。
float aver(float a[], int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
	}
	return sum / n;
}
void my_sort(float a[], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n-1-i; j++)
		{
			if (a[j]>a[j+1])
			{
				float temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}
static void test10()
{
	printf("input score of ten students: ");
	float a[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		scanf("%f", &a[i]);
	}
	printf("average= %f\n", aver(a, 10));
	printf("sort: ");
	my_sort(a,10);
	for (int i = 0; i < 10; i++)
	{
		printf("%f  ", a[i]);
	}
}

//11.若有一4*4二维矩阵，试编程完成如下功能：
//(1)求4*4列数组的对角线元素之和；
//(2)将二维数组元素行列互换后存入另一数组，并将此数组输出。
float diagonalSum(float a[][4],int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i==j)
			{
				sum += a[i][j];
			}
			else if (i+j==3)
			{
				sum += a[i][j];
			}
		}
	}
	return sum;
}
void exchange(float a[][4],int n)
{
	float b[4][4] = { 0 };
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			b[j][i] = a[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%f  ", b[i][j]);
		}
		printf("\n");
	}
}
static void test11()
{
	float a[4][4] = { 0 };
	printf("input a 4*4 double dimensional array: \n");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			scanf("%f", &a[i][j]);
		}
	}
	printf("diagonalsum= %f\n", diagonalSum(a, 4));
	exchange(a,4);


}
//12.有两个字符串，各有10个字符，试编程完成如下功能：
//(1)分别找出两个字符串中最大的字符元素；
//(2)将两字符串对应位置元素逐个比较，并统计输出两个字符串对应元素大于，小于和等于的次数。(所有功能都用函数调用实现)
char findMax(char a[],int n)
{
	char max = 0;
	while (n--)
	{
		if (max<*a)
		{
			max = *a;
		}
		a++;
	}
	return max;
}

void compareStr(char a[],char * b,int n)
{
	int more=0, less=0, equal=0;
	while (n--)
	{
		if (*a>*b)
		{
			more++;
		}
		else if(*a==*b)
		{
			equal++;
		}
		else
		{
			less++;
		}
		a++, b++;
	}
	printf("more:%d\tless:%d\tequal:%d\n",more,less,equal);
}
static void test12()
{
	char a[11] = { 0 };
	char b[11] = { 0 };
	//char* a = NULL;
	//char* b = NULL;
	printf("输入一个长度为10的字符串a：\n");
	for (int i = 0; i < 10; i++)
	{
		a[i] = getchar();
	}
	getchar();
	printf("输入一个长度为10的字符串b：\n");
	for (int i = 0; i < 10; i++)
	{
		b[i] = getchar();
	}

	printf("a中最大元素：%c\n", findMax(a,10));
	printf("b中最大元素：%c\n", findMax(b,10));
	compareStr(a, b, 10);

}

int main6()
{
	//test1();
	//test2();
	//test7();
	//test8();
	//test8A();
	//test9();
	//test10();
	//test11();
	test12();


	return (0);
}