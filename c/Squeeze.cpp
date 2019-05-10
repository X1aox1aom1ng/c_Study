#include <stdio.h>
void  Squeeze(char *s, char c);
int main()
{
    char a[80],c, *s;
    scanf("%s",&a);
    getchar();
    scanf("%c",&c);
    s=a;
    Squeeze(s,c);
    printf("%s\n",a);
    
    return 0;
}
void  Squeeze(char *s, char c)
{
    int i,j=0;
    for (i=0; *(s+i)!='\0'; i++)
    {
        if (*(s+i )!= c)
        {
            *(s+j )= *(s+i);
            j++;
        }
    }
    *(s+j) = '\0';
}
