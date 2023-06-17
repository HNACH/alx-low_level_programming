#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all the alphabets except 'e' and 'q'
 *
 * Return: 0 on success
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'e' && alphabet != 'q')
			putchar(alphabet);
	}
	putchar('\n');

	return (0);
}

