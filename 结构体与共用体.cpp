#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string>
struct  student
{
	int id;
	int mathmid;
	int mathend;
}*sp;
//1.�����ýṹ�����ͱ���һ����ʵ������һ��ѧ������ѧ���к���ĩ�ɼ���Ȼ����㲢�����ƽ���ɼ�
static void test1()
{
	struct student s1;
	int ave;
	scanf("%d %d", &s1.mathmid, &s1.mathend);
	printf("%d", (s1.mathend + s1.mathmid) / 2);
}

//2.������ָ��ṹ���ָ�����һ����ʵ����������ѧ����ѧ�ţ���ѧ���к���ĩ�ɼ���Ȼ�������ƽ���ɼ�������ɼ���
static void test2()
{
	struct student s[3];
	memset(s, 0, sizeof(s));
	for (int i = 0; i < 3; i++)
	{
		sp = &s[i];
		scanf("%d %d %d", sp->id, sp->mathmid, sp->mathend);
	}
	for (int i = 0; i < 3; i++)
	{
		printf("%d  %d  %d  %d\n", s[i].id, s[i].mathmid, s[i].mathend, (s[i].mathmid + s[i].mathend) / 2);
	}
}

typedef struct list
{
	int data;
	struct list* next;
}List;
//3.���̽���һ������ͷ���ĵ��������������е�����ͨ���������룬����������Ϊ-1ʱ����ʾ���������
//(����ͷ����data�򲻷����ݣ���յ�������ph->next=NULL).
static List* creatList()
{
	List* head, * p, * ph;
	head = (List*)malloc(sizeof(List));
	ph = (List*)malloc(sizeof(List));
	head->next = ph;
	int a;
	scanf("%d", &a);
	ph->data = a;
	while (a >= 0)
	{
		p = (List*)malloc(sizeof(List));
		scanf("%d", &a);
		p->data = a;
		ph->next = p;
		ph = p;
	}
	ph->next = NULL;
	return(head);
}

//4.��֪headָ��һ����ͷ���ĵ�������������ÿ���������ַ���������(data)��ָ����(next)�����д����ʵ����
//ֵΪa�Ľ��ǰ����ֵΪkey�Ľ�㣬��û��ֵΪa�Ľ�㣬������������
void insert1(List* head, int a, int key)//���ϵĴ�
{
	List* s, * p, * q;
	s = (List*)malloc(sizeof(List));
	s->data = key;
	q = head;
	p = head->next;
	if (p == NULL)
	{
		s->next = p;
		q->next = s;
		return;
	}
	while ((p->data != a) && (p->next != NULL))
	{
		q = p;
		p = p->next;
	}
	if (p->data == a)
	{
		s->next = p;
		q->next = s;
	}
	else
	{
		s->next = NULL;
		p->next = s;
	}
}
static void insertKey(List* head, int a, int key)
{
	List* p, * ph;
	ph = head;
	int flag = 0;
	while (ph->next != NULL)
	{
		if (ph->data == a)
		{
			p = (List*)malloc(sizeof(List));
			p->data = a;
			ph->data = key;

			p->next = ph->next;
			ph->next = p;
			flag = 1;
		}
		ph = ph->next;
	}

	if (flag == 0)
	{
		p = (List*)malloc(sizeof(List));
		ph->next = p;
		p->data = key;
		p->next = NULL;
	}
}