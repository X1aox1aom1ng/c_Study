#include <stdio.h>
 
/*�������ڽṹ��*/
typedef struct date {
    int year;
    int month;
    int day;
} DATE;
 
/*�ж��Ƿ�Ϊ���꣬�Ƿ���1���񷵻�0*/
int isLeap (int year) {
    return ( (year%4==0 && year%100!=0) || (year%400==0) );
}
 
/*����ָ�����ھ���1990��1��1�յ�����*/
int countDay (DATE currentDay) {
    int perMonth[13]={0,31,28,31,30,31,30,31,31,30,31,30};  /*ÿ����������*/
    int totalDay=0,year,i;
     
    /*���ָ������֮ǰ��ÿһ��������ۼӺ�*/
    for(year=1990; year<currentDay.year; year++) {
        if(isLeap(year))  /*�ж��Ƿ�Ϊ����*/
            totalDay=totalDay+366;
        else
            totalDay=totalDay+365;
    }
    /*���Ϊ���꣬����·�Ϊ29��*/
    if(isLeap(currentDay.year))
        perMonth[2]+=1;
    /*�������ڵ������ۼӵ�totalDay��*/
    for(i=0; i<currentDay.month; i++)
        totalDay+=perMonth[i];
    /*�������ڵ������ۼӵ�totalDay��*/
    totalDay+=currentDay.day;
    /*����totalDay*/
    return totalDay;
}
 
int main() {
    DATE today;  /*ָ������*/
    int totalDay;  /*ָ�����ھ���1990��1��1�յ�����*/
    int result;  /*totalDay��5ȡ��Ľ��*/
    int error;
     
    do { /*����ָ������*/
		scanf("%4d-%2d-%2d", &today.year, &today.month, &today.day);
          error=0;
        if(today.year<1990) /*�ж����ڸ�ʽ�Ƿ���ȷ*/                                           
            {printf("Invalid input\n");error=1;}
        if(today.month<1||today.month>12)
            {printf("Invalid input\n");error=1;}
        if(today.day<0||today.day>31)  
            {printf("Invalid input\n");error=1;}
    } while(error);
 
    totalDay=countDay(today);  /*���ָ�����ھ���1990��1��1�յ�����*/
    /*����%5���ж�������㻹��ɹ��*/
    result=totalDay%5;
    if(result>0 && result<4)
        printf("He is working\n");
    else
        printf("He is having a rest\n");
    printf("\n");
    return 0;
}
