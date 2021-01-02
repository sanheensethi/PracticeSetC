#include<stdio.h>
#include<conio.h>

// Write a C program to calculate a bike’s average consumption from the given total distance (integer value) traveled (in km) and spent fuel (in liters, float number – 2 decimal point). Go to the editor
// Test Data :
// Input total distance in km: 350
// Input total fuel spent in liters: 5
// Expected Output:
// Average consumption (km/lt) 70.000

int main(){
    int distance;
    float petrol;
    scanf("%d",&distance);
    scanf("%f",&petrol);
    float average = (float)distance/petrol;
    printf("Average Consuption (km/lt) is %f",average);
    return 0;
}