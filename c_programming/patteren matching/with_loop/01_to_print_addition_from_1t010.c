////////////////////////////////////////////////////////////////////////////////
// Date : 01 March 2024
// Author : Jadhav Aditya Santosh
// Problem Statement : to print addition from 1 to 10.....!
// Concept : loops
// Expected Output :    Addition of all numbers form 1 to 10 numbers is = 55   
/////////////////////////////////////////////////////////////////////////////////



#include<stdio.h>
    int main()
{           
        int i,sum=0;

            for(i=1;i<=10;i++)
                
        {

             sum=i+sum;
        
        }
                 printf("\n Addition of all numbers form 1 to 10 numbers is = %d \n\n",sum);


                  return(0);
}


Output :    Addition of all numbers form 1 to 10 numbers is = 55 
