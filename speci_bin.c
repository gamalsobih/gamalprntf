#include "main.h"

/**
 * speci_int -handling %i
 * @arg: an argument list
 * Return: NULL if error happens or str if not
 */
  int int_to_binary(unsigned int k) {
    if (k == 0 || k == 1) {
        return k;
    }
    return (k % 2) + 10 * int_to_binary(k / 2);
}

char *speci_bin(va_list arg)
{
	char *buffer;
	unsigned int;
  int x =va_arg(arg, unsigned int);
	if( x<0)
		x*=-1;
	bin =int_to_binary(x);

	buffer = malloc(sizeof(int) * 8 + 1);
	 itoa(bin, buffer, 10);
	if (buffer == NULL)
		return (NULL);

	return (buffer);
}
