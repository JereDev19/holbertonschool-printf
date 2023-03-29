#include "main.h"

int
function_char(va_list param)
{
	char result = va_arg(param, int);

	return (_putchar(result));
}

int
function_string(va_list param)
{
	char *string = va_arg(param, char *);
	int i = 0;

	if (!string)
		return (_puts("(null)"));

	for (; string[i] != '\0'; i++)
		_putchar(string[i]);

	return (i);
}

int
function_percent(va_list param __attribute__((unused)))
{
	char percent = '%';

	return (_putchar(percent));
}
