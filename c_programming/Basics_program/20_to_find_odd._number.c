//////////////////////////////////////////////////////////////
// Date : 29 Feb 2024
// Author : Jadhav Aditya Santosh
// Problem Statement : write a program to find odd Number....
// Concept : Basics Program
// Expected Output :      Enter The Number : 30
//                        Given Number Is Not odd Number
//////////////////////////////////////////////////////////////



#include<stdio.h>
int main()
{
    int num1,num2,mul;
    printf("Enter The Number : ");
    scanf("%d",&num1);
    if (num1 % 2 == 1)
    {
        printf("Given Number Is Odd Number ");
    }
    else
    {
        printf("Given Number Is Not Odd Number");
    }
    return 0;
}



Output = Enter The Number :30
          Given Number Is Not Odd Number
         
