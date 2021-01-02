#include<stdio.h>
#include<conio.h>

int main(){
    int seconds;
    scanf("%d",&seconds);
    int minute = seconds/60;
    seconds = seconds%60;
    int hour = minute/60;
    minute = minute%60;

    printf("%d:%d:%d",hour,minute,seconds);
    return 0;
}