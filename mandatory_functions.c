#include "main.h"

int
function_char(va_list param)
{
	char result = va_arg(param, int);

	_putchar(result);
	return (1);
}
int
function_string(va_list param)
{
	char *string = va_arg(param, char *);
	int iterator = 0;

	if (!string)
	{
		_puts("(null)");
		return (6);
	}

	for (; string[iterator] != '\0'; iterator++)
		_putchar(string[iterator]);
	return (iterator);
}

int
function_percent(va_list param __attribute__((unused)))
{
	char percent = '%';

	_putchar(percent);
	return (1);
}
