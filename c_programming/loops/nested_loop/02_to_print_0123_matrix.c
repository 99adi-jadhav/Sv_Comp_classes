//////////////////////////////////////////////////////////////
// Date : 01 March 2024
// Author : Jadhav Aditya Santosh
// Problem Statement : to print 0123 format Matrix....!
// Concept : loops
// Expected Output :          0        1       2       3       
//                            0        1       2       3       
//                            0        1       2       3       
//                            0        1       2       3         
//////////////////////////////////////////////////////////////


#include<stdio.h>
int main()
{
    for (int i = 0; i < 4; i++)
        {
            for(int j = 0; j < 4; j++)
            {
                printf("%d \t ",j);
            }
            printf("\n");
        }
                    return 0;
}


Output =

0        1       2       3       
0        1       2       3       
0        1       2       3       
0        1       2       3    
