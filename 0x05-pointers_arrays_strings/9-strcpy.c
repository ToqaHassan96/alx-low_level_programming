#include "main.h"

/**
 * *_strcpy - copies he string pointed to by src
 * @dest: chat type string
 * @scr: chat type string
 * Description: copy the string pointed to by pointer 'scr' to
 * the buffer pointed to by 'dest'
 * Return: Pointer to 'dest'
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = scr[i];
	} while (scr[i] != '\0')

	return (dest);
}
