#include <stdio.h>
void first(void)  __attribute__((constructor));
/**
 * first - prints before the execution of main function
 * Return: void
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n
			I bore my house upon my back!\n");
}
