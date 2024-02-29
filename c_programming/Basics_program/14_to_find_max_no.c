//////////////////////////////////////////////////////////////
// Date : 29 Feb 2024
// Author : Jadhav Aditya Santosh
// Problem Statement : write a program to find maximum Number
// Concept : Basics Program
// Expected Output :     Enter your first number : 40
//                       Enter your second number : 60
//                       Second Number Is Maximum   
//////////////////////////////////////////////////////////////



#include<stdio.h>
int main()
{
int num1,num2;
 printf("\nEnter your first number : ");
 scanf("%d",&num1);

 printf("\nEnter your second number : ");
 scanf("%d",&num2);

  if(num1>num2)
    {
     printf("first number is maximum\n");
    }
    else if(num1<num2)
    {
     printf("Second Number Is Maximum\n");
    }
  else
    {
     printf("both are equal\n"); 
    }
       return 0;
}


Output = Enter your first number : 40
         Enter your second number : 60
         Second Number Is Maximum   
