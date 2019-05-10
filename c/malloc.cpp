#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int set_value(int *p, int lenth)
{
    int i = 0;
    printf("请输入各个元素的值：\n"); 
    for(i=0;i<lenth;i++)
    {
        scanf("%d",&p[i]);
    }
} 
int main(void)
{
    int a = 0;
    printf("请输入数组的元素个数：\n");
    scanf("%d",&a);
    /*malloc的返回值是void*类型
	它并不知道你要存放什么样的数据
    申请一定大小的堆内存
	堆内存中存放的数据是int型的
	所以强制类型转化*/
    int *p = (int *)malloc(a*sizeof(int));
    //判断malloc是否申请成功
    if(NULL == p)
    {
        printf("malloc failed");
        return -1;
    }
    //清空申请到的这个内存
    memset(p,0,a*sizeof(int));
    //void *memset(void *s,int c,size_t n)
    //将已开辟内存空间 s 的首 n 个字节的值设为值 c。

    //清空就可以使用这块内存了！
    set_value(p,a);

    //释放内存
    free(p);
    //避免野指针的出现，将指针写0 
    p = NULL;
    return 0; 

}
