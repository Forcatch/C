#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string>
#include<math.h>

//1.��д�������������������Լ��
void test01()
{
	printf("��������������\n");
	int a = 0, b = 0;
	scanf("%d%d",&a,&b);
	//����a>=b
	if (b>a)
	{
		a = a + b;
		b = a - b;
		a = a - b;
	}
	int gongyueshu = 0;
	for (int i = 1; i <= b; i++)
	{
		if (a % i == 0)
		{
			gongyueshu = i;
		}
	}
	printf("���Լ��Ϊ��%d\n", gongyueshu);
	system("pause");
}

//2.���������������಻����5λ��������˳��ķ�������������磬��������12345��Ҫ����������54321�����ʵ�ִ˹���
void test02()
{
	//��֧�ָ�������֧�ַ�����֧��0,��֧�ֳ���5λ��
	printf("�����벻������λ��������");
	int x = 0;
	scanf("%d",&x);
	int n1, n2, n3, n4, n5;
	n1 = x / 10000;
	n2 = x / 1000 % 10;
	n3 = x / 100 % 10;
	n4 = x / 10 % 10;
	n5 = x % 10;
	if (n1)
	{
		printf("����һ����λ����%d%d%d%d%d", n5, n4, n3, n2, n1);
	}
	else if(n2)
	{
		printf("����һ����λ����%d%d%d%d", n5, n4, n3, n2);
	}
	else if (n3)
	{
		printf("����һ����λ����%d%d%d", n5, n4, n3);
	}
	else if (n2)
	{
		printf("����һ����λ����%d%d", n5, n4);
	}
	else 
	{
		printf("����һ��һλ����%d", n5);
	}

	system("pause");
}

//3.�й��Ŵ���ѧ����������ġ��ټ����⡱��һֻ�󹫼�ֵ���Ǯ��һֻĸ��ֵ����Ǯ������С��ֵһ��Ǯ������100Ǯ��Ҫ��
//100ֻ�����Ƿ���ԣ������ԣ�����һ���⣬Ҫ�����ּ����С���д����������ĳ���
void test03()
{
	int x = 0, y = 0, z = 0;
	for (x=0; x <=20; x++)
	{
		for (y=0; y <= 34; y++)
		{
			for (  z=0; z <= 100; z++)
			{
				if (x + y + z == 100 && 5 * x + 3 * y + 1.0/3*z == 100 && z % 3 == 0) //ע�ⲻ��д1/3 C���������������Ҳ��Ϊ����
				{
					printf("�󹫼�%dֻ��ĸ��%dֻ��С��%dֻ\n", x, y, z);
				}
			}
		}
	}
	system("pause");

}

//4.��100~200���ȫ��������
void test04()
{
	int a = 101;
	for (  ; a <= 200; a+=2)
	{
		int tag = 0;
		for (int i = 2; i <= sqrt(a); i++) //�Ż����� ��1.�����ز�Ϊż����2.��������ĳ�����ӱ�С�ڸ�����ƽ����
		{
			if (a % i == 0)
				tag = 1;
		}
		if (tag==0)
		{
			printf("%d ", a);
		}
	}
	system("pause");
}

//5.��Ԫ����Ǯ���⡣��1Ԫ�һ���1�֣�2�֣�5�ֵ�Ӳ�ң����ж����ֲ�ͬ�Ļ��������д��������ĳ���
void test05()
{
	//x+2*y+z*5=100
	int x , y , z ;
	for ( x=0;  x<=100; x++)
	{
		for (y = 0; y <= 50; y++)
		{
			for ( z = 0; z <= 20; z++)
			{
				if (x + 2 * y + z * 5 == 100)
				{
					printf("1��%d����2��%d����5��%d��\n", x, y, z);
				}
			}
		}
	}

	system("pause");
}

//6.��һ�������У�2/1��3/2��5/3��8/5��13/8��21/13����������д������������е�ǰ20��֮�͡� //쳲���������
void test06()
{
	float sum=0.0;
	float den=1, mol = 2;          //����һ��Ҫ��float,��int �����
	int temp = 0;
	for (int i = 0; i < 20; i++)
	{
		sum += mol / den;

		temp=mol;
		mol = den+temp;
		den = temp;
	}
	printf("%f\n", sum);
	system("pause");
}

//7.��д�������ù�ʽe=1+1/1��+1/2��+1/3��+����+1/n�����e�Ľ���ֵ������n��ֵ���û����루���ڿ��ƾ�׼�ȣ���
void test07()
{
	printf("������n��ֵ��");
	int n = 0;
	scanf("%d",&n);
	float sum = 0;
	float temp = 1;                 //�˻��ǳ�ʼֵ��Ϊ1��inf��ʾinfinite�����
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			temp *= j;
		}
		sum += 1.0 / temp;
	}
	printf("Sum=%f\n",sum);
	
	system("pause");
	
}

//8.һ�������ǡ�õ�����������֮�ͣ��������⣩����Ƹ���Ϊ��ȫ�������磺6=1+2+3��6������ȫ�������дһ�������1000
//���ڵ������е�������ȫ��������1000���û����롣
void test08()
{
	printf("������һ������");
	int n = 0;
	scanf("%d", &n);
	int sum = 0;
	printf("��ȫ����");
	for (int i = 1; i <= n; i++)
	{
		sum = 0;
		for (int j = 1; j <= i/2; j++)
		{
			if (i % j == 0)
			{
				sum += j;
			}
		}
		if (i==sum)
		{		
			printf("%d ",i);
		}
	}
	printf("\n");
	system("pause");

}

