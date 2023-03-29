#include "main.h"

/**
 * _printf - This function is simulate de printf function in c.
 *
 * @format: Format to print in the output.
 *
 * Return: lenght of the string.
 */

int _printf(const char *format, ...)
{
	va_list list;
	int iterator = 0, lenght = 0;
	int (*function)(va_list);

	va_start(list, format);

	if (!format)
		return (-1);

	while (format[iterator])
	{
		for (; format[iterator] != '%' && format[iterator] != '\0'; iterator++)
			/* - Putchar return 1 if can print something - */
			lenght += _putchar(format[iterator]);
		if (format[iterator] == '%')
		{
			if (format[iterator + 1] == '\0')
				return (-1);

			function = get_format(&format[iterator + 1]);

			if (function != NULL)
			{
				/* - Save the return of the specific function - cant of characters.*/
				lenght += function(list);
				iterator++;
				/*Sum bytes of string and extern function*/
			}
			else
			{
				/* -- Print all string + % -- */
				lenght += _putchar('%');
				/* -- Print the next position - following the porcentaje -- */
				lenght += format[iterator + 1];
			}
			iterator++;
		}
	}
	va_end(list);
	return (lenght);
}

