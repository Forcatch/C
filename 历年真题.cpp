#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string>
#include<math.h>
/////////////////////////////2011年真题//////////////////////////////
//1.编写程序，输入任意8个实数存于数组a中，要求输出其中最大数和最小数。（20分）
static void test11()
{
	printf("input 8 number to a array ,one by one and press enter.\n");
	float a[8] = { 0 };
	for (int i = 0; i < 8; i++)
	{
		printf("input number %d elements of 8\n", i);
		scanf("%f", &a[i]);
	}
	float max = a[0], min = a[0];
	for (int i = 0; i < 8; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
		if (min > a[i])
		{
			min = a[i];
		}
	}
	printf("max: %f , min: %f", max, min);

}

//2.编写程序：对已知二维数组描述的矩阵a[3][3]={2.1,4.0,6.2,8.3,7.6,5.2,3.1,1.1,9.0},b[3][3]={1.2,2.8,5.4,6.3}.
//计算a,b两个矩阵之和并存于矩阵c中（c[i][j]=a[i][j]+b[i][j]），然后输出二维数组c的值。（20分）
static void test12()
{
	float a[3][3] = { 2.1,4.0,6.2,8.3,7.6,5.2,3.1,1.1,9.0 }, b[3][3] = { 1.2,2.8,5.4,6.3 }, c[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
			printf("%f\t", c[i][j]);
		}
		printf("\n");
	}
}

/////////////////////////////2012年真题//////////////////////////////
//1.有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13……编写C语言程序求出该数列前20项和（14分）
static void test21()
{
	int mol = 2, deno = 1;
	float sum = 0;
	for (int i = 0; i < 20; i++)
	{
		sum += (float)mol / deno;
		int temp = mol;
		mol += deno;
		deno = temp;
	}
	printf("sum=%f\n", sum);
}

//2.输出所有的“水仙花数”，所谓的“水仙花数”是指一个三位数，其各位数字立方和等于该数本身。（12分）
static void test22()
{
	int x1, x2, x3;
	for (int i = 100; i < 1000; i++)
	{
		x1 = i / 100;
		x2 = i / 10 % 10;
		x3 = i % 10;
		if (i == x1 * x1 * x1 + x2 * x2 * x2 + x3 * x3 * x3)
		{
			printf("%d  ", i);
		}
	}
	printf("\n");
}
//3.从键盘任意输入10个数，用起泡法对10个整数排序（从小到大），要求：将10个整数存放在数组中（14分）
static void test23()
{
	int a[10] = { 0 };
	printf("intput 10 numbers to a array,one by one and press enter.\n");
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d  ", a[i]);
	}
	printf("\n");
}

//4.从键盘输入一个正整数，要求：（1）求出他是几位数；（2）分别打印出每一位数字。（12分）
static void test24()
{
	printf("input a integer number.\n");
	int x, count = 0;
	int a[20] = { 0 };
	scanf("%d", &x);
	if (x <= 0)
	{
		printf("input error!\n");
	}
	while (x != 0)
	{
		a[count] = x % 10;
		x /= 10;
		count++;
	}
	printf("%d位数:", count);
	count--;
	while (count >= 0)
	{
		printf("%d ", a[count--]);
	}



}

