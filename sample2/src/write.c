#include <write.h>
#include <stdio.h>
#include <stdarg.h>

int write(string_t fmt, ...)
{
	va_list args;
	int res = vprintf(fmt, args);
	return res;
}

int writeln(string_t fmt, ...)
{
	va_list args;
	int res = vprintf(fmt, args);
	putchar('\n');
	return res;
}

