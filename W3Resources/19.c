#include<stdio.h>
#include<conio.h>
#define and &&
// Write a C program that accepts 4 integers p, q, r, s from the user where r and s are positive and p is even. If q is greater than r and s is greater than p and if the sum of r and s is greater than the sum of p and q print "Correct values", otherwise print "Wrong values"
int main(){
    int p,q,r,s;
    if(q>r and s>p and r+s > p+q){
        printf("Correct Values");
    }else
    {
        printf("Wrong Values");
    }
    
    
    return 0;
}