//ѡ������ 
#include <stdio.h>
void swap(int *a,int *b) //���Q�ɂ�׃��
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort(int arr[], int len) 
{
    int i,j;
 
    for (i = 0 ; i < len - 1 ; i++) 
    {
        int min = i;
        for (j = i + 1; j < len; j++)     //���Lδ�����Ԫ��
            if (arr[j] < arr[min])    //�ҵ�Ŀǰ��Сֵ
                min = j;    //�o���Сֵ
           swap(&arr[min], &arr[i]);    //�����Q
    }
}

int main() {
    int arr[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
    int len = (int) sizeof(arr) / sizeof(*arr);
    selection_sort(arr, len);
    int i;
    for (i = 0; i < len; i++)
        printf("%d ", arr[i]);
    return 0;
}
