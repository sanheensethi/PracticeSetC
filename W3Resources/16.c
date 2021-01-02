#include<stdio.h>
#include<conio.h>
// Write a C program to read an amount (integer value) and break the amount into smallest possible number of bank notes.
int main(){
    int amount;
    scanf("%d",&amount);
    // notes
    // 100,50,20,10,5,2,1
    int note_100 = amount/100;
    amount = amount%100;
    int note_50 = amount/50;
    amount = amount%50;
    int note_20 = amount/20;
    amount = amount%20;
    int note_10 = amount/10;
    amount = amount%10;
    int note_5 = amount/5;
    amount = amount%5;
    int note_2 = amount%2;
    amount= amount%2;
    int note_1 = amount/1;
    
    printf("%d notes of 100\n",note_100);
    printf("%d notes of 50\n",note_50);
    printf("%d notes of 20\n",note_20);
    printf("%d notes of 10\n",note_10);
    printf("%d notes of 5\n",note_5);
    printf("%d notes of 2\n",note_2);
    printf("%d notes of 1\n",note_1);
    return 0;
}