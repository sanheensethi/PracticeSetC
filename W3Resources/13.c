#include<stdio.h>
#include<conio.h>
// Write a C program that accepts three integers and find the maximum of three.
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c){
        printf("%d is greater.",a);
    }else if(b>a && b>c){
        printf("%d is greater.",b);
    }else{
        printf("%d is greater.",c);
    }
    
    return 0;
}