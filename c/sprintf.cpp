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
由此可以看出
sprintf的用法
相当于给一个字符数组赋值，并返回数组长度 
第一个必须为字符数组的地址 
*/ 
