#include<stdio.h>
int main()
{
    int g = 23;
    int k = 3;
    int b, c;
    printf("������23�������Ϸ����\n");
    printf("ע�⣺����ƶ������ĿΪ����\n");
    do
    {
        printf("�������ƶ��Ļ����Ŀ��\n");
        scanf("%d", &b);
 
        if (b < 1 || b > 3)
        {
            printf("�Բ�����������˲����ʵ���Ŀ������������������룡\n");
            printf("�������ƶ������Ŀ��\n");
            scanf("%d", &b);
        }
        else
        {
            g = g - b;
            printf("���ƶ��Ļ����ĿΪ��%d\n", b);
            printf("���ƶ���ʣ�µĻ����ĿΪ��%d\n", g);
        }
 
        if (!g || g < 0)
        {
            printf("�Բ��������ˣ�\n");
            break;
        }
        else
        {
            c = (g - 1) % (k + 1);
            if (!c)c = 1;
            g = g - c;
            printf("������ƶ��Ļ����ĿΪ��%d\n", c);
            printf("������ƶ���ʣ�µĻ����ĿΪ��%d\n", g);
            if (!g || g < 0)
            {
                printf("��ϲ������Ӯ�ˣ� \n");
                break;
            }
        }
    }
    while (g > 0);
    return 0;
}