//9.��һ���򣬽�2000�굽3000��������������������ͳ�Ƴ��������������Ҫ��ÿ10���������һ�������
void test09()
{
	bool isLeap=false;
	int count = 0;
	for (int i = 2000; i < 3000; i++)
	{
		isLeap = false;
		if (i%400==0)
		{
			isLeap = true;
		}
		else if (i%4==0)
		{
			isLeap = true;
		}

		if (isLeap)
		{
			count++;
			printf("%d ", i);
			if (count%10==0)
			{
				printf("\n");
			}
		}

	}

	system("pause");
}

//10.���дһ���򣬴�ӡ���žų˷��ھ�������1*1=1��
void test10()
{
	for (int i = 1;i < 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
		
			printf("%d*%d=%d ", j, i, i * j);
		}
		printf("\n");
	}
}

//11.���дһ���򣬽����С�ˮ�ɻ�������ӡ����������ӡ������������ˮ�ɻ�������һ�����λ���������͵��ڸ���������λ����
void test11()
{
	int n1 = 0, n2 = 0, n3 = 0;
	for (int i = 100; i < 1000; i++)
	{
		n1 = i / 100;
		n2 = i / 10 % 10;
		n3 = i % 10;
		if (i==n1*n1*n1+n2*n2*n2+n3*n3*n3)
		{
			printf("%d ", i);
		}
	}
	system("pause");
}

//12.��дһ������1-3+5-7+����-99+101��ֵ��
void test12()
{
	int sum = 0;
	for ( int i = 1 ,count=1; ; i+=2 ,count++)
	{
		if (count%2==1)
		{
			sum += i;
		}
		else
		{
			sum -= i;
		}
		if (i==101)
			break;
	}
	printf("%d\n", sum);
	system("pause");
}

//13.��д���򣬼���1��+2��+3��+����+n!��ֵ������n��ֵ���û����롣
void test13()
{
	printf("������n��ֵ��");
	int n = 0;
	scanf("%d", &n);
	long long sum = 0;
	long long temp = 1;
	for (int i = 1;	i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			temp *= j;
		}
		sum += temp;
	}
	printf("%d", sum);
	system("pause");
}

//14.��sn=a+aa+aaa+aaaa+����+aaa����aa��ֵ������a��һ�����֣����磺2+22+222+2222+22222����ʱn=5��.n��a��ֵ�ɼ������룬��
//���ʵ�����Ϲ��̡�
void test14()
{
	printf("������n��a��ֵ��a=");
	int a = 0, n = 0;
	scanf("%d", &a);
	printf(" n=");
	scanf("%d", &n);
	long long sum = 0;
	long long temp = a;
	for (int i = 1; i <= n; i++)
	{	
		if (i != 1)
		{
			temp = 10 * temp + a;
		}
		sum += temp;
	}
	printf("%d", sum);
	system("pause");
}

//15.��д�����õ�������x=sqrt(a)�Ľ��Ƹ�����ƽ�����ĵ�����ʽΪ��Xn+1=(Xn+a/Xn)/2��Ҫ��ǰ�����������x�Ĳ�ľ���ֵС��0.00001
void test15()
{
	printf("����a��ֵ��");
	float a = 0;
	scanf("%f", &a);
	printf("sqrt(%f)=%f\n", a, sqrt(a));

	printf("����ʹ�õ�����ʽ����������Ĵ���n��");
	int n = 0;
	scanf("%d", &n);
	float x =1;
	for (int i = 0; i < n; i++)
	{
		x = (x + a / x) / 2.0;
	}
	printf("����ֵx=%f", x);
}

void test15A()
{
	float x = 1, x1;
	float a;
	printf("������һ��������");
	scanf("%f", &a);
	do
	{
		x = 1.0 / 2 * (x + a / x);
		x1 = 1.0 / 2 * (x + a / x);
	} while (fabs(x - x1) > 1e-5);
	printf("%5.2f��ƽ����=%8.5f\n", a, x);
}
//16.һ�����100�׸߶��������£�ÿ����غ��ַ�����ԭ���߶ȵ�һ�룬�����£������ڵ�10�����ʱ�����������ף���10�η�����ߣ�
//��д�����������⡣
void test16()
{
	float h = 100;
	float sum = h;
	for (int i = 2; i <= 10; i++)  //��һ�����Ϊh���ӵڶ�����ؿ�ʼ
	{
		h = h / 2.0;  //��غ��ܵ������ĸ߶�
		sum += h*2 ;
	}
	printf("������%f��,��ʮ�η���%f��", sum,h/2);  //�ʵ��ǵ�ʮ����غ󷴵����

	system("pause");
}

//17.�������¹�ʽ��pai^2/6=1/1^2+1/2^2+����+1/n^2���Ը���������ʽ��̼���pai�Ľ���ֵ����ȷ��10^-6��.
void test17()
{
	printf("����n��ֵ��");
	int n = 0;
	scanf("%d", &n);
	double sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += 1.0 / (i * i);
	}

	double pai = sqrt(6 * sum);
	printf("pai=%f", pai);

	system("pause");
}



int main()
{
	//test01();
	//test02();
	//test03();
	//test04();
	//test05();
	//test06();
	//test07();
	//test08();
	//test09();
	//test10();
	//test11();
	//test12();
	//test13();
	//test14();
	//test15();
	test15A();
	//test16();
	//test17();






	return(0);
}