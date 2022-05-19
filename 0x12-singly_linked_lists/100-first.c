#include <stdio.h>

void printfirst(void) __attribute__ ((constructor));

/**
 * printfirst - print before main
 *
 * Return: void
 */

void printfirst(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}

