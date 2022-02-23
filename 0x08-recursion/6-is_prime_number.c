#include "main.h"
/**
 * prime - function checks if integer is prime
 * @n: number to evaluate
 * @c: number to help us check if n is prime or not
 * Return: 1 if the integer is prime and 0 if it is not
 */
int prime(int n, int c)
{
	if (n == 2)
		return (1);
	if (n <= 1)
		return (0);

	if (((n % c) == 0) && (n != c))
		return (0);
	else if (((n % c) != 0) && (c < n))
		return (prime(n, c + 1));
	else
		return (1);
}
/**
 * is_prime_number - function checks if integer is prime
 * @n: number to evaluate
 * Return: 1 if the integer is prime and 0 if it is not
 */
int is_prime_number(int n)
{
	if (n < 0)
		n = n * -1;
	return (prime(n, 2));
}
