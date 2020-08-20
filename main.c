#include <stdio.h>

int main( int argc, char **argv){
	printf("Makefile Warning test!\n");

	unsigned int a = 1;
	const int b = 2;
	int c = 3;

	if( a < c) printf("a is less than c\n");
}

