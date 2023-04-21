#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
int getLength(char *s);
int _putchar(char c);
int checkForNull(unsigned int n, va_list args);
void print_all(const char * const format, ...);
int determiner(char c, va_list args);


#endif /* VARIADIC_H */
