#include "main.h"
/**
 * swap_int -  swaps the values of two integers
 *@a pointer that takes int value
 *@b pointer of int value
 *Return: Always 0
 */
void swap_int(int *a, int *b)
{
int  temp;
temp = * a;
*a= *b;
*b = temp;
}
