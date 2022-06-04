#include <stdio.h>

/**
 * main - Enrty point
 * Description: prints the alphabet in lowercase
 * Return: (0)
*/

int main(void)
{
	char alphabets;

	for (alphabets = 'a' ; alphabets <= 'z' ; alphabets++)
	{
		putchar (alphabets);
	}
	putchar ('\n');

	return (0);
}
