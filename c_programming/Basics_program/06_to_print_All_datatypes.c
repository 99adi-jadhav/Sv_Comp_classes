//////////////////////////////////////////////////////////////
// Date : 29 Feb 2024
// Author : Jadhav Aditya Santosh
// Problem Statement : write a program to Print All Datatypes....      
// Concept : Basics Program
// Expected Output:       The value of A is : 100
//                        Character is : A
//                        Float Value is : 2.2
//                        Double Value is : 20.22
//////////////////////////////////////////////////////////////


#include<stdio.h>
int main ()
{
    int a = 100;
    char b = 'A';
    float c = 2.2;
    double lf = 20.22;

    printf("The value of A is : %d\n",a);
    printf("Character is : %c\n",b);
    printf("Float Value is : %.1f\n",c);
    printf("Double Value is : %.2lf\n",lf);    

    return 0;

}

Output : 
          The value of A is : 100
          Character is : A
          Float Value is : 2.2
          Double Value is : 20.22
