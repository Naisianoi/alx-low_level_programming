#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the alphabet in lowercase,uppercase and newline
 * Return: (0)
 */

int main(void)
{
	char ch;
	char CH;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar (ch);
	}
	for (CH = 'A' ; CH <= 'Z' ; CH++)
	{
		putchar (CH);
	}
	puchar ('\n');

	return (0);
}
