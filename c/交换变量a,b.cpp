#include <stdio.h>                           
main()
{ 
    int  a,b,*p,*q,t; 
    p=&a;
    q=&b;  
    printf("���������a��b��ֵ:");
    scanf("%d%d", &a,&b); 
    t=*p ; 
    *p=*q ;
    *q=t ; 
    printf("������a��b��ֵ��a=%d b=%d\n",a,b);
}
