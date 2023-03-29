#include "main.h"

int
function_char(va_list param)
{
	int cant;
	char result = va_arg(param, int);
	char char_array[2];

	char_array[0] = result;
	char_array[1] = '\0';
	cant = _strlen(char_array - 1);

	_putchar(result);
	return (cant);
}
int
function_string(va_list param)
{
	char *string = va_arg(param, char *);
	int iterator = 0;

	if (!string)
	{
		_puts("(null)");
		return (1);
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
