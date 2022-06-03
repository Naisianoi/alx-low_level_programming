#include<stdio.h>

/**
 * main - Entry point of program.
 * Description: Prints size of various types on computer.
 * Return: 0
*/

int main(void)
{
	long int x;
	long long int y;

	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(x));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(y));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
