#include "main.h"

/**
 * function_char - getting char for func.
 *
 * @param: List of params.
 *
 * Return:
 * 1 if can print.
 * 0 if cannot print.
 */

int function_char(va_list param)
{
	char result = va_arg(param, int);

	return (_putchar(result));
}

/**
 * function_string - print the string.
 *
 * @param: List of params.
 *
 * Return: The cant of string.
 */

int function_string(va_list param)
{
	char *string = va_arg(param, char *);
	int i = 0;

	if (!string)
		return (_puts("(null)"));

	for (; string[i] != '\0'; i++)
		_putchar(string[i]);

	return (i);
}

/**
 * function_percent - print a percent.
 *
 * @param: List of params that not used.
 *
 * Return: 1 if can print.
 */

int function_percent(va_list param __attribute__((unused)))
{
	char percent = '%';

	return (_putchar(percent));
}



int
function_decimal(va_list param)
{
	long int value = va_arg(param, int);
	int returnCount = convert_base(value);

	return (returnCount);
}
