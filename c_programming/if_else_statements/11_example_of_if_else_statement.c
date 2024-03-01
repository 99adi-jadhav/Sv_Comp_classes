//////////////////////////////////////////////////////////////
// Date : 01 March 2024
// Author : Jadhav Aditya Santosh
// Problem Statement : Example Of if-else Statement....  
// Concept : If-else statement Program
// Expected Output : The weather is pleasant
//////////////////////////////////////////////////////////////


#include<stdio.h>
int main()
{
    int temperature = 25;
    if (temperature > 30)
    {
        printf("It's hot outside!\n");
    } 
    else if (temperature >= 20) 
    {
        printf("The weather is pleasant \n");
    } 
    else 
    {
        printf("It's cold outside!\n");
    }
    return 0;
}


Output : The weather is pleasant
