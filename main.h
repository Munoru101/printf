#ifndef MAIN_H
#define MAIN_H
int _putchar(char c);
void _putstr(const char *str);
int _putint(int num, int flag_plus, int flag_space);
int _putbinary(unsigned int num);
int _putuint(unsigned int num);
int _putoctal(unsigned int num);
int _puthex(unsigned int num, int uppercase);
int _printstr(const char *str, int *char_num);
int _putptr(void *ptr);
int _printf(const char *format, ...);
#endif
