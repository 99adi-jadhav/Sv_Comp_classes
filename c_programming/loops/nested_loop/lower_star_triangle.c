#include<stdio.h>
    int main()
 {
       int col;
            int rows;
                for(rows=1;rows<5;rows++)
                    {
                        for(col=1;col<5;col++)
                            { 
                                if(rows == col || rows > col)
                                {
                            printf("* \t");
                                }
                            else
                                {
                                    printf("\t");
                                }
                            }
                                printf("\n");
                   }
                    return(0);
    }
    


Output =
* 
*       * 
*       *       * 
*       *       *       * 