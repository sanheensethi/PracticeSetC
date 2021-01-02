#include<stdio.h>
#include<conio.h>

int main(){
    int days;
    scanf("%d",&days);
    int year = days/365;
    days = days%365;
    int months = days/30;
    days = days%30;
    printf("%d Year(s)\n",year);
    printf("%d Month(s)\n",months);
    printf("%d Day(s)\n",days);
    return 0;
}