#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
unsigned long int i = 3, m = 612852475143;
for (; i < 12057; i += 2)
{
while (m % i == 0 && m != i)
m /= i;
}
printf("%lu\n", m);
return (0);
}
