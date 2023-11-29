#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string>

//1.��дһ�������ɼ�������һ���ļ�����Ȼ��ѴӼ���������ַ����δ�ŵ����ļ��У��á�#����Ϊ��������ı�־
static void test1()
{
	char fileName[100] = { 0 };
	printf("input a filename: ");
	gets_s(fileName);
	FILE* file;
	file = fopen(fileName, "w+");  //Ĭ�����ļ���Ŀ¼.��ʾ��·�� ..��ʾ�ϼ�·��
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
//2.��дһ�����򣬽���һ��abc�ı��ļ���������д�롰this is a test���ַ�����Ȼ����ʾ���ļ�������
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

//3.��дһ���򣬲���ָ���ı��ļ���ĳ�����ʳ��ֵ��кż����е�����
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
		printf("�ļ��򿪴���.\n");
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


//4.��дһ����fcat.c������������ָ���Ķ���ı��ļ����ӳ�һ���ļ�
//���磺fcat file1 file2 file3 
//�����ı��ļ�file1��file2��file3���ӳ�һ���ļ������Ӻ���ļ���Ϊfile1��
static void test4(int argc, char* argv[])
{
	char fileName[10] = { 0 };
	FILE* fp1, * fp2, * fp3;

	fp1 = fopen(argv[1], "a+");
	fp2 = fopen(argv[2], "r+");
	fp3 = fopen(argv[3], "r+");

	if (!fp1 || !fp2 || !fp3)
	{
		printf("���ļ�����");
		exit(1);
	}
	char buff[LINE_LENGTH] = { 0 };
	while (fgets(buff, LINE_LENGTH, fp2))
	{
		if (ferror(fp2))
		{
			printf("��ȡ%s�ļ�����", argv[2]);
		}
		fputs(buff, fp1);
	}
	while (fgets(buff, LINE_LENGTH, fp3))
	{
		if (ferror(fp3))
		{
			printf("��ȡ%s�ļ�����", argv[3]);
		}
		fputs(buff, fp1);
	}

	fclose(fp3);
	fclose(fp2);
	fclose(fp1);


}


//5.��дһ�����򣬽�ָ�����ı��ļ���ĳ�������滻����һ������
static void test5()
{
	char fileName[100] = { 0 };
	printf("������һ���ļ�����");
	gets_s(fileName);
	FILE* fp;
	fp = fopen(fileName, "r+");
	if (fp == NULL)
	{
		printf("���ļ�ʧ��");
		return;
	}

	char* lineData[100] = { 0 };
	char a = 0, ch = 0;
	printf("������Ҫ�滻ǰ�ַ�a���滻���ch:");
	scanf("%c %c", &a, &ch);
	char buff[1024];

	int lineCount = 0;

	while (fgets(buff, LINE_LENGTH, fp))
	{
		if (ferror(fp))
		{
			printf("��ȡ%s�ļ�����", fileName);
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
