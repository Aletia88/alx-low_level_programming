#include <stdio.h>

/**
 * main - Entry point
 * prints all the numbers of base 16 in lower case
 * Return:0
 */
int main(void)
{
for (int i = 0; i < 10; i++)
{
putchar (i + '0');
}
for (int j = 'a'; j <= 'f'; j++)
{
putchar (j);
}
putchar('\n');
return (0);
}
