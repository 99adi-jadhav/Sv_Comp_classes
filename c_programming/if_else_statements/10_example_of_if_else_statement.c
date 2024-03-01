//////////////////////////////////////////////////////////////
// Date : 01 March 2024
// Author : Jadhav Aditya Santosh
// Problem Statement : Example Of if-else Statement....  
// Concept : If-else statement Program
// Expected Output :  Good afternoon!
//////////////////////////////////////////////////////////////

#include<stdio.h>
int main()
{
  int hour = 15;
    if (hour < 12) 
    {
        printf("Good morning!\n");
    } 
    else if (hour < 18) 
    {
        printf("Good afternoon!\n");
    } 
    else 
    {
        printf("Good evening!\n");
    }
      return 0;
}




Output : Good afternoon!
