#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string>
#include<math.h>

//1.从键盘上输入一个大写字母，要求改用小写字母输出
static void test1()
{
	
	printf("请输入一个大写字母,输入数字1退出\n");
	while (1)
	{
		char a = '\0';
		a = getc(stdin);
		//a = getchar();
		//scanf("%c", &a); //三种方法都可以
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
			printf("输入错误，请输入一个大写字母\n");
		}
		a = getc(stdin); //存在输出输入缓存区，当在控制台输入一个字符的时候必须要按回车结束输入，这时多了一个回车字符
	}
}

//2.编写程序，求方程ax^2+bx+c=0的解x
static void test2()
{
	float a = 0, b = 0, c = 0;
	printf("请输出二次方程的a\n");
	scanf("%f", &a);
	printf("请输出二次方程的b\n");
	scanf("%f", &b);
	printf("请输出二次方程的c\n"); 
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
		printf("此方程无解\n");
	}
	system("pause");
}

//3.请编写一个程序，能显示出以下两行字。
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