/////////////////////////////2013年真题//////////////////////////////
//1.写一个函数，使给定的一个3x3的二维整型数组转置，即行列互换。要求：该数组的各元素值在程序运行时由键盘输入，主函数调用该函数之后实现行列互换，并在屏幕上显示转换
//前后的数组，且该函数不采用指针的方法实现。
static void reverse(int a[3][3])
{
	int b[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			b[j][i] = a[i][j];
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			a[i][j] = b[i][j];
			printf("%d", a[i][j]);
		}
	}
}
static void test31()
{
	int a[3][3] = { 0 };
	printf("输入一个3x3的二维矩阵，一个一个输入:");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	reverse(a);
}
//2.用选择法对10个整数由小到大排列，要求：将这10个整数存放在数组中，并在程序运行时由键盘任意输入。
static void test32()
{
	printf("请输入10个整数，一个一个输入");
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", a[i]);
	}
	int index = 0;
	for (int i = 0; i < 9; i++)
	{
		index = i;
		for (int j = i + 1; j < 10; j++)
		{
			if (a[j] < a[index])
			{
				index = j;
			}
		}
		if (i == index)
		{
			continue;
		}
		else
		{
			int temp = a[i];
			a[i] = a[index];
			a[index] = temp;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
}

//3.编程序求解下列猴子吃桃问题。猴子第1天摘下若干桃子，当即吃了一半，还不过瘾，又多吃了一个。第2天早上又将剩下的桃子吃掉一半，又多吃了一个。以后每天
//早上都吃了前一天剩下的一半零一个。到第10天早上想再吃时，就只剩下一个桃子了。求第一天共摘多少个桃子。
static void test33()
{
	int x = 1;
	for (int i = 9; i > 0; i--)
	{
		x = (x + 1) * 2;
	}
	printf("第一天摘下%d个桃子\n", x);
}
static void test34()
{
	int x = 1534;
	for (int i = 1; i < 10; i++)
	{
		x = x / 2 - 1;
	}
	printf("剩下%d个桃子\n", x);
}

//4.输入3个字符串，按由小到大的顺序输出，要求函数调用，用指针的方法实现。
#define MAX_BUFF 1024
static void sortOutput(const char* a, const char* b, const char* c)
{
	const char* temp[3];
	temp[0] = a;
	temp[1] = b;
	temp[2] = c;
	int index = 0;
	//在字符指针数组中使用选择排序
	for (int i = 0; i < 3; i++)
	{
		index = i;
		for (int j = i + 1; j < 3; j++)
		{
			if (strcmp(temp[j], temp[index]) < 0)
			{
				index = j;
			}
		}
		if (index != i)
		{
			const char* p = temp[i];
			temp[i] = temp[index];
			temp[index] = p;
		}

	}
	for (int i = 0; i < 3; i++)
	{
		puts(temp[i]);
	}


}
static void test35()
{
	char a[MAX_BUFF], b[MAX_BUFF], c[MAX_BUFF];
	printf("输入三个字符串，以回车结束。\n");
	gets_s(a);
	gets_s(b);
	gets_s(c);
	printf("排序后的结果为：\n");
	sortOutput(a, b, c);
}

/////////////////////////////2014年真题//////////////////////////////
//1.马克思在《数学手稿》中提出如下问题：有30个人（包括男人，女人，小孩）在一家饭店吃饭共花50先令，其中每个男人花3先令，每个女人花2先令，
//每个小孩花1先令，问男人，女人，小孩各有多少人？用for循环语句编写完整的C程序进行求解，输出所有的可能的组合方式。
static void test41()
{
	int x, y, z;
	for (x = 0; x < 17; x++)//男人不超过17个
	{
		for (y = 0; y < 25; y++)
		{
			z = 30 - x - y;
			if (3 * x + 2 * y + z == 50)
			{
				printf("man:%2d woman:%2d kid:%2d\n", x, y, z);
			}
		}
	}

}
//2.用起泡法对数组中10个整数按照从小到大排序。要求：（1）10个整数从键盘输入，在主函数中给出；（2）排序功能用单独的函数实现；（3）在主函数中
//输出排序前后的数据列结果
static void sort(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}

static void test42()
{
	int a[10];
	printf("input ten number,one by one and press enter.\n");
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	//排序
	sort(a, 10);
	//输出排序后的数组
	printf("输出排序后的数组:\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}

}
//3.输入一个字符串（长度不超过100），判断其是否为回文。注：所谓回文字符是指从左到右读和从右到左读完全相同的字符串。编写完整的C程序实现以上功能
#define MAXSTR 101
static void test43()
{
	char a[MAXSTR] = { 0 };
	char b[MAXSTR] = { 0 };
	printf("input a string less than 100\n");
	scanf("%s", a);
	int len = strlen(a);
	int i;
	for (i = 0; i < len; i++)
	{
		b[i] = a[len - 1 - i];
	}
	b[i] = '\0';
	if (strcmp(a, b) == 0)
	{
		printf("%s是回文。\n", a);
	}
	else
	{
		printf("%s不是回文.\n", a);
	}

}
//4.利用公式 编写程序计算pai的近似值，当某一项的值小于10^-5时，认为达到精度要求。
static void test44()
{
	float pai = 0, x = 1, sum = x;
	float i = 1.0;
	while (x > pow(10, -5))
	{
		x *= (i / (2 * i + 1));
		i += 1;
		sum += x;
	}
	pai = sum * 2;
	printf("pai=%f\n", pai);
}

//5.用递归函数方法求n阶勒让德多项式的值，递归公式为：
//     =1                                       (n=0)
//pn(x)=x                                       (n=1)
//     =((2n-1)*x*pn-1(x)-(n-1)*pn-2(x))/n      (n>=1)
static float p(int n, float x)
{
	if (n == 0)
	{
		return 1;
	}
	if (n == 1)
	{
		return x;
	}
	return ((2 * n - 1) * x * p(n - 1, x) - (n - 1) * p(n - 2, x)) / n;
}
static void test45()
{
	int n;
	float x, pn_x;
	scanf("%d %f", &n, &x);
	pn_x = p(n, x);
	printf("Pn(x)=%f", pn_x);
}



/////////////////////////////2015年真题//////////////////////////////
//1.有2，4，6，8个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？请编程输出所有的这些三位数及他们的总个数。
static void test51()
{
	int a[4] = { 2,4,6,8 }; //也可以直接在for语句中第二个表达式加条件
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			for (int z = 0; z < 4; z++)
			{
				if (a[i] != a[j] && a[i] != a[z] && a[j] != a[z])
				{
					printf("%d", a[i] * 100 + a[j] * 10 + a[z]);
				}
			}
		}
	}
}
//2.用选择法对10个整数由小到大排序，要求：将10个整数存放在数组中，并在程序运行时由键盘任意输入，并在屏幕上输出排序前后的整数序列
static void test52()
{
	int a[10];
	printf("input ten number,one by one and press enter.\n");
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		int index = i;
		for (int j = i + 1; j < 10; j++)
		{
			if (a[index] > a[j])
			{
				index = j;
			}
		}
		if (index != i)
		{
			int temp = a[index];
			a[index] = a[i];
			a[i] = temp;
		}
	}
	printf("排序后的数组为：");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
}

