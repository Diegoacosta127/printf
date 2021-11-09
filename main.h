#ifndef OUR_PRINTF
#define OUR_PRINTF
#include <stdarg.h>
#include <stdlib.h>
int _printf(const char *format,...);
int _putchar(char c);
int foo_d(va_list args);
int foo_c(va_list args);
int foo_s(va_list args);


#endif
