#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    float root1,root2;
    root1 = (float)((-1*b)+sqrt(b*b - 4*a*c))/(2*a);
    root2 = (float)((-1*b)-sqrt(b*b - 4*a*c))/(2*a);
    printf("Root 1 : %f\n",root1);
    printf("Root 2 : %f",root2);
    return 0;
}