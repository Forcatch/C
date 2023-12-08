#include<stdio.h>
#include<stdlib.h>
#include<string>
//编写一个程序，从标准输入读取几行输入。每行输入都要打印到标准输出上，前面要加上行号。在编写这个程序时要试图让程序能够处理的输入行的长度没有限制。
#define MAX_CHAR 1024
#define MAX_LINECOUNT 10
static void test1()
{
	char a[MAX_CHAR];
	char ch;
	int i = 0, linecount = 1;
	//采用getchar获取字符，因为要把换行符也输入，gets会去掉换行符且有长度限制 EOF是CTRL+Z
	while ((a[i++] = ch = getchar()) != EOF);
	char* p = a;
	printf("line %d: ", linecount++);
	while (*p != EOF)
	{
		printf("%c", *p);
		if (*p == '\n')
			printf("line %d: ", linecount++);
		p++;
	}

}
//编写一个程序，从标准输入读取一些字符，并把他们写到标准输出上，它同时应该计算checksum值，并写在字符的后面。
//checksum（检验和）用一个sunged char 类型的变量进行计算，它初始为 - 1.当每个字符从标准输入读取时，它的值就被加到checksum中。
//如果checksum变量产出了溢出，那么这些溢出就会被忽略。当所有的字符均被写入后，程序以十进制整数的形式打印出checksum的值，它有可能是负值。
//注意在checksum后面要添加一个换行符。在使用ASSII码的计算机中，在包含“Hello world！”这几个词并以换行符结尾的文件上运行这个程序，应该产生以下列输出：
//Hello world！
//102

//编写一个程序，一行行地读取输入行，直至到达文件尾。算出每行输入行的长度，然后把最长的那行打印出来。为了简单起见，你可以假定所有的输入行均不超过1000个字符。
static void test3()
{
	char* a[MAX_LINECOUNT], line[MAX_CHAR];//不能用指针来接受，
	int i = 0, max = 0, flag = 0;
	while (gets_s(line) != NULL)
		a[i++] = line;
	max = strlen(a[0]);
	while (i--)
		if (max < strlen(a[i]))
		{
			max = strlen(a[i]);
			flag = i;
		}
	printf("maxline:%d %s", flag + 1, a[flag]);

}
int main123()
{
	//test1();
	test3();

	return EXIT_SUCCESS;
}