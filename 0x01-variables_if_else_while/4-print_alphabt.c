#include <stdio.h>
/**
 * main - main entry
 * Description: print alphabet without e and q
 * Return: 0
 */
int main(void)
{
char d = 'a';
while (d <= 'z')
{
if (d != 'e' && d != 'q')
{
putchar(d);
}
d++;
}
putchar('\n');
return (0);
}
