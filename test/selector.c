#include "main.h"
#include <stdarg.h>

/**
 * selector - Selects which foo to call
 * @str: is the str we get from the function _printf
 * Return: returns how many times a foo was called
 */



int (*selector(char str))(va_list)
{
	unsigned int i;

	all_cases cases[] = {
		{'c', function_c},
		{'s', function_s},
		{'d', function_d},
		{'i', function_i},
		{0, NULL}
	};
	/**
	 * while cases[] evaluated in i, for the "char c" defined in the
	 * manin.h struct is different from NULL, then go on.
	 */
	for (i = 0; cases[i].c != 0; i++)
	{
		if (str == cases[i + 1].c)
		{
			/**
			 * if the first arg of the struct
			 * matches what comes from the _printf,
			 * then call the corresponding foo.
			 */
			return (cases[i].f);

			/** Do we need to return a counter? */
		}
	}
return (0);
}
