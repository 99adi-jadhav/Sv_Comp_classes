#include<stdio.h>

int main()
{
    int integer;
    float f;
    double d;
    char c;
    short int st;
    long int li;
    long double ld;

	printf("Size of integer is : %ld\n",sizeof(integer));
	printf("Size of float is : %ld\n",sizeof(f));
	printf("Size of double is : %ld \n",sizeof(d));
	printf("Size of character is : %ld\n",sizeof(c));
	printf("Size of short integer is : %ld\n",sizeof(st));
	printf("Size of long integer is : %ld\n",sizeof(li));
	printf("Size of long double is : %ld\n",sizeof(ld));
    return 0;
}


Output = 
  
Size of integer is : 4
Size of float is : 4
Size of double is : 8 
Size of character is : 1
Size of short integer is : 2
Size of long integer is : 8
Size of long double is : 16
  
