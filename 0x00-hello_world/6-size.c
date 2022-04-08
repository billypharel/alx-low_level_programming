#include <stdio.h>

/**
 *
 *main -Entry point
 *
 *Return: always 0 (Succes)
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of char: %ld byte(s)\n", (unsigned long)sizeof(d));
	prinf("Size of an int: %ld bytes(s)\n", (unsigned long)sizeof(b);
	printf("Size of a long int: %ld byte(s)\n",  (unsigned long)sizeof(c));
	printf("Size of a long long int: %ld bytes(s)\n",  (unsigned long)sizeof(c));
	printf("Size of a float: %ld bytes(s)\n", (unsigned long)sizeof(f));
	return (0);
}
