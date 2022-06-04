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
  int num;

  /* Input number from user */
  printf("Enter any number: ");
  scanf("%d", &num);


  if(num > 0)
    {
      printf("%d is postive",&num);
    }
  if(num < 0)
    {
      printf("%d is negative", &num);
    }
  if(num == 0)
    {
      printf("%d is zero",&num);
    }

  return 0;
}
