#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string>

//1.用起泡法对10个数排序。
static void test1()
{
	float a[10] = { 0 };
	printf("请输入10个数:\n");
	for (int i = 0; i < 10; i++)
	{
		scanf("%f", &a[i]);
	}
	/*for (int i = 0; i < 10; i++)
	{
		for (int j = i+1;	j <10 ; j++)
		{
			if (a[j]<a[i])
			{
				int temp=a[i];
				a[i] = a[j];
				a[j] = temp;			
			}
		}
	}*/
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9-i; j++)
		{
			if (a[j]>a[j+1])
			{
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%f ", a[i]);
	}
	system("pause");
}
//2.编一程序，从键盘输入10个整数并保存到数组，求出该10个整数的最大值，最小值及平均值。
static void test2()
{
	int a[10] = { 0 };
	printf("请输入10个数:\n");
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	int max = a[0], min = a[0],sum=0;
	
	for (int i = 0; i < 10; i++)
	{
		if (a[i]>max)
		{
			max = a[i];
		}
		if (a[i]<min)
		{
			min = a[i];
		}
		
		
		sum += a[i];
	}
	float exp = sum / 10.0;
	printf("max=%d  min=%d  exp=%f", max, min, exp);

	system("pause");

}
//3.将一个n*m二维数组的行和列元素互换，存到另一个m*n的二维数组中，并输出其结果。
//例如：static int a[2][3]={{1,2,3},{4,5,6}};
static void test3()
{
	static int a[2][3] = { {1,2,3},{4,5,6} };
	int b[3][2] = { 0 };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			b[i][j] = a[j][i];
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}
	system("pause");

}
//4.编一程序，从键盘输入10个整数保存到数组，要求找出最小的数和它的下标，然后把它和数组中最前面的元素对换位置。
static void test4()
{
	int a[10] = { 0 };
	printf("请输入10个数:\n");
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	int min = a[0], minFlag = 0;
	for (int i = 0; i < 10; i++)
	{
		if (a[i]<min)
		{
			min = a[i];
			minFlag = i;
		}
	}
	int temp = a[0];
	a[0] = a[minFlag];
	a[minFlag] = temp;

	printf("min=%d  minFlag=%d  a[0]=%d", min, minFlag, a[0]);
	system("pause");
}
//5.编写程序，从键盘输入n个由小到大的顺序排好的数列和一个数insert_value,把insert_value插入到由这n个数组成的数列中，
//而且仍然保持有小到大的顺序，若insert_value比原有所有的数都大时放在最后，比原有的数都小时放在最前面。
static void test5()
{
	float a[11] = { 0 };
	printf("请输入10个数:\n");
	for (int i = 0; i < 10; i++)
	{
		scanf("%f", &a[i]);
	}
	//排序
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9-i; j++)
		{
			if (a[j]>a[j+1])
			{
				int temp = a[j];
				a[j] = a[j+1];
				a[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < 10; i++)
		printf("%f ", a[i]);
	printf("\n请输入insert_value:");
	int insert_value = 0;
	scanf("%d", &insert_value);
	//遍历当insert_value第一次小于a[i]时，数组后的每个元素赋值给后一个元素，从末尾开始。
	for (int i = 0; i < 10; i++)
	{
		if (insert_value<a[i])
		{
			for (int j = 10; j > i; j--)
			{
				a[j] = a[j - 1];
			}
			a[i] = insert_value;
			break;
		}
	}
	for (int i = 0; i < 11; i++)
		printf("%f ", a[i]);
	system("pause");
}
//6.编程完成下述功能：从键盘输入一个n*n(最大为20*20)矩阵的各元素的值，求出该矩阵两条对角线上各元素值之和并打印出结果
static void test6()
{
	printf("输入n(最大为20):");
	int n = 0;
	scanf("%d",&n);
	if (n>20||n<0)
	{
		printf("\n输入错误");
	}
	int a[20][20] = { 0 };
	printf("\n输入矩阵的值:");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i][i];
	}

	printf("sum=%d", sum);
}
//7.求Fibonacci数列中的前20个数，Fibonacci数列的前两个数为1，1，以后每一个数都是前两个数之和。Fibonacci数列的前
//n个数为1，1，2，3，5，8，13，用数组存放数列前20个数，并输出之（按一行五个输出）。
static void test7()
{
	int a[20] = { 0 };
	a[0] = a[1] = 1;
	for (int i = 2; i < 20; i++)
	{
		a[i] = a[i - 1] + a[i - 2];
	}
	for (int i = 0; i < 20; i++)
	{
		printf("%d\t", a[i]);
		if ((i+1)%5==0)
		{
			printf("\n");
		}
	}
	system("pause");
}
//8.有一个5*5二维数组，试编程求周边元素及对角线元素之和，并输出该数组值最小的元素。
static void test8()
{
	printf("输入5*5数组的每个元素：\n");
	int a[5][5] = { 0 };
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	int sum = 0, min = a[0][0];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (a[i][j]<min)
			{
				min = a[i][j];
			}
			//第一行和最后一行求和，其他行中列为0或4求和
			if (i==0||i==4)
			{
				sum += a[i][j];
			}
			else if(j==0||j==4)
			{
				sum += a[i][j];
			}
		}
	}

	printf("min=%d,sum=%d", min, sum);
	system("pause");
}
//9.试编一程序完成以下功能：定义一个含有30个整型元素的数组，按顺序分别赋予从2开始的偶数；然后按顺序每5个数求出一个
//平均值，放在另一数组中并输出。
static void test9()
{
	int a[30] = { 0 };
	int b[6] = { 0 };
	for (int i = 0; i < 30; i++)
	{
		a[i] = 2 * (i + 1);
	}
	int sum = 0;
	for (int i = 0; i < 30; i++)
	{
		sum += a[i];
		if ((i+1)%5==0)
		{
			b[(i + 1) / 5 - 1] = sum / 5;
			sum = 0;
		}
	}
	for (int i = 0; i < 6; i++)
	{
		printf("%d ", b[i]);
	}
	system("pause");
}


int main()
{
	//test1();
	//test2();
	//test3();
	//test4();
	//test5();
	//test6();
	//test7();
	//test8();
	test9();

	return(0);
}