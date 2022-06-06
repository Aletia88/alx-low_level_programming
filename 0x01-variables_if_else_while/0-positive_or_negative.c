#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - main entry
 *check if the number is postive or negative or zero
 *Return: Always 0(success)
 **/
int main()
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
scanf("%d", &n);
if (n > 0)
{
printf("%d is postive\n", n);
}
if (n < 0)
{
printf("%d is negative\n", n);
}
if (n == 0)
{
printf("%d is zero\n", n);
}
return (0);
}
