//////////////////////////////////////////////////////////////
// Date : 01 March 2024
// Author : Jadhav Aditya Santosh
// Problem Statement : to print 11 format diagonal Matrix....!
// Concept : loops
// Expected Output :    11 
//                              22 
//                                    33 
//                                          44
//////////////////////////////////////////////////////////////




#include<stdio.h>
    int main()
 {
    int col;
            int rows;

                for(rows=1;rows<5;rows++)
                    {
                        for(col=1;col<5;col++)     
                { 
                    if(rows == col)
                    {
                   printf("%d%d \t",col,rows);
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

  11 
        22 
                33 
                        44 
