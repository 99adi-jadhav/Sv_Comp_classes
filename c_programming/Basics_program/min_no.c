#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter your first number:\n");
    scanf("%d",&num1);

    printf("Enter your second number:\n");
    scanf("%d",&num2);

    if(num1<num2){

       printf("First Number Is Min\n");

    }
    else if(num1>num2){
       
       printf("Second Number Is Minimum\n");
    
    }

    else{

        printf("Both Are Equal\n"); 

    }
        return 0;

}


Output = Enter your first number : 10
         Enter your second number : 10
         Both Are Equal
