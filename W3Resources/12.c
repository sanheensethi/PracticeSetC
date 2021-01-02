#include<stdio.h>
#include<conio.h>

// Write a C program that accepts an employee's ID, total worked hours of a month and the amount he received per hour. Print the employee's ID and salary (with two decimal places) of a particular month. Go to the editor
// Test Data :
// Input the Employees ID(Max. 10 chars): 0342
// Input the working hrs: 8
// Salary amount/hr: 15000
// Expected Output:
// Employees ID = 0342
// Salary = U$ 120000.00 

int main(){
    char emp_id[10];
    int sal_hr,hr;
    scanf("%s",&emp_id);
    scanf("%d",&hr);
    scanf("%d",&sal_hr);
    float salary = (float)(hr * sal_hr);
    printf("Employee ID: %s\n",emp_id);
    printf("Salary: US $%.1lf",salary);
    return 0;
}