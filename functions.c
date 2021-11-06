#include "main.h"
/**
  * _strlen - length of a string
  * @s: pointer to char
  * Return: length of a string
  */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
