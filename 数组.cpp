#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string>

//1.�����ݷ���10��������
static void test1()
{
	float a[10] = { 0 };
	printf("������10����:\n");
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
//2.��һ���򣬴Ӽ�������10�����������浽���飬�����10�����������ֵ����Сֵ��ƽ��ֵ��
static void test2()
{
	int a[10] = { 0 };
	printf("������10����:\n");
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
//3.��һ��n*m��ά������к���Ԫ�ػ������浽��һ��m*n�Ķ�ά�����У������������
//���磺static int a[2][3]={{1,2,3},{4,5,6}};
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
//4.��һ���򣬴Ӽ�������10���������浽���飬Ҫ���ҳ���С�����������±꣬Ȼ���������������ǰ���Ԫ�ضԻ�λ�á�
static void test4()
{
	int a[10] = { 0 };
	printf("������10����:\n");
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
//5.��д���򣬴Ӽ�������n����С�����˳���źõ����к�һ����insert_value,��insert_value���뵽����n������ɵ������У�
//������Ȼ������С�����˳����insert_value��ԭ�����е�������ʱ������󣬱�ԭ�е�����Сʱ������ǰ�档
static void test5()
{
	float a[11] = { 0 };
	printf("������10����:\n");
	for (int i = 0; i < 10; i++)
	{
		scanf("%f", &a[i]);
	}
	//����
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
	printf("\n������insert_value:");
	int insert_value = 0;
	scanf("%d", &insert_value);
	//������insert_value��һ��С��a[i]ʱ��������ÿ��Ԫ�ظ�ֵ����һ��Ԫ�أ���ĩβ��ʼ��
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
//6.�������������ܣ��Ӽ�������һ��n*n(���Ϊ20*20)����ĸ�Ԫ�ص�ֵ������þ��������Խ����ϸ�Ԫ��ֵ֮�Ͳ���ӡ�����
static void test6()
{
	printf("����n(���Ϊ20):");
	int n = 0;
	scanf("%d",&n);
	if (n>20||n<0)
	{
		printf("\n�������");
	}
	int a[20][20] = { 0 };
	printf("\n��������ֵ:");
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
//7.��Fibonacci�����е�ǰ20������Fibonacci���е�ǰ������Ϊ1��1���Ժ�ÿһ��������ǰ������֮�͡�Fibonacci���е�ǰ
//n����Ϊ1��1��2��3��5��8��13��������������ǰ20�����������֮����һ������������
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
//8.��һ��5*5��ά���飬�Ա�����ܱ�Ԫ�ؼ��Խ���Ԫ��֮�ͣ������������ֵ��С��Ԫ�ء�
static void test8()
{
	printf("����5*5�����ÿ��Ԫ�أ�\n");
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
			//��һ�к����һ����ͣ�����������Ϊ0��4���
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
//9.�Ա�һ����������¹��ܣ�����һ������30������Ԫ�ص����飬��˳��ֱ����2��ʼ��ż����Ȼ��˳��ÿ5�������һ��
//ƽ��ֵ��������һ�����в������
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