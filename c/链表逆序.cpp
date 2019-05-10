#include <stdio.h>
#include <stdlib.h>
typedef struct line
{
	int score;
	struct line *next;
}LinkList;

LinkList *creat()
{
	int i, x;
	LinkList *head, *node, *end;
	head = (LinkList*)malloc(sizeof(struct line));
	end = head;
	
	printf("结点值：");
	scanf("%d",&x);
	while(x >= 0 && x <= 9)
	{
		node = (LinkList*)malloc(sizeof(struct line));
		x=node->score;
		end->next=node;
		end = node;
		fflush(stdin);
		printf("结点值：");
		scanf("%d",&x);
	}
	
	while(scanf("%d",&x))
	{
		node = (LinkList*)malloc(sizeof(struct line));
		node->score = x;
		end->next=node;
		end = node;
		fflush(stdin);
		printf("结点值：");
		scanf("%d",&x);
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

int main()
{
	LinkList *h;
	printf("\n请输入链表（非数表示结束）\n");
	h = creat();
	
	output(h);
	
	return 0;
}
