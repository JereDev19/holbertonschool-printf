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
		for (; format[iterator] != '%' && format[iterator]; iterator++)
			lenght += _putchar(format[iterator]);

		if (format[iterator] == '%')
		{
			iterator++;
			if (!format[iterator])
				return (-1);

			function = get_format(&format[iterator]);

			if (function)
			{
				lenght += function(list); 
				/*Sum bytes of string and extern function*/
			}
			else
			{
				lenght += _putchar(format[lenght]);
			}
		}
	}
	va_end(list);
	return (lenght);
}

