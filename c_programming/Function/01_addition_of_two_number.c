//////////////////////////////////////////////////////////////
// Date : 01 March 2024
// Author : Jadhav Aditya Santosh
// Problem Statement : write a program to Print addition of two number using function            
// Concept : Function Program
// Expected Output :     Enter value of num1 = 100
//                       Enter value of num2 = 200
//                       Addition  of 100 & 200 is = 300 
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
            
             int add(int num1 ,int num2 );


        ans = add(num1 , num2);     

            printf("\n Addition  of %d & %d is = %d ",num1,num2,ans);

                     return (0);
} 
     
     int add(int num1 ,int num2 )
{
        int Addition;

      Addition = num1 - num2;


         return(Addition);
}


Output : 
          Enter value of num1 = 100
          Enter value of num2 = 200

         Addition  of 100 & 200 is = 300 
