#include<stdio.h>
#include<conio.h>
#define and &&
// Write a C program that reads an integer and check the specified range where it belongs. Print an error message if the number is negative and greater than 80.
// Specified Range: [0, 20], [21, 40], [41, 60], [61, 80]
int main(){
    int a[5];
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    int sum = 0;
    for (int j = 0; j < 5; j++)
    {
        if(a[j]%2!=0){
            sum+=a[j];
        }
    }
    printf("Sum of all odd values is %d",sum);
    
    return 0;
}