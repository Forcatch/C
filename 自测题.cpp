#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//�Բ���һ�����������������಻������λ��������˳��ķ����������
static void test01()                 //����������˼����������������ʡ��С��������
{
	int m = 0, x = 0, n = 1;
	printf("input m :");
	scanf("%d", &m);
	if (m < 0 || m>99999)
	{
		printf("�������.");
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

//շת����������Լ��

//�Բ����� ��һ���򣬶��ڸ�����һ���ٷ��Ƴɼ��������Ӧ������Ƴɼ����裺>90ΪA;89~90B
static void test7()
{
	int score = 0;
	printf("������һ���ٷ��Ƴɼ���");
	scanf("%d", &score);
	if (score > 100 || score < 0)
	{
		printf("�ɼ������ʽ����");
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

//�Բ����� 2.��һ��5*5�����飬�Ա�����ܱ�Ԫ�ؼ��Խ���Ԫ��֮�ͣ��������������ֵ��С��Ԫ��
static void test8()
{
	float a[5][5] = { 0 };
	printf("������һ��5*5�ľ���");
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

//�Բ����� 3.��дһ��������12�·ݵ�Ӣ�����Ƴ�ʼ��һ���ַ�ָ�����飬��������������Ϊ1��12ʱ����ʾ��Ӧ���·�����������������ʱ��ʾ������Ϣ��
static void test9()
{
	int mon = 0;
	const char* month[12] = { "January","February","March","April","May","June","July","August","September","October","November","December" };
	printf("����һ���·ݣ�");
	scanf("%d", &mon);
	if (mon <= 0 || mon > 12)
	{
		printf("��������\n");
	}
	else
	{
		printf("%s", month[mon - 1]);
	}

}

//�Բ����� 1.�Ա��������¹��ܣ�����һ��������4λ��������������Ǽ�λ���������������λ���֡�
static void test10()
{
	int x = 0;
	printf("����һ��������4λ������: ");
	scanf("%d", &x);
	if (x > 9999 || x < 0)
	{
		printf("��������!\n");
		return;
	}
	int x1, x2, x3, x4;
	x1 = x / 1000;
	x2 = x / 100 % 10;
	x3 = x / 10 % 10;
	x4 = x % 10;
	if (x1 > 0)
	{
		printf("4λ�� %d%d%d%d", x4, x3, x2, x1);
	}
	else if (x2 > 0)
	{
		printf("3λ�� %d%d%d", x3, x2, x1);
	}
	else if (x3 > 0)
	{
		printf("2λ�� %d%d", x2, x1);
	}
	else
	{
		printf("1λ�� %d", x1);
	}

}

//����һ4*4��ά���飬�Ա��������¹��ܣ���1����4*4������ĶԽ���Ԫ��ֵ�͡�(2)����ά����Ԫ�����л����������һ���飬���������������
static void test11()
{
	int a[4][4] = { 0 };
	printf("����һ��4*4������");
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
//�������ַ���������10���ַ����Ա��������¹��ܣ���1���ֱ��ҳ������ַ����������ַ�Ԫ�أ�
//��2�������ַ�����Ӧλ��Ԫ������Ƚϣ���ͳ����������ַ�����ӦԪ�ش��ڣ�С�ں͵��ڵĴ����������й���ͨ����������ʵ�֣�
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
	printf("������������Ϊ10���ַ����ַ�����");
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