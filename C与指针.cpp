#include<stdio.h>
#include<stdlib.h>
#include<string>
//��дһ�����򣬴ӱ�׼�����ȡ�������롣ÿ�����붼Ҫ��ӡ����׼����ϣ�ǰ��Ҫ�����кš��ڱ�д�������ʱҪ��ͼ�ó����ܹ�����������еĳ���û�����ơ�
#define MAX_CHAR 1024
#define MAX_LINECOUNT 10
static void test1()
{
	char a[MAX_CHAR];
	char ch;
	int i = 0, linecount = 1;
	//����getchar��ȡ�ַ�����ΪҪ�ѻ��з�Ҳ���룬gets��ȥ�����з����г������� EOF��CTRL+Z
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
//��дһ�����򣬴ӱ�׼�����ȡһЩ�ַ�����������д����׼����ϣ���ͬʱӦ�ü���checksumֵ����д���ַ��ĺ��档
//checksum������ͣ���һ��sunged char ���͵ı������м��㣬����ʼΪ - 1.��ÿ���ַ��ӱ�׼�����ȡʱ������ֵ�ͱ��ӵ�checksum�С�
//���checksum�����������������ô��Щ����ͻᱻ���ԡ������е��ַ�����д��󣬳�����ʮ������������ʽ��ӡ��checksum��ֵ�����п����Ǹ�ֵ��
//ע����checksum����Ҫ���һ�����з�����ʹ��ASSII��ļ�����У��ڰ�����Hello world�����⼸���ʲ��Ի��з���β���ļ��������������Ӧ�ò��������������
//Hello world��
//102

//��дһ������һ���еض�ȡ�����У�ֱ�������ļ�β�����ÿ�������еĳ��ȣ�Ȼ���������д�ӡ������Ϊ�˼����������Լٶ����е������о�������1000���ַ���
static void test3()
{
	char* a[MAX_LINECOUNT], line[MAX_CHAR];//������ָ�������ܣ�
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