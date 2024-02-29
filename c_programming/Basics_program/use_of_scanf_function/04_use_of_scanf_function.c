//////////////////////////////////////////////////////////////
// Date : 01 March 2024
// Author : Jadhav Aditya Santosh
// Problem Statement : write a program to print a Character .... 
// Concept : Use of Scanf Function
// Expected Output :  Enter a character: A    
//                    You entered: A
//////////////////////////////////////////////////////////////



#include<stdio.h>
int main() {
char character;
    printf("Enter a character: ");
    scanf(" %c", &character); 
    printf("You entered: %c\n", character);
    return 0;
}


Output :        Enter a character: A    
                You entered: A
