#include<stdio.h>
int main()
{
    for (int i = 0; i < 4; i++)
        {
            for(int j = 0; j < 4; j++)
            {
                printf("%d%d \t ",i,j);
            }
            printf("\n");
        }
                    return 0;
}

Output =
00       01      02      03      
10       11      12      13      
20       21      22      23      
30       31      32      33      
