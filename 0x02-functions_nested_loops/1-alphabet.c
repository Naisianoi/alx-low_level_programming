#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 * Description: prints the alphabet, in lowercase, followed by a new line
 * Return: (0)
 */

void print_alphabet(void)
{
	char letter;

	for (lectter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
