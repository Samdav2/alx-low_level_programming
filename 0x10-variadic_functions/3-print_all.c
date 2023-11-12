#include "variadic_functions.h"
/**
 * print_all - c program that prints different type of argurment
 * @format: The format of the argumen
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list pointer;
	int i = 0;
	char *str;

	va_start(pointer, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(pointer, int));
				break;
			case 'i':
				printf("%d", va_arg(pointer, int));
				break;
			case 'f':
				printf("%f", va_arg(pointer, double));
				break;
			case 's': 
				str = va_arg(pointer, char *);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
				break;
			default:
				break;
		}

		if ((format[i + 1] != '\0') && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
			printf(", ");

		i++;
	}

	printf("\n");
	va_end(pointer);
}
