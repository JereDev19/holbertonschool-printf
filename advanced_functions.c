#include "main.h"

/**
 * function_unsigned - Convert an unsigned integer to binary.
 *
 * @param: Indefinite number of params.
 *
 * Return: Length of number in binary.
 */

int function_unsigned(va_list param)
{
	char *rest = NULL;
	int i = 0, j = 0;
	unsigned int params;

	rest = (char *)malloc(sizeof(char) * 64);
	if (!rest)
		return (-1);

	params = va_arg(param, unsigned int);

	while (params > 0)
	{
		rest[i] = ((params % 2) + '0');
		params /= 2;
		i++;
	}

	rest[i] = '\0';

	for (j = i - 1; j >= 0; j--)
		_putchar(rest[j]);

	free(rest);
	return (i);
}