//3.请输入星期几的第一个字母（大写字母）来判断一下是星期几，如果第一个字母一样，则继续判断第二个字母（小写），当按Y时结束判断。编写
//完整的C程序实现以上功能。
static void test53()
{
	char x;
	printf("请输入一个字母(大写)：\n");
	scanf("%c", &x);
	while (x != 'Y')
	{
		switch (x)
		{
		case 'M':
			printf("星期一.\n");
			break;
		case 'T':
			char t;
			printf("输入第二位小写字母:");
			scanf("%c", &t);
			if (t == 'u')
			{
				printf("星期二.\n");
			}
			else if (t == 'h')
			{
				printf("星期四.\n");
			}
			else
			{
				printf("输入错误，请重新开始输入.");
			}
			break;
		case 'W':
			printf("星期三.\n");
			break;
		case 'F':
			printf("星期五.\n");
			break;
		case 'S':
			char t;
			printf("输入第二位小写字母:");
			scanf("%c", &t);
			if (t == 'a')
			{
				printf("星期六.\n");
			}
			else if (t == 'u')
			{
				printf("星期天.\n");
			}
			else
			{
				printf("输入错误，请重新开始输入.");
			}
			break;
		default:
			printf("输入错误，请重新开始输入.");
			break;
		case 'Y':
			break;
		}
		scanf("%c", &x);
	}
}
//4.求方程ax^2+bx+c=0的根，用三个函数分别求当b^2-4ac大于0，等于0和小于0时的根并输出结果。从主函数输入a,b,c的值
static void f1(float a, float b, float c)
{
	float det = b * b - 4 * a * c;
	float X1 = (-b + sqrt(det)) / (2 * a);
	float X2 = (-b - sqrt(det)) / (2 * a);
	printf("X1=%f,X2=%f", X1, X2);
}
static void f2(float a, float b, float c)
{
	float det = b * b - 4 * a * c;
	float X = (-b + sqrt(det)) / (2 * a);
	printf("X1=X2=%f", X);
}
static void f3(float a, float b, float c)
{
	float det = sqrt(abs(b * b - 4 * a * c));
	printf("此方程没有实数根.");
	printf("X1=%f+%fi,X2=%f-%fi", -b / (2 * a), det / (2 * a), -b / (2 * a), det / (2 * a));
}
static void test54()
{
	float det, x1, x2;
	float a, b, c;
	printf("请依次输入a,b,c的值，并用空格分开:\n");
	scanf("%f %f %f", &a, &b, &c);
	det = b * b - 4 * a * c;
	if (det > 0)
	{
		f1(a, b, c);
	}
	else if (det == 0)
	{
		f2(a, b, c);
	}
	else
	{
		f3(a, b, c);
	}

}

