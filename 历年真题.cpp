#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string>
#include<math.h>
/////////////////////////////2011������//////////////////////////////
//1.��д������������8��ʵ����������a�У�Ҫ������������������С������20�֣�
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

//2.��д���򣺶���֪��ά���������ľ���a[3][3]={2.1,4.0,6.2,8.3,7.6,5.2,3.1,1.1,9.0},b[3][3]={1.2,2.8,5.4,6.3}.
//����a,b��������֮�Ͳ����ھ���c�У�c[i][j]=a[i][j]+b[i][j]����Ȼ�������ά����c��ֵ����20�֣�
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

/////////////////////////////2012������//////////////////////////////
//1.��һ�������У�2/1��3/2��5/3��8/5��13/8��21/13������дC���Գ������������ǰ20��ͣ�14�֣�
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

//2.������еġ�ˮ�ɻ���������ν�ġ�ˮ�ɻ�������ָһ����λ�������λ���������͵��ڸ���������12�֣�
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
//3.�Ӽ�����������10�����������ݷ���10���������򣨴�С���󣩣�Ҫ�󣺽�10����������������У�14�֣�
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

//4.�Ӽ�������һ����������Ҫ�󣺣�1��������Ǽ�λ������2���ֱ��ӡ��ÿһλ���֡���12�֣�
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
	printf("%dλ��:", count);
	count--;
	while (count >= 0)
	{
		printf("%d ", a[count--]);
	}



}

/////////////////////////////2013������//////////////////////////////
//1.дһ��������ʹ������һ��3x3�Ķ�ά��������ת�ã������л�����Ҫ�󣺸�����ĸ�Ԫ��ֵ�ڳ�������ʱ�ɼ������룬���������øú���֮��ʵ�����л�����������Ļ����ʾת��
//ǰ������飬�Ҹú���������ָ��ķ���ʵ�֡�
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
	printf("����һ��3x3�Ķ�ά����һ��һ������:");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	reverse(a);
}
//2.��ѡ�񷨶�10��������С�������У�Ҫ�󣺽���10����������������У����ڳ�������ʱ�ɼ����������롣
static void test32()
{
	printf("������10��������һ��һ������");
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

//3.�����������к��ӳ������⡣���ӵ�1��ժ���������ӣ���������һ�룬������񫣬�ֶ����һ������2�������ֽ�ʣ�µ����ӳԵ�һ�룬�ֶ����һ�����Ժ�ÿ��
//���϶�����ǰһ��ʣ�µ�һ����һ��������10���������ٳ�ʱ����ֻʣ��һ�������ˡ����һ�칲ժ���ٸ����ӡ�
static void test33()
{
	int x = 1;
	for (int i = 9; i > 0; i--)
	{
		x = (x + 1) * 2;
	}
	printf("��һ��ժ��%d������\n", x);
}
static void test34()
{
	int x = 1534;
	for (int i = 1; i < 10; i++)
	{
		x = x / 2 - 1;
	}
	printf("ʣ��%d������\n", x);
}

//4.����3���ַ���������С�����˳�������Ҫ�������ã���ָ��ķ���ʵ�֡�
#define MAX_BUFF 1024
static void sortOutput(const char* a, const char* b, const char* c)
{
	const char* temp[3];
	temp[0] = a;
	temp[1] = b;
	temp[2] = c;
	int index = 0;
	//���ַ�ָ��������ʹ��ѡ������
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
	printf("���������ַ������Իس�������\n");
	gets_s(a);
	gets_s(b);
	gets_s(c);
	printf("�����Ľ��Ϊ��\n");
	sortOutput(a, b, c);
}

/////////////////////////////2014������//////////////////////////////
//1.���˼�ڡ���ѧ�ָ塷������������⣺��30���ˣ��������ˣ�Ů�ˣ�С������һ�ҷ���Է�����50�������ÿ�����˻�3���ÿ��Ů�˻�2���
//ÿ��С����1��������ˣ�Ů�ˣ�С�����ж����ˣ���forѭ������д������C���������⣬������еĿ��ܵ���Ϸ�ʽ��
static void test41()
{
	int x, y, z;
	for (x = 0; x < 17; x++)//���˲�����17��
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
//2.�����ݷ���������10���������մ�С��������Ҫ�󣺣�1��10�������Ӽ������룬���������и�������2���������õ����ĺ���ʵ�֣���3������������
//�������ǰ��������н��
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
	//����
	sort(a, 10);
	//�������������
	printf("�������������:\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}

}
//3.����һ���ַ��������Ȳ�����100�����ж����Ƿ�Ϊ���ġ�ע����ν�����ַ���ָ�����Ҷ��ʹ��ҵ������ȫ��ͬ���ַ�������д������C����ʵ�����Ϲ���
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
		printf("%s�ǻ��ġ�\n", a);
	}
	else
	{
		printf("%s���ǻ���.\n", a);
	}

}
//4.���ù�ʽ ��д�������pai�Ľ���ֵ����ĳһ���ֵС��10^-5ʱ����Ϊ�ﵽ����Ҫ��
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

