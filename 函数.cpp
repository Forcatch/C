#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string>


//1.��һ�����飬�ڷ�10��ѧ����Ӣ��ɼ���дһ�����������ƽ���֣����Ҵ�ӡ������ƽ���ֵ�Ӣ��ɼ���
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

//2.��дһ������������һ����������ĸ�λ����֮�͡�������������������͵��øú�����
int numSum(int n)
{
	int n_sum=0;
	while (1)
	{
		if (n / 10 == 0)       //������û���ʱֱ����while �����ʵ��һ����do while ����ѭ������������Ҫ������for 
		{
			n_sum += n % 10;
			break;               //ÿ�ζ���¼��λ�ϵ�����ÿ�γ�10��֪��ֻ�и�λ����ѭ�� ���غ���ֵ
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

//3.���к����������c=add(a,b)�����дadd��������������ʵ��a��b�ĺͣ������غ�ֵ��
//double add(double x,double y){}
double add(double x, double y)
{
	return x + y;
}

//4.���б����������double a=5.0;int n=5;�ͺ����������mypow(a,n);������a��n�η������дdouble mypow(double x,int y)����
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

//5.���б�������ͺ���������� int a,b;b=sum(a);����sum()������ 1+2+����+k��������Ϊ����ֵ���ء���a��ֵΪ10.������sum�ļ���
//��b��ֵ��55.���дsum������
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
//6.���б�������ͺ���������䣺int a=1,b=-5,c=fun(a,b);fun�����������Ǽ���������֮��ľ���ֵ��������ֵ���ص���
//���������дfun������
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

//7.���б�������ͺ���������䣺int x=57;isprime(x);����isprime()�����ж�һ��������a�Ƿ�Ϊ������������������������1�����򷵻�0
//���дisprime������
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
//8.���õݹ麯�����÷�ʽ�����������5���ַ������෴˳���ӡ������
void reversePrint(char a[],int n)   //�ݹ���÷���ʲô����õݹ�
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
//��׼��  �ݹ���ÿ������������ջ������temp����
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
//9.�����ݹ���ü���׳�
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
//10.����10��ѧ���ĳɼ����ֱ��ú���ʵ�֣�
//(1)��ƽ���ɼ���
//(2)�������ߵͽ������������
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

//11.����һ4*4��ά�����Ա��������¹��ܣ�
//(1)��4*4������ĶԽ���Ԫ��֮�ͣ�
//(2)����ά����Ԫ�����л����������һ���飬���������������
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
//12.�������ַ���������10���ַ����Ա��������¹��ܣ�
//(1)�ֱ��ҳ������ַ����������ַ�Ԫ�أ�
//(2)�����ַ�����Ӧλ��Ԫ������Ƚϣ���ͳ����������ַ�����ӦԪ�ش��ڣ�С�ں͵��ڵĴ�����(���й��ܶ��ú�������ʵ��)
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
	printf("����һ������Ϊ10���ַ���a��\n");
	for (int i = 0; i < 10; i++)
	{
		a[i] = getchar();
	}
	getchar();
	printf("����һ������Ϊ10���ַ���b��\n");
	for (int i = 0; i < 10; i++)
	{
		b[i] = getchar();
	}

	printf("a�����Ԫ�أ�%c\n", findMax(a,10));
	printf("b�����Ԫ�أ�%c\n", findMax(b,10));
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