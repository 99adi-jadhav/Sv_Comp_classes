#include <stdio.h>

int main() {
  
    printf("Print odd numbers between 1 and 10 using a while loop:\n");

    int num = 1;
    while (num <= 10) 
    {
        if (num % 2 != 0) 
        {
            printf("%d\n", num);
        }
        num++;
    }

    return 0;
}
