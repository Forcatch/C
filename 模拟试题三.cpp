#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//1.��дһ�������������������֣���ʵ�ֽ�����������ֵ��
static void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

//2.��һ����������Ҫ��һ�������Ǽ�λ�������������ӡ����λ���֡�   ps:������C���Ե�������������
static void test2()
{
	int x, n = 0, x_divd = -1;
	printf("input a number :");
	scanf("%d", &x);
	while (x_divd != 0)
	{
		x_divd = x / 10;
		printf("%d", x - x_divd * 10);
		x = x_divd;
		n++;
	}
	printf(" %dλ��\n", n);

}

//3.��b�ַ������Ƶ�a�У���д����ʵ�ִ˹��ܡ�
static char* my_strcpy(char* a, const char* b)   //����b����Ŀ��ַ�Ҳ�Ḵ�ƹ�ȥ
{
	char* eos = a;
	while (*b)
	{
		*eos++ = *b++;
	}
	*eos = 0;
	return a;
}
static void test3()
{
	char a[] = "hello  ";
	char b[] = "world";
	my_strcpy(a, b);
	printf("%s", a);
}


int main003()
{
	//test2();
	//test3();
	return 0;
}