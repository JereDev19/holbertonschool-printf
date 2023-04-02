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
	unsigned int params = va_arg(param, unsigned int);
	unsigned int buffer[100];
	int i = 0, length = 0;

	if (param == 0)
	{
		_putchar('0');
		return (1);
	}
	while (params > 0)
	{
		buffer[i] = params % 2;
		params /= 2;
		i++;
	}
	for (i -= 1; i >= 0; i--)
	{
		_putchar(buffer[i] + '0');
		length++;
	}
	return (length);
}
