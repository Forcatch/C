#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string>
#include<math.h>

//1.�Ӽ���������һ����д��ĸ��Ҫ�����Сд��ĸ���
static void test1()
{
	
	printf("������һ����д��ĸ,��������1�˳�\n");
	while (1)
	{
		char a = '\0';
		a = getc(stdin);
		//a = getchar();
		//scanf("%c", &a); //���ַ���������
		if (a >= 'A' && a <= 'Z')
		{
			a += 32;
			printf("%c\n", a);
		}
		else if (a == '1')
		{
			break;
		}
		else
		{
			printf("�������������һ����д��ĸ\n");
		}
		a = getc(stdin); //����������뻺���������ڿ���̨����һ���ַ���ʱ�����Ҫ���س��������룬��ʱ����һ���س��ַ�
	}
}

//2.��д�����󷽳�ax^2+bx+c=0�Ľ�x
static void test2()
{
	float a = 0, b = 0, c = 0;
	printf("��������η��̵�a\n");
	scanf("%f", &a);
	printf("��������η��̵�b\n");
	scanf("%f", &b);
	printf("��������η��̵�c\n"); 
	scanf("%f", &c);
	float det = b * b - 4 * a * c;
	float x1, x2;
	if (det>=0)
	{
		x1 = (-b + sqrt(det)) / (2 * a);
		x2 = (-b - sqrt(det)) / (2 * a);
		printf("x1=%f x2=%f\n", x1, x2);
	}
	else
	{
		x1 = 0;
		x2 = 0;
		printf("�˷����޽�\n");
	}
	system("pause");
}

//3.���дһ����������ʾ�����������֡�
//I am a student. 
//I love China.
static void test3()
{
	const char * str1= "I am a student";
	char str2[20] = "I love China";
	printf("%s\n%s", str1, str2);
	system("pause");
}

//int main()
//{
//	//test1();
//	//test2();
//	//test3();
//
//
//	return(0);
//}