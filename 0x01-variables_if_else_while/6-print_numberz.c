#include <stdio.h>
/**
 * main - entry point
 * prints numbers 0-9 without using putchar twice
 * Return: 0 (success)
 */
int main(void)
{
int i = '0';
while (i <= '9')
{
putchar(i);
i++;
}
putchar('\n');
return (0);
}
