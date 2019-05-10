#include <string.h>
#include <stdio.h>
main()
{
    int i=0, findFlag = 1;  
    char x[80];              
    char *str[]={ "Pascal","Basic","Fortran", "Java","Visual C", "Visual Basic" };
 
    printf("Input string:\n");
    gets(x);
 
    while (i<6 && findFlag)
    {   
        if (strcmp(x,str[i])==0)
        {
            findFlag = 0;    
        } 
        i++;
    }
    if (!findFlag)
    {      
        printf("%s\n",x);
    }
    else
    {      
         printf("Not find!\n");
    }
}
