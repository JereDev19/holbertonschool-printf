#include "main.h"

/**
 * _puts - own puts func.
 *
 * @s: getting string.
 *
 * Return: 1
 *
 */

int _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}

/**
 * _putchar - print a character.
 *
 * @c: character
 *
 * Return:
 * - 1 if can print.
 * - 0 if cannot print.
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * _strlen - return the cant of chars.
 *
 * @param: string.
 *
 * Return: cant of the string.
 */

int
_strlen(char *param)
{
	int iterator = 0;

	while (param[iterator])
		iterator++;

	return (iterator);
}


/**
 * convert_base - Convert a number to base decimal.
 *
 * @number: number to convert.
 *
 * Return: Length of number
 */

int convert_base(long int number)
{
	int counter = 0;
	long int i = 1;

	if (number == 0)
		return (_putchar('0'));

	if (number < 0)
	{
		_putchar('-');
		number = -number;
		counter++;
	}
	/* Recorremos el largo del numero utilizando potencias de 10*/
	for (; i <= number; i *= 10)
		counter++;

	/**
	 * - Por el <= entra al for lo que provoca que se haga otra potencia.
	 * - Por eso le sacamos un 0.
	 */

	i /= 10;

	/*
	 * Dividimos el numero original entre potencias y le vamos sacando 0
	 * asi se pueden ir dividiendo, a su vez, obtenemos los digitos de
	 * izquierda a derecha.
	 **/
	for (; i > 0; i /= 10)
		_putchar(((number / i) % 10) + '0');

	/*Retornamos el largo*/
	return (counter);
}
