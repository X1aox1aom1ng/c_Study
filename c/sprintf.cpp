#include <stdio.h>
 
int main ()
{
   char str[100];
   int n;
   
   n=sprintf((char*)str,"my name is %s,I am %d,","Mike",23);
   
   printf("Text is:%s\n",str);
   printf("Total number are:%d\n",n);
    
   return 0;
}

/*
�ɴ˿��Կ���
sprintf���÷�
�൱�ڸ�һ���ַ����鸳ֵ�����������鳤�� 
��һ������Ϊ�ַ�����ĵ�ַ 
*/ 
