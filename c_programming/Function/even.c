#include <stdio.h>

int even(int num) {
    if (num % 2 == 0) {
        return 1;  
    } else {
        return 0; 
    }
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (even(number)) 
    {
        printf("%d is an even number \n", number);
    } 
    else
     {
        printf("%d is not an even number \n", number);
     }

    return 0;
}



Output : Enter a number: 100
        100 is an even number 
