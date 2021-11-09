#include "main.h"

/**
 * function_d - Prints a digit
 * @ap: arguments from variadic fun _printf to be printed
 * Return: lenght of printed
 */
int function_d(va_list ap)
{
	unsigned int j = 0;
	int n = va_arg(ap, int);

	if (n < 0) /** check if n is negative */
	{
		j += _putchar('-'); /** if it is, print a minus sign*/
		n  = -n; /** then make n positive*/
	}
	else if (n == 0)
	{
		j += _putchar('0');
		return (0);
	}
	while (n != 0)
	{
		j += _putchar('0' + (n % 10));
		n /= 10;
	}
return (j);
}
