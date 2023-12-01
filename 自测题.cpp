#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//�Բ�1��3.��дһ����������һ���ַ����ĳ��ȣ��������������������ɡ���ʹ��ָ�룩
int my_strlen(const char* str)
{
	const char* p = str;
	while (*p++);
	return(p - str - 1);
}
//�Բ�2��1����ӡ�����������
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


//�Բ���2
//1.��֪�����ε����߳����Ա���������ε����,Ҫ�����߳��Ӽ������룬Ҫ�������������Ƿ���ȷ���ܷ񹹳�������
//��������������߷ֱ�Ϊ��a,b,c


//2.��һ�����У�2/1��3/2��5/3��8/5��13/8.21/13���Ա��������ǰ20��ĺ�


//�Բ���3
//��һ������ϵ���£��Ա�����Ӧ��ÿһ�Ա����ĺ���ֵ
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

//2 �������¹�ʽ�����pai�Ľ���ֵ��
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
//3.��һ�������Ƚ�һ������10���������鰴���������У�Ȼ�󽫴�һָ��λ��m��ʼ��n�������������������У����������ɵ�
//���������Ҫ��ʹ��ָ����Ʒ���ʵ����������
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
	printf("�����Ǹ�����");
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a, 10);
	printf("����m��n��ֵ��");
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