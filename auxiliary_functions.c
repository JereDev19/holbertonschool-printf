#include "main.h"

int
_puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	putchar('\n');
	return (0);
}

int
_putchar(char c)
{
	return (write(1, &c, 1));
}

int
_strlen(char *param)
{
	int iterator = 0;

	while (param[iterator])
		iterator++;

	return (iterator);
}