//5.�õݹ麯��������n�����õ¶���ʽ��ֵ���ݹ鹫ʽΪ��
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



/////////////////////////////2015������//////////////////////////////
//1.��2��4��6��8�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�����������е���Щ��λ�������ǵ��ܸ�����
static void test51()
{
	int a[4] = { 2,4,6,8 }; //Ҳ����ֱ����for����еڶ������ʽ������
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
//2.��ѡ�񷨶�10��������С��������Ҫ�󣺽�10����������������У����ڳ�������ʱ�ɼ����������룬������Ļ���������ǰ�����������
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
	printf("����������Ϊ��");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
}

//3.���������ڼ��ĵ�һ����ĸ����д��ĸ�����ж�һ�������ڼ��������һ����ĸһ����������жϵڶ�����ĸ��Сд��������Yʱ�����жϡ���д
//������C����ʵ�����Ϲ��ܡ�
static void test53()
{
	char x;
	printf("������һ����ĸ(��д)��\n");
	scanf("%c", &x);
	while (x != 'Y')
	{
		switch (x)
		{
		case 'M':
			printf("����һ.\n");
			break;
		case 'T':
			char t;
			printf("����ڶ�λСд��ĸ:");
			scanf("%c", &t);
			if (t == 'u')
			{
				printf("���ڶ�.\n");
			}
			else if (t == 'h')
			{
				printf("������.\n");
			}
			else
			{
				printf("������������¿�ʼ����.");
			}
			break;
		case 'W':
			printf("������.\n");
			break;
		case 'F':
			printf("������.\n");
			break;
		case 'S':
			char t;
			printf("����ڶ�λСд��ĸ:");
			scanf("%c", &t);
			if (t == 'a')
			{
				printf("������.\n");
			}
			else if (t == 'u')
			{
				printf("������.\n");
			}
			else
			{
				printf("������������¿�ʼ����.");
			}
			break;
		default:
			printf("������������¿�ʼ����.");
			break;
		case 'Y':
			break;
		}
		scanf("%c", &x);
	}
}
//4.�󷽳�ax^2+bx+c=0�ĸ��������������ֱ���b^2-4ac����0������0��С��0ʱ�ĸ�����������������������a,b,c��ֵ
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
	printf("�˷���û��ʵ����.");
	printf("X1=%f+%fi,X2=%f-%fi", -b / (2 * a), det / (2 * a), -b / (2 * a), det / (2 * a));
}
static void test54()
{
	float det, x1, x2;
	float a, b, c;
	printf("����������a,b,c��ֵ�����ÿո�ֿ�:\n");
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

//5.��д����ʹ�����һ���ַ��������ţ��������������������ַ�����Ҫ�󣺽�������ַ���������ַ�����str[100]�У�ʹ������ַ���������
//��ŵĹ�����һ��������������Ϊ��inverse��ʵ�֣���������Ҫ�ʵ����ע�͡�
static void inverse(char str[])
{
	int len = strlen(str);
	//��β��ת����temp���� ���Ŀ��ַ�����ԭλ
	for (int i = 0; i < len / 2; i++)
	{
		char temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
	}
}

static void test55()
{
	printf("������һ���ַ���.���Ȳ�����99\n");
	char str[100];
	scanf("%s", str);
	//��ת�ַ�������
	inverse(str);
	printf("��ת����ַ���Ϊ��\n");
	//�����ַ���
	printf("%s", str);
}
/////////////////////////////2016������//////////////////////////////
//1.������1-1/3+1/5-1/7+1/9-����ǰ20��֮�͡�Ҫ����С�������λ��Ч���֡�
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
//2.����һ�����Ȳ�����100���ַ������������ݷ����ַ����а����ĸ����ַ�����ASCIIֵ��С����������򣬲��������Ľ�������
//Ҫ���ַ�������������У��ַ���������������������main��ʵ�֣������ݷ����������Զ��庯��sort��ʵ�֡�
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
	printf("����һ�����Ȳ�����100���ַ���:\n");
	gets_s(a);
	/*������*/
	int len = strlen(a);
	sortQiPao(a, len);
	/*���*/
	puts(a);
}
//3.����һ�����Ȳ�����100���ַ�����Ȼ������һ���ַ���ͨ�������ַ����и��ַ�ɾ��������������ַ�����
//Ҫ���ַ�������������У��ַ���������������������main��ʵ�֣�ɾ���ַ����Զ��庯��deletechar��ʵ�֡�
static void deletechar(char a[], int len, char str)
{
	for (int i = 0, j = 0; i < len + 1; i++) /*���ַ�ҲҪ��ֵ��ȥ*/
	{
		a[j] = a[i];
		if (a[i] == str)
			continue;
		j++;
	}
}
static void test63()
{
	printf("����һ��������100���ַ����ַ���");
	char a[MAX_LEN] = { 0 };
	gets_s(a);
	printf("����Ҫɾ�����ַ�:");
	char str;
	scanf("%c", str);
	deletechar(a, strlen(a), str);
	printf("ɾ��%c����ַ���Ϊ:", str);
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