#include <stdio.h>
/**
 * main - print all the alphabets except e and q
 *
 * Returns 0
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
