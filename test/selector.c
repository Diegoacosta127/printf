#include "main.h"
/**
 * selector - Selects which foo to call
 * @str: is the str we get from the function _printf
 * that is walking.
 * @ap: the argument pointer received from _printf
 * Return: returns how many times a foo was called
 */

/**
 * We need to write here a function that we will call when
 * the _printf function finds a (c, s, d or i). And that will return
 * the correct call to the function we need to use for the specific case.
 *
 * Therefore, we can just define a struct of array based on the blueprint
 * defined in the main.h file, which holds arrays with two parameters.
 * In the first parameter, you have the character that will be passed,i
 *  and on the second one,
 * the function that should be called.
 */


int selector(char str, va_list ap)
{
	unsigned int i, count = 0;

	all_cases cases[] = {
		{'c', function_c},
		{'s', function_s},
		{'d', function_d},
		{'i', function_i}
	};
	/**
	 * while cases[] evaluated in i, for the "char c" defined in the
	 * manin.h struct is different from NULL, then go on.
	 */
	for (i = 0; cases[i].c != 0; i++)
	{
		if (cases[i].c == str)
		{
			/**
			 * if the first arg of the struct
			 * matches what comes from the _printf,
			 * then call the corresponding foo.
			 */
			count += cases[i].f(ap);
			return (count);

			/** Do we need to return a counter? */
		}
	}
return (0);
}



