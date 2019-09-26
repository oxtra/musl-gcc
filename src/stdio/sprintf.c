#include <stdio.h>
#include <stdarg.h>

__attribute__ ((__target__ ("no-sse")))
int sprintf(char *restrict s, const char *restrict fmt, ...)
{
	int ret;
	va_list ap;
	va_start(ap, fmt);
	ret = vsprintf(s, fmt, ap);
	va_end(ap);
	return ret;
}
