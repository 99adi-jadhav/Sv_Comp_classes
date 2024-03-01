//////////////////////////////////////////////////////////////
// Date : 01 March 2024
// Author : Jadhav Aditya Santosh
// Problem Statement : to print lower triangle in 00 format...!
// Concept : loops
// Expected Output :  00 
//                    10      11 
//                    20      21      22 
//                    30      31      32      33 
//////////////////////////////////////////////////////////////



#include<stdio.h>
    int main()
 {
       int col;
            int rows;
                for(rows=0;rows<4;rows++)
                    {
                        for(col=0;col<4;col++)
                            { 
                                if(rows == col || rows > col)
                                {
                            printf(" %d%d \t",rows,col);
                                }
                            else
                                {
                                    printf("\t");
                                }
                            }
                                printf("\n");
                   }
                    return(0);
    }
    


Output =

 00 
 10      11 
 20      21      22 
 30      31      32      33 
