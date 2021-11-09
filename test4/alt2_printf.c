#include "main.h"

/**
 *
 *
 *
 */

int _printf(const char *format, ...)
{
	va_list args_to_print;

	unsigned int walker, j;

	va_start(args_to_print, format);

	/**Check if string exists*/
	if (format == NULL)
	{
		return (-1);
	}
	/** check if format exists only % and nothing after*/
	if (format || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}
	/**then if not null and not % and end of str*/
	for (walker = 0; format && format[walker] != '\0'; walker++)
	{
		/** if no %, just print*/
		if (format[walker] != '%')
		{
			_putchar(format[walker]);
		}
		else if (format[walker] == '%')
		{
			/** if % and %, just prt % */
			if(format[walker] == '%' && format[walker + 1] == '%')
			{
				_putchar('%');
			}




