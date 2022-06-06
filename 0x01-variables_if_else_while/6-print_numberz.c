#include <stdio.h>
/**
 * main - main entry block
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
int d = 0;
while (d< 10)
{
putchar(48 + d);
d++;
}
putchar('\n');
return (0);
}
