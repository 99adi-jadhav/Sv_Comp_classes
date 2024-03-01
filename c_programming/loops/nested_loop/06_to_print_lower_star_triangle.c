//////////////////////////////////////////////////////////////
// Date : 01 March 2024
// Author : Jadhav Aditya Santosh
// Problem Statement : to print lower triangle in * format...!
// Concept : loops
// Expected Output :  * 
//                    *      * 
//                    *      *      * 
//                    *      *      *      * 
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
                                if(rows == col || rows > col)
                                {
                            printf("* \t");
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
* 
*       * 
*       *       * 
*       *       *       * 
