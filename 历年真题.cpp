#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//2011年真题
//1.编写程序，输入任意8个实数存于数组a中，要求输出其中最大数和最小数。（20分）
static void test1()
{
	printf("input 8 nimber to a array ,one by one and press enter.\n");
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
static void test2()
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

int main()
{
	test2();

	return 0;
}