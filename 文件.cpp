#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string>

//1.编写一个程序，由键盘输入一个文件名，然后把从键盘输入的字符依次存放到该文件中，用“#”作为结束输入的标志
static void test1()
{
	char fileName[100] = { 0 };
	printf("input a filename: ");
	gets_s(fileName);
	FILE* file;
	file = fopen(fileName, "w+");  //默认是文件夹目录.表示本路径 ..表示上级路径
	if (file == NULL)
	{
		return;
	}
	char ch;
	printf("input data: ");
	do
	{
		//ch = getchar();
		scanf("%c", &ch);
		fputc(ch, file);

	} while (ch != '#');
	fclose(file);

}
//2.编写一个程序，建立一个abc文本文件，向其中写入“this is a test”字符串，然后显示该文件的内容
static void test2()
{
	char fileName[10] = ".\\abc.txt";
	FILE* fp;
	fp = fopen(fileName, "w+");
	if (fp == NULL)
	{
		return;
	}
	const char* a = "this is a test";
	fputs(a, fp);
	rewind(fp);
	char ch[20] = { 0 };
	fgets(ch, 20, fp);
	printf("%s", ch);

	fclose(fp);

	system("pause");
}

//3.编写一程序，查找指定文本文件中某个单词出现的行号及该行的内容
#define LINE_LENGTH 1000
static void test3()
{
	FILE* fp;
	char line[LINE_LENGTH];
	char ch = 't';
	int linecount = 0;

	fp = fopen(".\\findline.txt", "r");
	if (fp == NULL)
	{
		printf("文件打开错误.\n");
		return;
	}
	while (fgets(line, LINE_LENGTH, fp))
	{
		linecount++;
		if (strchr(line, ch) != NULL)
		{
			printf("line %d : %s", linecount, line);
		}
	}

	fclose(fp);


	system("pause");
}


//4.编写一程序fcat.c，把命令行中指定的多个文本文件链接成一个文件
//例如：fcat file1 file2 file3 
//它把文本文件file1，file2和file3连接成一个文件，连接后的文件名为file1。
static void test4(int argc, char* argv[])
{
	char fileName[10] = { 0 };
	FILE* fp1, * fp2, * fp3;

	fp1 = fopen(argv[1], "a+");
	fp2 = fopen(argv[2], "r+");
	fp3 = fopen(argv[3], "r+");

	if (!fp1 || !fp2 || !fp3)
	{
		printf("打开文件错误");
		exit(1);
	}
	char buff[LINE_LENGTH] = { 0 };
	while (fgets(buff, LINE_LENGTH, fp2))
	{
		if (ferror(fp2))
		{
			printf("读取%s文件有误", argv[2]);
		}
		fputs(buff, fp1);
	}
	while (fgets(buff, LINE_LENGTH, fp3))
	{
		if (ferror(fp3))
		{
			printf("读取%s文件有误", argv[3]);
		}
		fputs(buff, fp1);
	}

	fclose(fp3);
	fclose(fp2);
	fclose(fp1);


}


//5.编写一个程序，将指定的文本文件中某个单词替换成另一个单词
static void test5()
{
	char fileName[100] = { 0 };
	printf("请输入一个文件名：");
	gets_s(fileName);
	FILE* fp;
	fp = fopen(fileName, "r+");
	if (fp == NULL)
	{
		printf("打开文件失败");
		return;
	}

	char* lineData[100] = { 0 };
	char a = 0, ch = 0;
	printf("请输入要替换前字符a和替换后的ch:");
	scanf("%c %c", &a, &ch);
	char buff[1024];

	int lineCount = 0;

	while (fgets(buff, LINE_LENGTH, fp))
	{
		if (ferror(fp))
		{
			printf("读取%s文件有误", fileName);
			break;
		}
		char* p = buff;
		while (*p)
		{
			if (*p == a)
				*p = ch;
			p++;
		}
		lineData[lineCount] = buff;
		lineCount++;
	}

	rewind(fp);
	for (int i = 0; i < lineCount; i++)
	{
		fputs(lineData[i], fp);
	}

	fclose(fp);



}







int main(int argc, char* argv[])
{
	//test1();
	//test2();
	//test3();
	//test4(argc, argv);
	test5();


	system("pause");
	return 0;
}
