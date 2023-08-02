#include <stdio.h>
#include "main.h"
#include <stdint.h>
/**
 * _putptr - function that prints a pointer address
 * @ptr: pointer to print
 * Return: Number of chars printed
 */
int _putptr(void *ptr)
{
	uintptr_t address = (uintptr_t)ptr;
	int char_num = 0;

	_putchar('0');
	_putchar('x');
	char_num += 2;
	char_num += _puthex(address, 0);
	return (char_num);
}
