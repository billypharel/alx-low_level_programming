#include <stdio.h>
/**
 * main -Entry point
 *
 * Description: print the lowercase alphabet
 * Return: Always 0 (succes/correct)
 */
int main(void)
{
	int c;

        for (c = 0; c < 26; ++c)
        putchar('a' + c);
        putchar('\n');

        return (0);
}
