#include "main.h"

/**
 * len_int - calculate length of int
 * @ap: int
 * Return:int
 */
int len_int(int ap)
{
	int len = 0;

	while (ap > 0)
	{
		ap /= 10;
		len++;
	}
	return (len);
}
