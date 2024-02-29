//////////////////////////////////////////////////////////////
// Date : 29 Feb 2024
// Author : Jadhav Aditya Santosh
// Problem Statement : write a program to find Even Number....
// Concept : Basics Program
// Expected Output :      Enter The Number : 11
//                        Given Number Is Not Even Number
//////////////////////////////////////////////////////////////




#include<stdio.h>
int main()
{
    int num1,num2,mul;
    printf("Enter The Number : ");
    scanf("%d",&num1);
    if (num1 % 2 == 0)
    {
        printf("Given Number Is Even Number ");
    }
    else
    {
        printf("Given Number Is Not Even Number");
    }
    return 0;
}


Output = Enter The Number : 11
         Given Number Is Not Even Number
