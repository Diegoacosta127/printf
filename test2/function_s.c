#include "main.h"

/**
 * function_s - prints a string
 * @args_to_print:  the arg to print
 *
 * Return: Returns how many characters were printed
 */

int function_s(va_list args_to_print)
{
	unsigned int i, ctr = 0;
	/** ptr to store the value of va_arg*/
	char *prt_str;

	/**
	 * Set prt_str to the value returned by
	 * va_arg().
	 */
	prt_str = va_arg(args_to_print, char*);
	/**
	 * In the case of printing a string, the value of
	 * char* is a string that is walked and printed character by character.
	 */
	for (; prt_str[i] != 0; i++)
	{
		_putchar(prt_str[i]);
		ctr++;
	}



return (ctr);
}
