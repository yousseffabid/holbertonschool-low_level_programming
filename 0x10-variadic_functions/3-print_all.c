#include "variadic_functions.h"
/**
 * print_all - prints numbers, followed by a new line.
 * @format: type of the parameter
 * @...: the rest of the parameters
 * Return:void
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j, flag;
	char *s;
	va_list pa;

	i = 0;
	j = 0;
	flag = 0;
	va_start(pa, *format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(pa, int));
				break;
			case 'i':
				printf("%d", va_arg(pa, int));
				break;
			case 'f':
				printf("%f", va_arg(pa, double));
				break;
			case 's':
				s = va_arg(pa, char*);
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
			default:
				flag = i;
		}
		if (format[i + 1] != '\0' && flag != 1)
			printf(", ");
		i++;
	}
	va_end(pa);
	printf("\n");
}
