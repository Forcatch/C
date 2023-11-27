#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string>

//1.编写一个程序计算一个字符串的长度
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

//2.编写一个程序，用12个月份的英文名称初始化一个字符串指针数组，当键盘输入整数为1到12时，显示相应的月份名
//，键入其他整数时显示错误信息。
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


//3.编一程序，将字串computer赋给一个字符数组，然后从第一个字母开始间隔地输出该串。请用指针完成。
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

//4.编一程序，将字符串中第m个字符开始的全部字符复制成另一个字符串。要求主函数中输入字符串及m的值并输出复制结果，
//在被调函数中完成复制。

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

//5.设有一数列，包含10个数，已按升序排列好。现要求编一程序，它能够把从指定位置开始的n个数按逆序重新排列并输出新的
//完整数列。进行逆序处理时要求使用指针方法。试编程。（例如：原数列为2，4，6，8，10，12，14，16，18，20，若要求把
//第4个数开始的5个数按逆序重新排列，则得到新数列为2，4，6，16，14，12，10，8，18，20）

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

//6.通过指针数组p和一维数组a构成一个3x2的二维矩阵，并为a数组赋初值2，4，6，8，……。要求先按行的顺序输出此“二维数组”，
//然后再按列的顺序输出它。
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

	printf("按行输出：\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d ", a[i][j]);
		}
	}
	printf("按列输出：\n");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", a[j][i]);
		}
	}

	system("pause");
}

//7.编写一个函数，输入n为偶数时，调用函数求1/2+1/4+……+1/n，当输入n为奇数时，调用函数1/1+1/3+……+1/n（利用指针函数）
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

//8.编写一程序，从键盘输入10个数存入数组data[10]中，同时设置一个指针变量p指向数data，然后通过指针变量p对数组按照从小到
//大的顺序排序，最后输出其排序效果。
static void test8()
{
	int data[10] = { 0 },*p;
	p = data;
	printf("input ten numbers:\n");
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &data[i]);
	}
	//感觉不是写的很好
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

//9.编一程序，从一个3行4列的二维数组中找出最大数所在的行和列，并将最大值及所在行列值打印出来。要求将查找和打印的功能编
//一个函数，二维数组的输入在主函数中进行，并将二维数组通过指针参数传递的方式由主函数传递到子函数中。

void findMax(int a[3][4],int n)
{
	int max = a[0][0], maxr = 0, maxc = 0;
	//int x = sizeof(a) / sizeof(int) / 4;   //这里a已经退化成了一个指针，sizeof求的长度是指针的长度
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
//10.编一程序，首先将一个包含10个函数的数组按照升序排列，然后将从一指定位置m开始的n个数按照逆序重新排列，并将新生成的
//相互组输出。要求使用指针控制方法实现上述功能

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

//11.编一程序，在主函数中输入10个数并保存到数组，同时编写一被调用函数funct,函数funct有两个形式参数(其中一个用于接受数组，
//另一个表示该数组的元素个数)，funct功能是找出该数组中的最大值的位置并将该最大值的地址作为函数funct的返回值到主函数中。
//在主函数中打印出该数组的最大值
int* funct(int a[], int n)
{
	int max = a[0], *maxflag=a ;
	//int x = sizeof(a) / sizeof(int) / 4;   //这里a已经退化成了一个指针，sizeof求的长度是指针的长度
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


//12.编一程序，设置一个排序函数sort,该函数将数组按照从小到大的顺序进行排序，其中有两个形式参数，一个为指向数组的指针p，
//另一个为数组的元素个数n。在主函数main()中要求从键盘输入10个数存入数组data[10]中，同时要求调用函数sort对data进行排序，
//并在main()中输出最终的排序结果

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