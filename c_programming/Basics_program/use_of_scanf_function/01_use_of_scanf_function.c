//////////////////////////////////////////////////////////////
// Date : 01 March 2024
// Author : Jadhav Aditya Santosh
// Problem Statement : write a program to print substraction of two numbers...            
// Concept : Use of Scanf Function
// Expected Output : 50 - 2 = 48
//////////////////////////////////////////////////////////////




#include<stdio.h>
int main()
{
    int num1,num2,sub;
    printf("Enter The First Number : ");
    scanf("%d",&num1);
    printf("Enter The Second Number : ");
    scanf("%d",&num2);
    sub = num1 - num2;
    printf("Substraction Of Two Number is : %d",sub);
    return 0;
}


Output : 
            Enter The First Number : 50
            Enter The Second Number : 2
            Substraction Of Two Number is : 48
