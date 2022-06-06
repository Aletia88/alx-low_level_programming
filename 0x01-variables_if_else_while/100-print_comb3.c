#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all possible combination of two digits
 * Return: 0
 */
int main(void)
{
int x;
int d = 0;
while (d < 10)
{
x = 0;
while (x < 10)
{
if (d != x && d < x)
{
putchar('0' + d);
putchar('0' + x);
if (x + d != 17)
{
putchar(',');
putchar(' ');
}
}
x++;
}
d++;
}
putchar('\n');
return (0);
}
