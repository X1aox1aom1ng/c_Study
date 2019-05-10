#include <stdio.h>
 
/*定义日期结构体*/
typedef struct date {
    int year;
    int month;
    int day;
} DATE;
 
/*判断是否为闰年，是返回1，否返回0*/
int isLeap (int year) {
    return ( (year%4==0 && year%100!=0) || (year%400==0) );
}
 
/*计算指定日期距离1990年1月1日的天数*/
int countDay (DATE currentDay) {
    int perMonth[13]={0,31,28,31,30,31,30,31,31,30,31,30};  /*每月天数数组*/
    int totalDay=0,year,i;
     
    /*求出指定日期之前的每一年的天数累加和*/
    for(year=1990; year<currentDay.year; year++) {
        if(isLeap(year))  /*判断是否为闰年*/
            totalDay=totalDay+366;
        else
            totalDay=totalDay+365;
    }
    /*如果为闰年，则二月份为29天*/
    if(isLeap(currentDay.year))
        perMonth[2]+=1;
    /*将本年内的天数累加到totalDay中*/
    for(i=0; i<currentDay.month; i++)
        totalDay+=perMonth[i];
    /*将本月内的天数累加到totalDay中*/
    totalDay+=currentDay.day;
    /*返回totalDay*/
    return totalDay;
}
 
int main() {
    DATE today;  /*指定日期*/
    int totalDay;  /*指定日期距离1990年1月1日的天数*/
    int result;  /*totalDay对5取余的结果*/
    int error;
     
    do { /*输入指定日期*/
		scanf("%4d-%2d-%2d", &today.year, &today.month, &today.day);
          error=0;
        if(today.year<1990) /*判断日期格式是否正确*/                                           
            {printf("Invalid input\n");error=1;}
        if(today.month<1||today.month>12)
            {printf("Invalid input\n");error=1;}
        if(today.day<0||today.day>31)  
            {printf("Invalid input\n");error=1;}
    } while(error);
 
    totalDay=countDay(today);  /*求出指定日期距离1990年1月1日的天数*/
    /*天数%5，判断输出打鱼还是晒网*/
    result=totalDay%5;
    if(result>0 && result<4)
        printf("He is working\n");
    else
        printf("He is having a rest\n");
    printf("\n");
    return 0;
}
