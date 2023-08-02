#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - function that produces output
 * according to a format
 * @format: character string argument
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int char_num = 0;
	char c;
	char *str;
	int num;
	unsigned int unum;
	void *ptr;

	va_start(ap, format);
	while ((c = *format) != '\0')
	{
		if (c == '%')
		{
			format++;
			if (*format == '\0')
				break;
			else if (*format == 'c')
			{
				_putchar(va_arg(ap, int));
				char_num++;
			}
			else if (*format == 's')
			{
				str = va_arg(ap, char *);
				if (str == NULL)
				{
					_putstr("(null)");
					char_num += 6;
				}
				else
				{
					_putstr(str);
					while (*str)
					{
						char_num++;
						str++;
					}
				}
			}
			else if (*format == 'd' || *format == 'i')
			{
				num = va_arg(ap, int);
				char_num += _putint(num);
			}
			else if (*format == 'u')
			{
				unum = va_arg(ap, unsigned int);
				char_num += _putuint(unum);
			}
			else if (*format == 'o')
			{
				unum = va_arg(ap, unsigned int);
				char_num += _putoctal(unum);
			}
			else if (*format == 'x' || *format == 'X')
			{
				unum = va_arg(ap, unsigned int);
				char_num += _puthex(unum, (*format == 'X'));
			}
			else if (*format == 'p')
			{
				ptr = (void *)va_arg(ap, void *);
				char_num += _putptr(ptr);
			}
			else if (*format == '%')
			{
				_putchar('%');
				char_num++;
			}
			else if (*format == 'S')
			{
				str = va_arg(ap, char *);
				if (str == NULL)
				{
					_putstr("(null)");
					char_num += 6;
				}
				else
				{
					_printstr(str, &char_num);
				}
			}
			else if (*format == 'b')
			{
				num = va_arg(ap, unsigned int);
				char_num += _putbinary(num);
			}
			else
			{
				_putchar('%');
				_putchar(*format);
				char_num += 2;
			}
		}
		else
		{
			_putchar(c);
			char_num++;
		}
		format++;
	}
	va_end(ap);
	return (char_num);
}
