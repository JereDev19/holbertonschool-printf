#ifndef _main_h_
#define _main_h_
#include <stdarg.h>
#include <unistd.h>

/*Principal function*/
int _printf(const char *format, ...);

/**
 * struct structure - struct that contain format
 * @f: Pointer function
 * @formatChar: format to char
 *
 */

typedef struct structure
{
	char formatChar;
	int (*f)(va_list);
} op_f;


/* Get the format */
int (*get_format(const char *))(va_list);

/* Mandatory functions */
int function_char(va_list param);
int function_string(va_list param);
int function_percent(va_list param);
int function_integer(va_list param);
int function_decimal(va_list param);

/* Advanced functions */
int function_unsigned(va_list param);

/* Auxiliary functions */
int _puts(char *);
int _putchar(char);
int _strlen(char *);
int _putchar(char c);
int convert_base(long int);

#endif
