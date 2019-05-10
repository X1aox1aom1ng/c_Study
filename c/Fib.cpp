#include <stdio.h>
#define N 20
static int count;
int fib(int n){
    count++;
    if(n==1 || n==0)
        return 1;
    return fib(n-1)+fib(n-2);
}
int main(int argc,char *argv[]){
    int i;
    for(i=0;i<N;i++){
        count=0;
        printf("%d",fib(i));
        printf("(%d)\n",count);
    }
    printf("\n");
    return 0;
}
