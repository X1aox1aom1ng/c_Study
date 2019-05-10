#include <stdio.h>
#include <stdlib.h> 
#define N 6
typedef struct line
{
	int score;
	struct line *next;
}LinkList;

LinkList *creat()
{
	int i;
	LinkList *head, *node, *end;
	head = (LinkList*)malloc(sizeof(struct line));
	end = head;
	
	for(i = 0;i < N;i++)
	{
		node = (LinkList*)malloc(sizeof(struct line));
		scanf("%d",&node->score);
		end->next=node;
		end = node;
	}
	
	end->next=NULL;
	return head;
}

void output(LinkList *t)
{
	LinkList *p=t;
	while(p->next != NULL)
	{
		p=p->next;
		printf("%d ",p->score);
	}
	printf("\n");
}

LinkList *insert(LinkList *h, int x)
{
	LinkList *s, *p, *t;
	s = (LinkList*)malloc(sizeof(struct line));
	s->score=x;
	
	h=h->next;
	if(h == NULL)      //h��������� 
	{
		s->next=NULL;
		h=s;
	}
	
	if(x <= h->score)      //����ͷ�� 
	{
		s->next=h;
		h=s;
	}else{
		t = h;
		while(t->next != NULL && x > t->score)
		{
			p = t;
			t=t->next;
		}
		
		s->next=p->next;
		p->next=s;
		
	}
	
	return h;
}

void out(LinkList *t)
{
	LinkList *p=t;
	while(p)
	{
		printf("%d ",p->score);
		p=p->next;
	}
	printf("\n");
}

int main()
{
	int x;
	LinkList *head;
	printf("��������6��Ԫ�ص�ֵ��\n");
	head=creat();
	
	printf("�������������������Ϊ��");
	output(head);
	
	printf("����Ҫ���������x:");
	scanf("%d",&x);
	
	head=insert(head,x);
	printf("����������������������Ϊ��");
	out(head);
	return 0;
 } 
