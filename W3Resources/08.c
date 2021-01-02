#include<stdio.h>
#include<conio.h>

int main(){
//     Write a C program to convert specified days into years, weeks and days. Go to the editor
// Note: Ignore leap year.

    int days = 1329;
    int years,months,weeks;
    years = days/365;
    months = days/30;
    weeks = days/7;
    printf("Years in %d days is %d\n",days,years);
    printf("Months in %d days is %d\n",days,months);
    printf("Weeks in %d days is %d\n",days,weeks);
    return 0;
}