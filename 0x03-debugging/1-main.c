#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function serves as the entry point of the program.
 *              It prints a message indicating the avoidance of an infinite loop.
 *
 * Return: Always 0 (indicating success)
 */
int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	/*
	 * while (i < 10)
	 * {
	 *	putchar(i);
	 *	i++;
	 * }
	 */

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
