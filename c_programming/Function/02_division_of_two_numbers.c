//////////////////////////////////////////////////////////////
// Date : 01 March 2024
// Author : Jadhav Aditya Santosh
// Problem Statement : write a program to Print Division of two number using function            
// Concept : Function Program
// Expected Output :     Enter value of num1 = 100
//                       Enter value of num2 = 2
//                       Division  of 100 & 2 is = 50
//////////////////////////////////////////////////////////////





#include<stdio.h>

        int main()
    {
            int num1;  
            int num2;
            int ans=0;
        
        printf("Enter value of num1 = ");
            scanf("%d",&num1);

         printf("Enter value of num2 = ");
            scanf("%d",&num2);
            
             int div(int num1 ,int num2 );


        ans = div(num1 , num2);     

            printf("\n Division  of %d & %d is = %d ",num1,num2,ans);

                     return (0);
} 
     
     int div(int num1 ,int num2 )
{
        int Division;

      Division = num1 / num2;


         return(Division);
}


Output :  Enter value of num1 = 100
          Enter value of num2 = 2

          Division  of 100 & 2 is = 50
