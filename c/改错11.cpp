#include <stdio.h>
#include <string.h>
int fun(char a[]);
main()
{
         char a[80];
         printf("Input a string:\n");
         gets(a);
         if(fun(a) == 1)
         {
                   printf("This string is a plalindrome.\n");
         }
         else
         {
                   printf("This string is not a plalindrome.\n");
         }
}
int fun(char a[])
{
         int i,j;
         for (i=0,j=strlen(a)-1;i<=j;i++,j--)
         {
                   if (a[i]!=a[j])
                   {
                            return 0;
                   }
         }
         return 1;
}
