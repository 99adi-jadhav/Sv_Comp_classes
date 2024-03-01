//////////////////////////////////////////////////////////////
// Date : 01 March 2024
// Author : Jadhav Aditya Santosh
// Problem Statement : to print  in * format matrix....!
// Concept : loops
// Expected Output :  *      *      *      *
//                    *      *      *      *
//                    *      *      *      *
//                    *      *      *      * 
//////////////////////////////////////////////////////////////



#include<stdio.h>
    int main()
        {
           int i;
              for(i = 0;i < 4; i++)
                    {
                        {
                             for(int j = 0;j < 4; j++)
                             printf(" * \t ");
                        }

                            printf("\n");
                    }
                            
                        return(0);
        }

Output :
 *        *       *       *      
 *        *       *       *      
 *        *       *       *      
 *        *       *       *  
