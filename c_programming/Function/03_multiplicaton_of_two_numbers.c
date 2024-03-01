//////////////////////////////////////////////////////////////
// Date : 01 March 2024
// Author : Jadhav Aditya Santosh
// Problem Statement : write a program to Print Multiplication of two number using function            
// Concept : Function Program
// Expected Output :     Enter value of num1 = 5
//                       Enter value of num2 = 5
//                       Multiplication  of 5 & 5 is = 25
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
            
             int mul(int num1 ,int num2 );


        ans = mul(num1 , num2);     

            printf("\n Multiplication  of %d & %d is = %d ",num1,num2,ans);

                     return (0);
} 
     
     int mul(int num1 ,int num2 )
{
        int Multiplication;

      Multiplication = num1 * num2;


         return(Multiplication);
}


Output : 
            Enter value of num1 = 5
            Enter value of num2 = 5

            Multiplication  of 5 & 5 is = 25
