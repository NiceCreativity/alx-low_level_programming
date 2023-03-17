#include <stdio.h>

/**
 * main - program to print the size of various types of a computer files
 *
 * Return: 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)", sizeof(char));
	printf("size of int: %lu byte(s)", sizeof(int));
	printf("Size of a long int: %lu byte(s)", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)", sizeof(long int));
	printf("Size of a float: %lu bytes(s)", sizeof(float));
	return (0);
}
