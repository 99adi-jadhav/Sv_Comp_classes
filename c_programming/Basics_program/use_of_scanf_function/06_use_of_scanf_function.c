//////////////////////////////////////////////////////////////////////////////////////////
// Date : 01 March 2024
// Author : Jadhav Aditya Santosh
// Problem Statement : write a program to print multiplication of two Numbers....
// Concept : Use of Scanf Function
// Expected Output :       Enter The First Number : 5
//                         Enter The Second Number : 2
//                         Multiplication Of Two Number is : 10
////////////////////////////////////////////////////////////////////////////////////////////



#include<stdio.h>
int main()
{
    int num1,num2,mul;
    printf("Enter The First Number : ");
    scanf("%d",&num1);
    printf("Enter The Second Number : ");
    scanf("%d",&num2);
    mul = num1 * num2;
    printf("Multiplication Of Two Number is : %d",mul);
    return 0;
}

Output : Enter The First Number : 5
         Enter The Second Number : 2
         Multiplication Of Two Number is : 10
