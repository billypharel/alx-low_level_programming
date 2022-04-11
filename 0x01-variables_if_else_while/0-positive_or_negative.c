#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - prints a random number and state whether
 *      it is positive,negative, or zero
 *
 *Return: Always 0 (Success)
 */
int main(void)
{ 
	int n;

	srand(time(0));
	n= rand() - RAND_max / 2;

	if (n>1)

		printf("Id is positive\n", n);
	else if (n<0)
		printf("Id is negative\n", n);
	else

		printf("Id is zero\n", n);
	
	return (0);
}



