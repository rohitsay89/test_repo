#include <stdio.h>

int a = 500;
int b = 10;
int c = 20;
int d = 40;

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
	printf("addition is :%d \n", add( c , d ));
	return 0;
}
