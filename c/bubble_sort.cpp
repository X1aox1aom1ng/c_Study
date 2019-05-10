//冒泡排序法 
#include <stdio.h>
void bubble_sort(int arr[], int len) {
    int i, j, temp;
    for (i = 0; i < len - 1; i++)
        for (j = 0; j < len - 1 - i; j++)
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}

int main() 
{
    int arr[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
    int len = (int) sizeof(arr) / sizeof(*arr);
    int len1 = (int) sizeof(arr) / sizeof(int);

    /*
	sizeof(arr)代表整个数组所占的内存空间
	而*arr表示指向首地址
	即表示首地址的内容
	所以sizeof(*arr)表示首元素所占内存空间的大小
	大小与sizeof(int)一样 
	*/
	
    bubble_sort(arr, len);
    int i;
    for (i = 0; i < len; i++)
        printf("%d ", arr[i]);
        
//        printf("%d\n",len);
//        printf("%d\n",sizeof(arr));
//        printf("%d\n",sizeof(*arr));
//        printf("%d\n",len1);
    return 0;
}
