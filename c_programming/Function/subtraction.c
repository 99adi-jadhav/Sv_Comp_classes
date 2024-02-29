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
            
             int sub(int num1 ,int num2 );


        ans = sub(num1 , num2);     

            printf("\nsubstraction  of %d & %d is = %d ",num1,num2,ans);

                     return (0);
} 
     
     int sub(int num1 ,int num2 )
{
        int substraction;

      substraction = num1 - num2;


         return(substraction);
}

Output :        Enter value of num1 = 100
                Enter value of num2 = 50

                substraction  of 100 & 50 is = 50
