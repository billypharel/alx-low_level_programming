#include <stdio.h>

/**
 *main -Entry point
 *
 *Return: always 0 (Succes)
 */
int main(void)
{
	int 4;
	long int 4;
	long long int 8;
	char 1;
	float 4;

	printf("Size of char: %ld byte(s)\n", (unsigned long)sizeof(1));
	printf("Size of an int: %ld bytes(s)\n", (unsigned long)sizeof(4));
	printf("Size of a long int: %ld byte(s)\n",  (unsigned long)sizeof(4));
	printf("Size of a long long int: %ld bytes(s)\n",  (unsigned long)sizeof(8));
	printf("Size of a float: %ld bytes(s)\n", (unsigned long)sizeof(4));
	return (0);
}
