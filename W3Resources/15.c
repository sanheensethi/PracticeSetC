#include<stdio.h>
#include<conio.h>
#include<math.h>
// Write a C program to calculate the distance between the two points.
int main(){
    float x1,x2,y1,y2;
    double distance;
    scanf("%f%f%f%f",&x1,&x2,&y1,&y2);
    distance = (double)(sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1)));
    printf("Distance is : %lf",distance);
    return 0;
}