#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string>

//1.��дһ���������һ���ַ����ĳ���
static void test1()
{
	const char* a = "hello world";
	int count = 0;
	while (*a++)
	{
		count++;
	}
	printf("the lenth of string a is: %d", count);

	system("pause");
}

//2.��дһ��������12���·ݵ�Ӣ�����Ƴ�ʼ��һ���ַ���ָ�����飬��������������Ϊ1��12ʱ����ʾ��Ӧ���·���
//��������������ʱ��ʾ������Ϣ��
static void test2()
{
	const char* m1 = "January", * m2 = "February", * m3 = "March", * m4 = "April", * m5 = "May", * m6 = "June",
		* m7 = "July", * m8 = "August", * m9 = "September", * m10 = "October", * m11 = "November", * m12 = "December";
	const char* a[12] = { m1,m2,m3,m4,m5,m6,m7,m8,m9,m10,m11,m12 };
	printf("input a month : ");
	int mon = 0;
	scanf("%d", &mon);
	if (mon>=1&&mon<=12)
	{
		printf("%s\n", a[mon - 1]);
	}
	else
	{
		printf("input error!\n");
	}

	system("pause");
}


//3.��һ���򣬽��ִ�computer����һ���ַ����飬Ȼ��ӵ�һ����ĸ��ʼ���������ô�������ָ����ɡ�
static void test3()
{
	char a[] = "computer";
	char* p;
	p = a;
	while (*p)
	{
		printf("%c", *p++);
	}
	printf("\n");

	system("pause");

}

//4.��һ���򣬽��ַ����е�m���ַ���ʼ��ȫ���ַ����Ƴ���һ���ַ�����Ҫ���������������ַ�����m��ֵ��������ƽ����
//�ڱ�����������ɸ��ơ�

void strCopy(char a[], int m)
{
	char b[50] = { 0 },*p;
	p = a + m - 1;
	int i = 0;
	while (*p)
	{
		b[i++] = *p++;
	}

	printf("%s", b);
}

static void test4()
{
	printf("input m :");
	int m=0;
	scanf("%d", &m);
	char a[] = "hello world";
	strCopy(a, m);

	system("pause");
}

//5.����һ���У�����10�������Ѱ��������кá���Ҫ���һ�������ܹ��Ѵ�ָ��λ�ÿ�ʼ��n�����������������в�����µ�
//�������С�����������ʱҪ��ʹ��ָ�뷽�����Ա�̡������磺ԭ����Ϊ2��4��6��8��10��12��14��16��18��20����Ҫ���
//��4������ʼ��5�����������������У���õ�������Ϊ2��4��6��16��14��12��10��8��18��20��

void reverseSort(int a[],int m,int n)
{
	int b[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		b[i] = a[i];
	}
	int* p, * q;
	p = &b[m-1];
	q = &a[m-1+n-1];
	while (n--)
	{
		*p++ = *q--;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", b[i]);
	}
	

}

static void test5()
{
	int a[10] = { 2,4,6,8,10,12,14,16,18,20 };
	int m = 0, n = 0;
	printf("input m: ");
	scanf("%d", &m);
	printf("input n: ");
	scanf("%d", &n);

	reverseSort(a, m, n);
	
	system("pause");

}

//6.ͨ��ָ������p��һά����a����һ��3x2�Ķ�ά���󣬲�Ϊa���鸳��ֵ2��4��6��8��������Ҫ���Ȱ��е�˳������ˡ���ά���顱��
//Ȼ���ٰ��е�˳���������
static void test6()
{
	int a1[2] = { 0 }, a2[2] = { 0 }, a3[2] = { 0 };
	int* a[3] = { a1,a2,a3 };
	int n = 1;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			a[i][j] = 2*n++;
		}
	}

	printf("���������\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d ", a[i][j]);
		}
	}
	printf("���������\n");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", a[j][i]);
		}
	}

	system("pause");
}

//7.��дһ������������nΪż��ʱ�����ú�����1/2+1/4+����+1/n��������nΪ����ʱ�����ú���1/1+1/3+����+1/n������ָ�뺯����
float *sumN(int n)
{
	float sum = 0;
	if (n%2==0)
	{
		for (float i = 2; i <=n; i+=2)
		{
			sum += 1.0/ i;
		}
	}
	else
	{
		for (float i = 1; i <= n; i += 2)
		{
			sum += 1.0 / i;
		}
	}

	return &sum;
}

