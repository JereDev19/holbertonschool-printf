#include "main.h"

int
(*get_format(const char *formatParam))(va_list)
{
	op_f format[] = {
		{ 'c', function_char },
		{ 's', function_string },
		{ '%', function_percent },
		{ '\0', NULL },
	};

	int i = 0;

	for (; format[i].formatChar; i++)
	{
		if (*formatParam == format[i].formatChar)
			return (format[i].f);
	}
	return (NULL);
}
