#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string>
//1.��дһ������������һ�����֣��жϸ��������������Ǹ���������

static void test1()
{
	printf("input a number : ");
	int x = 0;
	scanf("%d", &x);
	if (x > 0)
	{
		printf("%d��һ������", x);
	}
	else if (x == 0)
	{
		printf("%d����", x);
	}
	else
	{
		printf("%d��һ������", x);
	}
}

//2.��дһ������������һ�������ж��Ƿ�Ϊ����
static void test2()
{
	printf("int put a number: ");
	int x = 0;
	scanf("%d", &x);
	for (int i = 2; i < x / 2; i++)
	{
		if (x % i == 0)
		{
			printf("%d��Ϊ����\n", x);
			return;
		}
	}
	printf("%d������\n");
}


//3.��дһ������������һ�������ж��Ƿ�Ϊ����
//��ʾ����n��һ������Ȼ��������n�ĸ�λ���ַ�������������Ȼ��n1��n��ȣ����nΪһ�����������磬��n=1234321,���nΪһ����������n=1234567����n���ǻ�����

static void isHuiWen(char a[20])
{
	int len = strlen(a);
	char b[20] = { 0 };
	for (int i = 0; i < len; i++)
	{
		b[len - 1 - i] = a[i];
	}
	if (strcmp(a, b) == 0)
	{
		printf("�����ǻ���\n");
	}
	else
	{
		printf("�������ǻ���\n");
	}
}

static void test3()
{
	printf("input a number: ");
	char a[20] = { 0 };
	gets_s(a);

	isHuiWen(a);

	system("pause");
}
//��׼��,�õ�ѭ����10


int main()
{
	//test1();
	test3();

	return 0;
}