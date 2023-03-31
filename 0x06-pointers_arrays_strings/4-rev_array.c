#include "main.h"
/**
 * _strcmp - copy from src to dst
 * @s1: parametre
 * @s2: parametre
 * Return: the first ascii diff
 */
void reserve_array(int *a, int n)
{
	int i, j, t;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
