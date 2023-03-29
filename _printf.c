#include "main.h"

int
_printf(const char *format, ...)
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
			lenght += _putchar(format[iterator]);

		if (format[iterator] == '%')
		{
			if (!format[iterator + 1])
				return (-1);

			function = get_format(&format[iterator + 1]);

			if (function != NULL)
			{
				lenght += function(list);
				iterator++;
				/*Sum bytes of string and extern function*/
			}
			else
			{
				lenght += _putchar(format[lenght]);
				lenght += format[iterator + 1];
			}
			iterator++;
		}
	}
	va_end(list);
	return (lenght);
}

