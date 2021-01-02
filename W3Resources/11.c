#include<stdio.h>
#include<conio.h>

int main(){
    float a,b,x,y;
    scanf("%f%f%f%f",&a,&x,&b,&y);
    double average = ((double)(a*x + b*y)/(x+y));
    printf("Average is %lf",average); 
    return 0;
}