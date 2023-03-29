#include "main.h"

/**
 * _puts - own puts func.
 *
 * @s: getting string.
 *
 * Return: 1
 *
 */

int _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}

/**
 * _putchar - print a character.
 *
 * @c: character
 *
 * Return:
 * - 1 if can print.
 * - 0 if cannot print.
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * _strlen - return the cant of chars.
 *
 * @param: string.
 *
 * Return: cant of the string.
 */

int
_strlen(char *param)
{
	int iterator = 0;

	while (param[iterator])
		iterator++;

	return (iterator);
}
