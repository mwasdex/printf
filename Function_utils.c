#include "main.h"

/**
* is_printable - Evaluates if a char is printable
* @c: Char to be evaluated.
*
* Return: 1 if c is printable 0 otherwise
*/

int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}

/**
* append_hexa_code - Append ascci in hexadecimal code to array
* @array: Array of chars.
* @i: Index at which to start appending.
* @ascii: ASSCI CODE.
*
* Return: Always 3
*/

int append_hexa_code(char ascii, char array[], int i)
{
	char map_to[] = "0123456789ABCDEF";
	/* The hexa format code is always 2 digits long */
	if (ascii < 0)
		ascii *= -1;

	array[i++] = '\\';
	array[i++] = 'x';

	array[i++] = map_to[ascii / 16];
	array[i] = map_to[ascii % 16];

	return (3);
}

/**
* is_digit - Verifies if a char is a digit
* @c: Char to be evaluated
*
* Return: 1 if c is a digit, 0 otherwise
*/

int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
* convert_size_number - Casts a number to the specified size
* @numero: Number to be casted.
* @size: Number indicating the type to be casted.
*
* Return: Casted value of numero
*/

long int convert_size_number(long int numero, int size)
{
	if (size == S_LONG)
		return (numero);
	else if (size == S_SHORT)
		return ((short)numero);

	return ((int)numero);
}

/**
* convert_size_unsgnd - Casts a number to the specified size
* @numero: Number to be casted
* @size: Number indicating the type to be casted
*
* Return: Casted value of numero
*/

long int convert_size_unsgnd(unsigned long int numero, int size)
{
	if (size == S_LONG)
		return (numero);
	else if (size == S_SHORT)
		return ((unsigned short)numero);

	return ((unsigned int)numero);
}
