//////////////////////////////////////////////////////////////
// Date : 01 March 2024
// Author : Jadhav Aditya Santosh
// Problem Statement :	Syantax for loop &print 0 to 9...... 
// Concept : loops
// Expected Output : Print First loop 
//					0 
//					1 
//					2 
//					3 
//					4 
//					5 
//					6 
//					7 
//					8 
//					9 
//////////////////////////////////////////////////////////////


#include<stdio.h>
int main()
{
    printf("Print First loop \n");
    int i;
    for(i = 0;i < 10; i++)
    {
        printf("%d \n",i);
    }
    return 0;

}


Output : 
Print First loop 
0 
1 
2 
3 
4 
5 
6 
7 
8 
9 



// #include<stdio.h>

// int main()
// {


// 	printf("First for loop\n");
// 	int i;
// 	for(i = 0; i < 10; i++)
// 	{
// 		printf(" %d ",i);
// 	}

// 	printf("Second for loop\n");
// 	i = 0;
// 	for( ; i < 10; i++)
// 	{
// 		printf(" %d ",i);
// 	}

// 	printf("Third for loop\n");
// 	i = 0;
// 	for( ; i < 10; )
// 	{
// 		i++;
// 		printf(" %d ",i);
// 	}

// 	printf("Fourth for loop\n");
// 	i = 0;
// 	for( ; ; )
// 	{
// 		i++;
// 		if(i<10)
// 		{
// 			printf(" %d ",i);
// 		}
// 		else
// 		{
// 			break;
// 		}
// 	}
// }

	
	
