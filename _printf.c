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
	/* To create variables */
	va_list list;
	int iterator = 0, lenght = 0;
	int (*function)(va_list); /* Pointer to function */

	va_start(list, format); /* Start the list */
	if (!format) /* To verificate format */
		return (-1);

	while (format[iterator])
	{
		for (; format[iterator] != '%' && format[iterator] != '\0'; iterator++)
			/*While the character is not % and do not reach*/
			lenght += _putchar(format[iterator]);/*Return 1 if can print something*/

		if (format[iterator] == '%')
		{
			/* -- Verify that do not reach the end  --*/
			if (format[iterator + 1] == '\0')
				return (-1);
			/*Return a function, that return is stored in a pointer to function*/
			function = get_format(&format[iterator + 1]);

			if (function != NULL)
			{
				/* - Save the return of the specific function - cant of characters.*/
				lenght += function(list);
				/*Sum bytes of string and extern function for the length*/
			}
			else
			{
				/* -- Print all string and % -- */
				lenght += _putchar(format[iterator]);
			}
			/* -- Next position to continue iterating  --*/
			iterator++;
		}
	}
	va_end(list); /* Release the list */
	return (lenght); /* Return the length of the string */
}
