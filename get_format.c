#include "main.h"

int
(*get_format(const char *formatParam))(va_list)
{
	op_f format[] = {
		{ 'c', function_char},
		{ 's', function_string },
		{ '%', function_percent },
		{ '\0', NULL },
	};

	int iterator = 0;

	for (; format[iterator].formatChar; iterator++)
	{
		if (*formatParam == format[iterator].formatChar)
			return (format[iterator].f);
	}
	return (NULL);
}
