//////////////////////////////////////////////////////////////
// Date : 01 March 2024
// Author : Jadhav Aditya Santosh
// Problem Statement : to print odd numbers between 1 and 10...!
// Concept : loops
// Expected Output :   Print odd numbers between 1 and 10 using a while loop: 
//                             1
//                             3
//                             5
//                             7
//                             9
//////////////////////////////////////////////////////////////



#include <stdio.h>

int main() {
    printf("Print odd numbers between 1 and 10 using a while loop:\n");

    int num = 1;
    while (num <= 10)
      {
        if (num % 2 != 0) 
        {
            printf("%d\n", num);
        }
        num++;
    }

    return 0;
}


Output = Print odd numbers between 1 and 10 using a while loop: 
                     1
                     3
                     5
                     7
                     9
