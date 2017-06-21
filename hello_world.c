#include <stdio.h>

// branch 1 code
int a = 10;
int b = 20;
int a = 10;
int b = 20; 

int add( int a, int b )
{
	return ( a + b );
}

int mul( int a , int b)
{
	return ( a * b );
}

int main(int argc, char **argv)
{
	printf("Hellow World !!");
  printf("multiplication of 2 numbers is : %d \n", mul( a, b ));
	printf("addition is :%d \n", add( a , b ));
	return 0;
}
