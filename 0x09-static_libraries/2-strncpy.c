#include "main.h"
/**
 * _strncpy - copy from src to dst
 * @dest: parametre
 * @src: parametre
 * @n: parametre
 * Return: string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
