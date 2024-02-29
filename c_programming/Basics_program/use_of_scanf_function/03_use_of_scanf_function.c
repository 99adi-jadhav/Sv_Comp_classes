//////////////////////////////////////////////////////////////
// Date : 01 March 2024
// Author : Jadhav Aditya Santosh
// Problem Statement : write a program to print a Float Number.....          
// Concept : Use of Scanf Function
// Expected Output :  Enter an integer: 9.5
//                    You entered: 9.5
//////////////////////////////////////////////////////////////


#include<stdio.h>
int main() {
float floatNumber;
    printf("Enter a float: ");
    scanf("%f", &floatNumber);
    printf("You entered: %f\n", floatNumber);
    return 0;
}



Output :             Enter a float: 9.5
                     You entered: 9.500000
