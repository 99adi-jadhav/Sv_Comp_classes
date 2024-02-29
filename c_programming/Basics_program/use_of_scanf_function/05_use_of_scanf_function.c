//////////////////////////////////////////////////////////////
// Date : 01 March 2024
// Author : Jadhav Aditya Santosh
// Problem Statement : write a program to print seprated integer ......
// Concept : Use of Scanf Function
// Expected Output :   Enter two integers separated by a space: 12 30
//                     You entered: 12 and 30
//////////////////////////////////////////////////////////////



#include<stdio.h>
int main() {
 int a, b;
    printf("Enter two integers separated by a space: ");
    scanf("%d %d", &a, &b);
    printf("You entered: %d and %d\n", a, b);
    return 0;
}



Output :    Enter two integers separated by a space: 12 30
            You entered: 12 and 30
