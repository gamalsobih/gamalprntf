#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    _printf("hello % hello /n");
    _printf("hello %");
    _printf("% hello/n");
    _printf(NULL);
    _printf("");
    _printf("%");
    _printf("hello %hello");
    _printf("%z");
    _printf("% c" ,'a');
    _printf("hello %hello");
    _printf("%s");
    _printf("hello","world");
    return (0);
}
