#include "main.h"

/**
 * function_c - Prints a single char
 * @args_to_print: the format to print
 * Return: Length of printed stuff. One for this foo
 */

int function_c(va_list args_to_print)
{
	/**
	 * Store the va_arg call so it doesn't get incremented
	 * when you use it again
	 */
	int single_char = va_arg(args_to_print, int);
	/**Prints that single char*/
	_putchar(single_char);

	/** returns 1 because its a single char*/
	return (1);
}


