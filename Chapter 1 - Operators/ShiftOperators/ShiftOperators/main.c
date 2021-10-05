/*C Program to demonstrate the use of Shift Operators[Shift-left and Shift-right by Rohan S Gurumurthy*/
#include<stdio.h>
int main()
{
    int A, B;  //Initializing two variables
    scanf_s("%d %d", &A, &B);   //Getting input for two variables
    printf("\nThe value of A after using Shift-left operator for 4 Times is %d", A << 4);
    printf("\nThe value of A after using Shift-left operator for 4 Times is %d", A >> 4);
    return 0;
}