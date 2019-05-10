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
	if(h == NULL)      //h传入空链表 
	{
		s->next=NULL;
		h=s;
	}
	
	if(x <= h->score)      //插入头部 
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
	printf("输入数组6个元素的值。\n");
	head=creat();
	
	printf("此链表各个结点的数据域为：");
	output(head);
	
	printf("输入要插入的数据x:");
	scanf("%d",&x);
	
	head=insert(head,x);
	printf("插入后链表各个结点的数据域为：");
	out(head);
	return 0;
 } 
