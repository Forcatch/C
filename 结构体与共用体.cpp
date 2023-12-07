#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string>
struct  student
{
	int id;
	int mathmid;
	int mathend;
}*sp;
//1.试利用结构体类型编制一程序，实现输入一个学生的数学期中和期末成绩，然后计算并输出其平均成绩
static void test1()
{
	struct student s1;
	int ave;
	scanf("%d %d", &s1.mathmid, &s1.mathend);
	printf("%d", (s1.mathend + s1.mathmid) / 2);
}

//2.试利用指向结构体的指针编制一程序，实现输入三个学生的学号，数学期中和期末成绩，然后计算其平常成绩并输出成绩表。
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
//3.请编程建立一个带有头结点的单向链表，链表结点中的数据通过键盘输入，当输入数据为-1时，表示输入结束。
//(链表头结点的data域不放数据，表空的条件是ph->next=NULL).
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

//4.已知head指向一个带头结点的单向链表，链表中每个结点包含字符型数据域(data)和指针域(next)。请编写函数实现在
//值为a的结点前插入值为key的结点，若没有值为a的结点，则插在链表最后
void insert1(List* head, int a, int key)//书上的答案
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