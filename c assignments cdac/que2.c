#include <stdio.h>

int main() {

    printf("Size of short int: %zu bytes\n", sizeof(short int));
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of long int: %zu bytes\n", sizeof(long int));
    printf("Size of long long int: %zu bytes\n", sizeof(long long int));
    printf("Size of unsigned int: %zu bytes\n", sizeof(unsigned int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of long double: %zu bytes\n", sizeof(long double));
    printf("Size of char: %zu bytes\n", sizeof(char));

    return 0;
}

/*
On most modern 64-bit machines (like Windows/Linux):

short int and char do NOT have same size.
int and unsigned int usually have the SAME size (4 bytes).

Example common output:
short int = 2 bytes
int = 4 bytes
long int = 8 bytes
long long int = 8 bytes
unsigned int = 4 bytes
float = 4 bytes
double = 8 bytes
long double = 16 bytes
char = 1 byte

Answers:
1) int and unsigned int usually have same size.
   long int and long long int may also have same size (8 bytes).

2) unsigned int does NOT have different size than int.
   They have same size, only range is different.
*/