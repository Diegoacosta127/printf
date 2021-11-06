#include "main.h"
#include <stdarg.h>
#define BUFFER_SIZE 1024
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
  * struct list ap - array of structs
  */
struct list ap[] = {
	{'c', function_c}, {'s', function_s}, {'%', function_por}
};
/**
  * _printf - produces output according to a format
  * @format: the output to be printed
  * Return: number of characters printed
  */
int _printf(const char *format, ...)
{
	int i, j;
	va_list arguments;

	/**
	  * struct list ap - array of structs
	  */
	struct list ap[] = {
		{'c', function_c}, {'s', function_s}, {'%', function_por}
	};
	va_start(arguments, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			for (j = 0; j < 3; j++)
			{
				if (ap[j].c == format[i])
					ap[j].f(va_list);
			}
		}
		else
			_putchar(format[i]);
	}
	va_end(arguments);
	return (0);
}
