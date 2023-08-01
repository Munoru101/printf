#include <stdio.h>
#include "main.h"
/**
 * _putstr - function to print a string
 * @str: pointer to the string
 * Return: Nothing
 */
void _putstr(const char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
}
