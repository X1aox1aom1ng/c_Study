#include <string.h>
#include <stdio.h>
int main()
{
    int i, findFlag;  
    char x[15];               
    char str[][13]={ "Pascal","Basic","Fortran", "Java", "Visual C", "Visual Basic" }; 
 
    printf("������һ���ַ���:");
    gets(x);  
 
    while (i<6 & !findFlag)
    {   
        if (x == str[i]) 
        {
            findFlag = 1;    
        } 
         i++;
    }
 
    if (findFlag)
    {
       printf("%s\n", x);
    }
    else
    {
       printf("û�ҵ�!\n");
    }
       return 0;
}
