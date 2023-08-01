#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _puthex - function that prints an unsigned int in hexa
 * @num: Unsigned int argument
 * @uppercase: If 1, use uppercase A-F, if 0 use lowercase
 * Return: Number of characters printed
 */
int _puthex(unsigned int num, int uppercase)
{
	int index = 0;
	int i, char_num = 0;
	char buffer[20];
	char hexa[16] = "0123456789abcdef";

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	if (uppercase)
	{
		for (i = 0; i < 16; i++)
		{
			hexa[i] = toupper(hexa[i]);
		}
	}
	while (num > 0)
	{
		buffer[index++] = hexa[num % 16];
		num /= 16;
	}
	for (i = index - 1; i >= 0; i--)
	{
		_putchar(buffer[i]);
		char_num++;
	}
	return (char_num);
}
