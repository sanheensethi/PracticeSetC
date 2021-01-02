#include<stdio.h>
#include<conio.h>
#define pi 3.14
int main(){
    int radius = 6;
    printf("Perimeter of circle of radius %d inches is %f inches",radius,2*pi*radius);    
    printf("\nArea of circle of radius %d inches is %f sq inches",radius,pi*radius*radius);    
    
    return 0;
}