#include <unistd.h>

/**
 * _putchar - writes the character c to studo
 * @c: The charcter to print
 *
 * Return: On scccess1.
 * On error, -1 is returned, and error is set appropriately.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
