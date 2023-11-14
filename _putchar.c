#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
/**
 * print_percent - prints the '%' character.
 * Return: 1.
 **/
int print_percent(void)
{
_putchar('%');
return (1);
}
