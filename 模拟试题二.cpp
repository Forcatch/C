#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//1.��ð�ݷ�����������������򣩡�ð�ݷ����������Ƚϴ����������е�Ԫ�أ�������������˳��Ҫ��ĸ���Ԫ�أ�ֱ��ȫ������˳��Ҫ��Ϊֹ
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

//2.����һ������ж����Ƿ�Ϊ���꣬������������֮һ�ͳ�Ϊ���꣺
//��1���ܱ�4���������ܱ�100��������2���ܱ�100����Ҳ�ܱ�400����
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

//3.һ����ǡ�õ�����������֮�ͣ����������Ϊ��������������6=1+2+3.����ҳ�1000��������������
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