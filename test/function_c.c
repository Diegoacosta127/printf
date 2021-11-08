#include "main.h"

/**
 * function_c - Prints a single char
 * @a_char: the format to print
 * Return: Length of printed stuff. One for this foo
 */

int function_c(va_list a_char)
{

	char single_char = va_arg(a_char, int);
	/**Prints that single char*/
	_putchar(single_char);

	/** returns 1 because its a single char*/
	return (1);
}


