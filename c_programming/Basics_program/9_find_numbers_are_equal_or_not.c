//////////////////////////////////////////////////////////////
// Date : 29 Feb 2024
// Author : Jadhav Aditya Santosh
// Problem Statement : write a program to find numbers are equal or not...
// Concept : Basics Program
// Expected Output :    Enter the first number: 50
//                      Enter the second number: 70
//                      The numbers are not equal
//////////////////////////////////////////////////////////////


#include <stdio.h>

int main() 
{
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (num1 == num2) 
    {
        printf("The numbers are equal.\n");
    } else
    {
        printf("The numbers are not equal \n");
    }

    return 0;
}


Output : Enter the first number: 50
         Enter the second number: 70
         The numbers are not equal
