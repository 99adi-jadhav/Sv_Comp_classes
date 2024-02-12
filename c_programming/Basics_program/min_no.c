#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter your first num:\n");
    scanf("%d",&num1);

printf("Enter your second number num:\n");
    scanf("%d",&num2);

    if(num1<num2){

       printf("first number is min\n");

    }
    else if(num1>num2){
       
       printf("your second number is min\n");
    
    }

    else{

        printf("both are equal\n"); 

    }
        return 0;

}
