#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string>
#define PAI 3.14
//1.��дһ������Ҫ���м���������������������������Ϊ�߳��������ε������
static void test1()
{
	float a = 0, b = 0, c = 0;
	printf("����ȷ���������ε�3����\na=");
	scanf("%f", &a);
	printf("b=");
	scanf("%f", &b);
	printf("c=");
	scanf("%f", &c);
	if (a > 0 && b > 0 && c > 0 &&
		a + b > c && a + c > b && b + c > a &&
		a - b < c && a - c < b && b - c < a)
	{
		float p = (a + b + c) / 2;
		float s = sqrt(p * (p - a) * (p - b) * (p - c));
		printf("%f\n", s);
	}
	else
	{
		printf("���������������\n");
	}
	system("pause");
}

//2.����Բ�İ뾶r��һ��������k����k=1ʱ������Բ���������k=2ʱ������Բ���ܳ�����k=3ʱ
//��Ҫ��Բ���ܳ�ҲҪ���Բ����������ʵ�����Ϲ��ܡ�
static void test2()
{
	printf("������Բ�İ뾶r�Լ�k��ֵ\n��k=1ʱ������Բ���\n��k=2ʱ������Բ���ܳ�\n��k=3ʱ�������ܳ������\nr=");
	float r = 0;
	int k = 0;
	scanf("%f", &r);
	printf("k=");
	scanf("%d", &k);

	float s = PAI * r * r;
	float p = 2 * PAI * r;
	switch (k)
	{
	case 1:
		printf("Բ���Ϊ��%f", s);
		break;
	case 2:
		printf("Բ�ܳ�Ϊ��%f", p);
		break;
	case 3:
		printf("Բ���Ϊ��%f\nԲ�ܳ�Ϊ��%f", s, p);
		break;
	default:
		printf("k��ֵ��������\n");
		break;
	}
	system("pause");
}

//3.��д�����ж�ĳһ���Ƿ�Ϊ����
static void test3()
{
	printf("������һ�����\nyear:");
	int year = 0;
	scanf("%d", &year);
	if (year <= 0)
	{
		printf("��������������һ������\n");
		return;
	}
	if (year % 400 == 0)
	{
		printf("%dΪ����\n", year);
	}
	else if (year % 4 == 0)
	{
		printf("%dΪ����\n", year);
	}
	else
	{
		printf("%d��Ϊ����\n", year);
	}
	system("pause");
}

//4.��һ�������亯����ϵ���£��Ա�����Ӧ��ÿһ�Ա����ĺ���ֵ��
//y=x^2        (x<0)
// =-0.5x+10   (0<=x<10)
// =x-sqrtx    (x>=10)
static void test4()
{
	printf("�����Ա���x��ֵ��");
	float x = 0;
	scanf("%f", &x);
	float y = 0;
	if (x < 0)
	{
		y = x * x;
	}
	else if (x >= 10)
	{
		y = x - sqrt(x);
	}
	else
	{
		y = -0.5 * x + 10;
	}
	printf("y=%f\n", y);

	system("pause");
}

//5.��һ���򣬶��ڸ�����һ���ٷ��Ƴɼ��������Ӧ������Ƴɼ����裺90������Ϊ��A��;
//80-89��Ϊ��B����70-79��Ϊ��C��;60-69Ϊ��D����60������Ϊ��E����
static void test5()
{
	printf("������һ���ٷ��Ƴɼ�:");
	int score = 0;
	char grade = '\0';
	scanf("%d", &score);
	if (score >= 90 && score <= 100)
	{
		grade = 'A';
	}
	else if (score >= 80 && score < 90)
	{
		grade = 'B';
	}
	else if (score >= 70 && score < 80)
	{
		grade = 'C';
	}
	else if (score >= 60 && score < 70)
	{
		grade = 'D';
	}
	else if (score >= 0 && score < 60)
	{
		grade = 'E';
	}
	else
	{
		printf("��������������һ���ٷ��Ƴɼ�\n");
		return;
	}

	printf("����Ƴɼ�Ϊ��%c\n", grade);
	system("pause");
}

//6.�Ա��������¹��ܣ�����һ��������4λ��������������Ǽ�λ���������������λ���֡�
static void test6()
{
	printf("������һ��������4λ��������");
	int a = 0;
	scanf("%d", &a);
	if (a > 9999 || a <= 0)
	{
		printf("����������������������һ��������4λ������\n");
		return;
	}
	int n1, n2, n3, n4;
	n1 = a / 1000;
	n2 = a / 100 % 10;
	n3 = a / 10 % 10;
	n4 = a % 10;
	if (n1 != 0)
	{
		printf("4λ��,%d %d %d %d\n", n4, n3, n2, n1);
	}
	else if (n2 != 0)
	{
		printf("3λ��,%d %d %d\n", n4, n3, n2);
	}
	else if (n3 != 0)
	{
		printf("2λ��,%d %d\n", n4, n3);
	}
	else if (n4 != 0)
	{
		printf("1λ��,%d\n", n4);
	}
	system("pause");
}

//int main()
//{
//	//test1();
//	//test2();
//	//test3();
//	//test4();
//	//test5();
//	//test6();
//	return (0);
//}