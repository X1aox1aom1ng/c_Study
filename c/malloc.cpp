#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int set_value(int *p, int lenth)
{
    int i = 0;
    printf("���������Ԫ�ص�ֵ��\n"); 
    for(i=0;i<lenth;i++)
    {
        scanf("%d",&p[i]);
    }
} 
int main(void)
{
    int a = 0;
    printf("�����������Ԫ�ظ�����\n");
    scanf("%d",&a);
    /*malloc�ķ���ֵ��void*����
	������֪����Ҫ���ʲô��������
    ����һ����С�Ķ��ڴ�
	���ڴ��д�ŵ�������int�͵�
	����ǿ������ת��*/
    int *p = (int *)malloc(a*sizeof(int));
    //�ж�malloc�Ƿ�����ɹ�
    if(NULL == p)
    {
        printf("malloc failed");
        return -1;
    }
    //������뵽������ڴ�
    memset(p,0,a*sizeof(int));
    //void *memset(void *s,int c,size_t n)
    //���ѿ����ڴ�ռ� s ���� n ���ֽڵ�ֵ��Ϊֵ c��

    //��վͿ���ʹ������ڴ��ˣ�
    set_value(p,a);

    //�ͷ��ڴ�
    free(p);
    //����Ұָ��ĳ��֣���ָ��д0 
    p = NULL;
    return 0; 

}
