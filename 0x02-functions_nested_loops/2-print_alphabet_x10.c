#include "main.h"

/**
 * print_alphabet_x10 - prints the alpha 10 times
 */
void print_alphabet_x10(void)
{
	char la;
	int ten;

	for (ten = 0; ten <= 9; ten++)
	{
		for (la = 'a'; la <= 'z'; la++)
			_putchar(la);
		_putchar('\n');
	}
}
