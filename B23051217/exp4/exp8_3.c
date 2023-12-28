/*编写程序exp8_3.c，验证用户输入的日期格式是否正确，
如果不正确，则提示重新输入，直到重新输入正确为止。（提示：需要定义一个表示日期的结构体类型struct Date，
包括年、月、日信息,并用typedef重新定义新类型名Date；
检查日期是否有效，定义为函数int checkDate(Date date)）。*/
#include<stdio.h>

typedef struct Date{
    int year;
    int month;
    int day;
}Date;

typedef struct Date Date;

int checkDate(Date date){
    if(date.month < 1 || date.month > 12){
        return 0;
    }
    if(date.day < 1 || date.day > 31){
        return 0;
    }
    if((date.month == 4 || date.month == 6 || date.month == 9 || date.month == 11) && date.day > 30){
        return 0;
    }
    if(date.month == 2){
        if((date.year % 4 == 0 && date.year % 100 != 0) || date.year % 400 == 0){
            if(date.day > 29){
                return 0;
            }
        }else{
            if(date.day > 28){
                return 0;
            }
        }
    }
    return 1;
}

int main(){
    Date date;
    printf("请输入日期（年 月 日）：");
    scanf("%d%*c%d%*c%d", &date.year, &date.month, &date.day);
    while(checkDate(date) == 0){
        printf("输入的日期格式不正确，请重新输入：");
        scanf("%d%*c%d%*c%d", &date.year, &date.month, &date.day);
    }
    printf("输入的日期格式正确。\n");
    return 0;
}