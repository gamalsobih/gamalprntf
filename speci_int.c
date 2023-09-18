#include "main.h"

/**
 * speci_in - converts a string to a pointer
 * @arg: an argument list
 * Return: NULL if error happens or str if not
 */

char *speci_int(va_list arg)
{
	
	char *buffer ;
	buffer=malloc(sizeof(int)*8+1);
	 itoa (va_arg(arg, int),buffer,10);
	if (buffer == NULL)
		return (NULL);

	return (&buffer);
}
