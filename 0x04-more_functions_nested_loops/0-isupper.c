#include "main.h"
/**
* _isupper - checks for uppercase character
* @c: Variable text
* Return: Always 0.
*/
int _isupper(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
