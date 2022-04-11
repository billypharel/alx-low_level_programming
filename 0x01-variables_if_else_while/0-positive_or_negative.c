#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{ 
	int n;

	srand(time(0));
	n= rand() - RAND_max / 2;

	if (n==0)

		printf("Il is zero\n", n);
	else if (n<0)
		printf("Il is negative\n", n);
	else
		printf("Il is positive \n", n);
	return (0);
}