//5.编写程序，使输入的一个字符串反序存放，在主函数中输入和输出字符串。要求：将输入的字符串存放在字符数组str[100]中；使输入的字符串按反序
//存放的功能用一个函数（函数名为：inverse）实现；程序中需要适当添加注释。
static void inverse(char str[])
{
	int len = strlen(str);
	//首尾倒转，用temp传递 最后的空字符还在原位
	for (int i = 0; i < len / 2; i++)
	{
		char temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
	}
}

static void test55()
{
	printf("请输入一个字符串.长度不超过99\n");
	char str[100];
	scanf("%s", str);
	//反转字符串函数
	inverse(str);
	printf("反转后的字符串为：\n");
	//输入字符串
	printf("%s", str);
}
/////////////////////////////2016年真题//////////////////////////////
//1.求数列1-1/3+1/5-1/7+1/9-……前20项之和。要求保留小数点后两位有效数字。
static void test61()
{
	float x, sum = 0;
	int flag = 1;
	for (int i = 0; i < 20; i++)
	{
		x = flag * (1 / (2 * (float)i + 1));
		sum += x;
		flag *= -1;
	}
	printf("sum=%.2f\n", sum);
}
//2.输入一个长度不超过100的字符串，采用起泡法将字符串中包含的各个字符按照ASCII值从小到大进行排序，并将排序后的结果输出。
//要求：字符串存放在数组中，字符串的输入和输出在主函数main中实现，“起泡法”排序在自定义函数sort中实现。
#define MAX_LEN 100
static void sortQiPao(char a[], int len)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				char str = a[j];
				a[j] = a[j + 1];
				a[j + 1] = str;
			}
		}
	}
}
static void test62()
{
	char a[101] = { 0 };
	printf("输入一个长度不超过100的字符串:\n");
	gets_s(a);
	/*排序函数*/
	int len = strlen(a);
	sortQiPao(a, len);
	/*输出*/
	puts(a);
}
//3.输入一个长度不超过100的字符串，然后输入一个字符，通过程序将字符串中该字符删除，并输出最后的字符串。
//要求：字符串存放在数组中，字符串的输入和输出在主函数main中实现，删除字符在自定义函数deletechar中实现。
static void deletechar(char a[], int len, char str)
{
	for (int i = 0, j = 0; i < len + 1; i++) /*空字符也要赋值进去*/
	{
		a[j] = a[i];
		if (a[i] == str)
			continue;
		j++;
	}
}
static void test63()
{
	printf("输入一个不超过100个字符的字符串");
	char a[MAX_LEN] = { 0 };
	gets_s(a);
	printf("输入要删除的字符:");
	char str;
	scanf("%c", str);
	deletechar(a, strlen(a), str);
	printf("删除%c后的字符串为:", str);
	puts(a);

}

int main()
{
	//test2();
	//test21();
	//test22();
	//test23();
	//test24();
	//test32();
	//test34();
	//test35();
	//test41();
	//test42();
	//test43();
	//test44();
	test45();
	return 0;
}