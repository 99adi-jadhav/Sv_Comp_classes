//////////////////////////////////////////////////////////////
// Date : 01 March 2024
// Author : Jadhav Aditya Santosh
// Problem Statement : Example Of Continue Statement....  
// Concept : If-else statement Program
// Expected Output :  Skip 3 number
//////////////////////////////////////////////////////////////


#include <stdio.h>
    int main()
     {
            for (int j = 1; j <= 5; j++)
             {
                if (j == 3) 
                {
                   printf("Skip = %d\n", j);
                        continue;
                }
                   printf("j = %d\n", j);
            }   
                return 0;
    }


Output : 
j = 1
j = 2
Skip = 3
j = 4
j = 5
