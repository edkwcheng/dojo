#include "answer.h"
#include <stdio.h>

/*
The sum of the squares of the first ten natural numbers is,

12 + 22 + ... + 102 = 385

The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)2 = 552 = 3025

Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 - 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

*/

unsigned long sum_of_squares(unsigned long num)
{
  unsigned long sum = 0, i;
  for (i=1; i<=num; i++)
  {
     sum += i*i;   
  }
  return sum;
}

unsigned long square_of_sum(unsigned long num)
{
  unsigned long square = 0, i;
  for (i=1; i<=num; i++)
  {
     square += i;   
  }
  square = square * square;
  return square;
}

int answer(void)
{
    unsigned long difference = square_of_sum(100)-sum_of_squares(100);
    printf("Difference = %lu\n", difference);
    return 6 * 7;
}

