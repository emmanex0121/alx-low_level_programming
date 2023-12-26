#include "main.h"

/**
 * _isalpha - this checks for alphabet character
 * @c: this is the character to be checked
 * Return: 1 or alphabet character or return 0 for non alphabet character
 */

int _isalpha(int c)
{

if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
