#include <stdio.h>
/**
 * main - Entry point
 * alphabets in uppercase and lowercase
 * Return: Always 0 (success)
 */

int main(void)
{
	char alphabet_upper = 'A';
	char alphabet_lower = 'a';

	while (alphabet_lower <= 'z')
	{
		putchar(alphabet_lower);
		alphabet_lower++;
	}
	while (alphabet_upper <= 'Z')
	{
		putchar(alphabet_upper);
		alphabet_upper++;
	}
	putchar('\n');
	return (0);
}
