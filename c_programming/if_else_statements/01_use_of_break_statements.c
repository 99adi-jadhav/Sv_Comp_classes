//////////////////////////////////////////////////////////////
// Date : 01 March 2024
// Author : Jadhav Aditya Santosh
// Problem Statement : Example Of Break Statement....  
// Concept : If-else statement Program
// Expected Output :  Break the loop at 4
//////////////////////////////////////////////////////////////


#include <stdio.h>

int main()
 {
     for (int i = 1; i <= 5; i++) 
    {
        if (i == 4) {
            printf("Break the loop = %d\n", i);
            break;
        }
        printf("i = %d\n", i);
    }
    return 0;
}


Output =
i = 1
i = 2
i = 3
Break the loop = 4
