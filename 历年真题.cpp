#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

/////////////////////////////2011������//////////////////////////////
//1.��д������������8��ʵ����������a�У�Ҫ������������������С������20�֣�
static void test11()
{
	printf("input 8 number to a array ,one by one and press enter.\n");
	float a[8] = { 0 };
	for (int i = 0; i < 8; i++)
	{
		printf("input number %d elements of 8\n", i);
		scanf("%f", &a[i]);
	}
	float max = a[0], min = a[0];
	for (int i = 0; i < 8; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
		if (min > a[i])
		{
			min = a[i];
		}
	}
	printf("max: %f , min: %f", max, min);

}

//2.��д���򣺶���֪��ά���������ľ���a[3][3]={2.1,4.0,6.2,8.3,7.6,5.2,3.1,1.1,9.0},b[3][3]={1.2,2.8,5.4,6.3}.
//����a,b��������֮�Ͳ����ھ���c�У�c[i][j]=a[i][j]+b[i][j]����Ȼ�������ά����c��ֵ����20�֣�
static void test12()
{
	float a[3][3] = { 2.1,4.0,6.2,8.3,7.6,5.2,3.1,1.1,9.0 }, b[3][3] = { 1.2,2.8,5.4,6.3 }, c[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
			printf("%f\t", c[i][j]);
		}
		printf("\n");
	}
}

/////////////////////////////2012������//////////////////////////////
//1.��һ�������У�2/1��3/2��5/3��8/5��13/8��21/13������дC���Գ������������ǰ20��ͣ�14�֣�
static void test21()
{
	int mol = 2, deno = 1;
	float sum = 0;
	for (int i = 0; i < 20; i++)
	{
		sum += (float)mol / deno;
		int temp = mol;
		mol += deno;
		deno = temp;
	}
	printf("sum=%f\n", sum);
}

//2.������еġ�ˮ�ɻ���������ν�ġ�ˮ�ɻ�������ָһ����λ�������λ���������͵��ڸ���������12�֣�
static void test22()
{
	int x1, x2, x3;
	for (int i = 100; i < 1000; i++)
	{
		x1 = i / 100;
		x2 = i / 10 % 10;
		x3 = i % 10;
		if (i == x1 * x1 * x1 + x2 * x2 * x2 + x3 * x3 * x3)
		{
			printf("%d  ", i);
		}
	}
	printf("\n");
}
//3.�Ӽ�����������10�����������ݷ���10���������򣨴�С���󣩣�Ҫ�󣺽�10����������������У�14�֣�
static void test23()
{
	int a[10] = { 0 };
	printf("intput 10 numbers to a array,one by one and press enter.\n");
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
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
		printf("%d  ", a[i]);
	}
	printf("\n");
}

//4.�Ӽ�������һ����������Ҫ�󣺣�1��������Ǽ�λ������2���ֱ��ӡ��ÿһλ���֡���12�֣�
static void test24()
{
	printf("input a integer number.\n");
	int x, count = 0;
	int a[20] = { 0 };
	scanf("%d", &x);
	if (x <= 0)
	{
		printf("input error!\n");
	}
	while (x != 0)
	{
		a[count] = x % 10;
		x /= 10;
		count++;
	}
	printf("%dλ��:", count);
	count--;
	while (count >= 0)
	{
		printf("%d ", a[count--]);
	}



}

int main()
{
	//test2();
	//test21();
	//test22();
	//test23();
	test24();
	return 0;
}