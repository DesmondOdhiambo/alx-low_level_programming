#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints every other character
 * @str: string
 * Return: nothing
 */

void put2(char *str)
{
	int i = 0;
	while (*(str + i) != '\n')
	{
		if (i % 2 == 0)
			putchar(*(str + 1));
		i++;
	}
	putchar(10);
}
