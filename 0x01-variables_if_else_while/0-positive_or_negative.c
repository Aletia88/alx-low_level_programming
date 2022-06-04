#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main()
{
  int num;

  /* Input number from user */
  printf("Enter any number: ");
  scanf("%d", &num);


  if(num > 0)
    {
      printf("Number is POSITIVE");
    }
  if(num < 0)
    {
      printf("Number is NEGATIVE");
    }
  if(num == 0)
    {
      printf("Number is ZERO");
    }

  return 0;
}