static void test7()
{
	printf("input n: ");
	int n = 0;
	scanf("%d", &n);
	float* p = sumN(n);
	printf("sum: %f\n", *p);
	system("pause");
	
}

//8.��дһ���򣬴Ӽ�������10������������data[10]�У�ͬʱ����һ��ָ�����pָ����data��Ȼ��ͨ��ָ�����p�����鰴�մ�С��
//���˳������������������Ч����
static void test8()
{
	int data[10] = { 0 },*p;
	p = data;
	printf("input ten numbers:\n");
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &data[i]);
	}
	//�о�����д�ĺܺ�
	for (int i = 0; i < 9; i++)  
	{
		for (int j = 0; j < 9-i; j++)
		{
			if (*p>*(p+1))
			{
				int temp = *p;
				*p = *(p + 1);
				*(p + 1) = temp;
			}
			p++;
		}
		p = data;
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
}

//9.��һ���򣬴�һ��3��4�еĶ�ά�������ҳ���������ڵ��к��У��������ֵ����������ֵ��ӡ������Ҫ�󽫲��Һʹ�ӡ�Ĺ��ܱ�
//һ����������ά������������������н��У�������ά����ͨ��ָ��������ݵķ�ʽ�����������ݵ��Ӻ����С�

void findMax(int a[3][4],int n)
{
	int max = a[0][0], maxr = 0, maxc = 0;
	//int x = sizeof(a) / sizeof(int) / 4;   //����a�Ѿ��˻�����һ��ָ�룬sizeof��ĳ�����ָ��ĳ���
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (max<a[i][j])
			{
				max = a[i][j];
				maxr = i;
				maxr = j;
			}
		}
	}

	printf("max=%d\tmaxRow=%d\tmaxCol=%d\n", max, maxr+1, maxc+1);

}
static void test9()
{
	printf("input a 3*4 array: \n");
	int a[3][4] = { 0 };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{

			scanf("%d", &a[i][j]);
		}
	}

	findMax(a, sizeof(a) / sizeof(int) / 4);

	system("pause");
}
//10.��һ�������Ƚ�һ������10�����������鰴���������У�Ȼ�󽫴�һָ��λ��m��ʼ��n�������������������У����������ɵ�
//�໥�������Ҫ��ʹ��ָ����Ʒ���ʵ����������

void sort(int a[], int n)
{
	//printf("%d\n", a[3]);
	//int x = sizeof(a) / 4;

	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
static void test10()
{
	printf("input a array with ten numbers: ");
	int a[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a, sizeof(a) / sizeof(int));

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}


	int m = 0, n = 0;
	printf("input m: ");
	scanf("%d", &m);
	printf("input n: ");
	scanf("%d", &n);

	reverseSort(a, m, n);

}

//11.��һ������������������10���������浽���飬ͬʱ��дһ�����ú���funct,����funct��������ʽ����(����һ�����ڽ������飬
//��һ����ʾ�������Ԫ�ظ���)��funct�������ҳ��������е����ֵ��λ�ò��������ֵ�ĵ�ַ��Ϊ����funct�ķ���ֵ���������С�
//���������д�ӡ������������ֵ
int* funct(int a[], int n)
{
	int max = a[0], *maxflag=a ;
	//int x = sizeof(a) / sizeof(int) / 4;   //����a�Ѿ��˻�����һ��ָ�룬sizeof��ĳ�����ָ��ĳ���
	for (int i = 0; i < n; i++)
	{
		if (max < a[i])
		{
			maxflag = &a[i];
			max = a[i];
		}
	}
	return maxflag;
}
static void test11()
{
	printf("input a array with ten numbers: \n");
	int a[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	int* p = funct(a, 10);
	printf("max=%d\n",*p);
}


//12.��һ��������һ��������sort,�ú��������鰴�մ�С�����˳���������������������ʽ������һ��Ϊָ�������ָ��p��
//��һ��Ϊ�����Ԫ�ظ���n����������main()��Ҫ��Ӽ�������10������������data[10]�У�ͬʱҪ����ú���sort��data��������
//����main()��������յ�������

static void test12()
{
	printf("input a array with ten numbers: \n");
	int a[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a, 10);

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

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
	//test9();
	//test10();
	//test11();
	test12();

	return 0;
}