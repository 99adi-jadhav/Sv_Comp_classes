#include <stdio.h>

int main()
 {
     for (int i = 1; i <= 5; i++) 
    {
        if (i == 4) {
            printf("Break the loop = %d\n", i);
            break;
        }
        printf("i = %d\n", i);
    }
    return 0;
}


Output =
i = 1
i = 2
i = 3
Break the loop = 4
