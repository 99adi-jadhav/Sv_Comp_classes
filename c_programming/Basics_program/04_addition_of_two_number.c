//////////////////////////////////////////////////////////////
// Date : 29 Feb 2024
// Author : Jadhav Aditya Santosh
// Problem Statement : write a program to Print Addition Of Two Number....                          
// Concept : Basics Program
// Expected Output : 10 + 20 = 30
//////////////////////////////////////////////////////////////


#include<stdio.h>// header File
int main() //Entry Point Function
{
    int num1,num2,add;
    printf("Enter The First Number : "\n);
    scanf("%d",&num1);
    printf("Enter The Second Number : "\n);
    scanf("%d",&num2);
    add = num1 + num2;
    printf("\nAddition Of Two Number is : %d",add);
    return 0;
}


Output = Enter The First Number : 10
         Enter The Second Number : 20
         Addition Of Two Number is : 30
