#include <stdio.h>
#include "variadic_functions.h"
#include "stdarg.h"

/**
  *sum_them_all - adds the sum of the parameters.
  *@n: the first variable to be carcurated the sum from.
*Return:the sum
  */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
	int sum = 0;

	va_list args;

	va_start(args, n);

	for (unsigned int i = 0; i < n; i++)
	{
	sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
	}
}

