#include<stdio.h>
int main()
{
    int num1,num2,mul;
    printf("Enter The First Number : ");
    scanf("%d",&num1);
    if (num1 % 2 == 0)
    {
        printf("Given Number Is Even Number ");
    }
    else
    {
        printf("Given Number Is Not Even NUmber");
    }
    return 0;
}