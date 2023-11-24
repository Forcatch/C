#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string>
#include<math.h>

//1.编写程序，求两个整数的最大公约数
void test01()
{
	printf("请输入两个数：\n");
	int a = 0, b = 0;
	scanf("%d%d",&a,&b);
	//保持a>=b
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
	printf("最大公约数为：%d\n", gongyueshu);
	system("pause");
}

//2.把输入的整数（最多不超过5位）按输入顺序的反方向输出，例如，输入数是12345，要求输出结果是54321，编程实现此功能
void test02()
{
	//不支持负数，不支持分数，支持0,不支持超过5位数
	printf("请输入不超过五位的整数：");
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
		printf("这是一个五位数，%d%d%d%d%d", n5, n4, n3, n2, n1);
	}
	else if(n2)
	{
		printf("这是一个四位数，%d%d%d%d", n5, n4, n3, n2);
	}
	else if (n3)
	{
		printf("这是一个三位数，%d%d%d", n5, n4, n3);
	}
	else if (n2)
	{
		printf("这是一个两位数，%d%d", n5, n4);
	}
	else 
	{
		printf("这是一个一位数，%d", n5);
	}

	system("pause");
}

//3.中国古代数学家张丘建提出的“百鸡问题”：一只大公鸡值五个钱，一只母鸡值三个钱，三个小鸡值一个钱，现有100钱，要买
//100只鸡，是否可以？若可以，给出一个解，要求三种鸡都有。请写出求解该问题的程序
void test03()
{
	int x = 0, y = 0, z = 0;
	for (x=0; x <=20; x++)
	{
		for (y=0; y <= 34; y++)
		{
			for (  z=0; z <= 100; z++)
			{
				if (x + y + z == 100 && 5 * x + 3 * y + 1.0/3*z == 100 && z % 3 == 0) //注意不能写1/3 C语言整数除法结果也是为整数
				{
					printf("大公鸡%d只，母鸡%d只，小鸡%d只\n", x, y, z);
				}
			}
		}
	}
	system("pause");

}

//4.求100~200间的全部素数。
void test04()
{
	int a = 101;
	for (  ; a <= 200; a+=2)
	{
		int tag = 0;
		for (int i = 2; i <= sqrt(a); i++) //优化方向 ：1.素数必不为偶数，2.非素数的某个因子必小于该数的平方根
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

//5.整元换零钱问题。把1元兑换成1分，2分，5分的硬币，共有多少种不同的换法，请编写求解此问题的程序
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
					printf("1分%d个，2分%d个，5分%d个\n", x, y, z);
				}
			}
		}
	}

	system("pause");
}

//6.有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13，……，编写程序求这个数列的前20列之和。 //斐波那契数列
void test06()
{
	float sum=0.0;
	float den=1, mol = 2;          //这里一定要用float,用int 会出错
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

//7.编写程序，利用公式e=1+1/1！+1/2！+1/3！+……+1/n！求出e的近似值，其中n的值由用户输入（用于控制精准度）。
void test07()
{
	printf("请输入n的值：");
	int n = 0;
	scanf("%d",&n);
	float sum = 0;
	float temp = 1;                 //乘积是初始值设为1，inf表示infinite无穷大
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

//8.一个数如果恰好等于它的因子之和（除自身外），则称该数为完全数，例如：6=1+2+3，6就是完全数，请编写一程序，求出1000
//以内的整数中的所有完全数。其中1000由用户输入。
void test08()
{
	printf("请输入一个数：");
	int n = 0;
	scanf("%d", &n);
	int sum = 0;
	printf("完全数：");
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

//9.编一程序，将2000年到3000年中所有闰年年份输出并统计出闰年的总年数，要求每10个闰年放在一行输出。
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

//10.请编写一程序，打印出九九乘法口诀表（例：1*1=1）
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

//11.请编写一程序，将所有“水仙花数”打印出来，并打印出其总数。“水仙花数”是一个其各位数的立方和等于该整数的三位数。
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

//12.编写一程序，求1-3+5-7+……-99+101的值。
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

//13.编写程序，计算1！+2！+3！+……+n!的值，其中n的值由用户输入。
void test13()
{
	printf("请输入n的值：");
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

//14.求sn=a+aa+aaa+aaaa+……+aaa……aa的值，其中a是一个数字，例如：2+22+222+2222+22222（此时n=5）.n和a的值由键盘输入，请
//编程实现以上过程。
void test14()
{
	printf("请输入n和a的值：a=");
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

//15.编写程序，用迭代法求x=sqrt(a)的近似根。求平方根的迭代公式为：Xn+1=(Xn+a/Xn)/2。要求前后两次求出的x的差的绝对值小于0.00001
void test15()
{
	printf("输入a的值：");
	float a = 0;
	scanf("%f", &a);
	printf("sqrt(%f)=%f\n", a, sqrt(a));

	printf("下面使用迭代公式，输入迭代的次数n：");
	int n = 0;
	scanf("%d", &n);
	float x =1;
	for (int i = 0; i < n; i++)
	{
		x = (x + a / x) / 2.0;
	}
	printf("迭代值x=%f", x);
}

void test15A()
{
	float x = 1, x1;
	float a;
	printf("请输入一个整数：");
	scanf("%f", &a);
	do
	{
		x = 1.0 / 2 * (x + a / x);
		x1 = 1.0 / 2 * (x + a / x);
	} while (fabs(x - x1) > 1e-5);
	printf("%5.2f的平方根=%8.5f\n", a, x);
}
//16.一个球从100米高度自由落下，每次落地后又反弹回原来高度的一半，再落下，求它在第10次落地时共经过多少米？第10次反弹多高？
//编写程序求解该问题。
void test16()
{
	float h = 100;
	float sum = h;
	for (int i = 2; i <= 10; i++)  //第一次落地为h，从第二次落地开始
	{
		h = h / 2.0;  //落地后能弹起来的高度
		sum += h*2 ;
	}
	printf("共经过%f米,第十次反弹%f米", sum,h/2);  //问的是第十次落地后反弹多高

	system("pause");
}

//17.若有如下公式：pai^2/6=1/1^2+1/2^2+……+1/n^2，试根据上述公式编程计算pai的近似值（精确到10^-6）.
void test17()
{
	printf("输入n的值：");
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