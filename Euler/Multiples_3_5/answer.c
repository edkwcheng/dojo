#include "answer.h"
#include <stdio.h>

/*If we list all the natural numbers below 10 that are multiples of 3 or 5, 
we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000
*/

int isMultiple(int num, int multiple)
{
  int res = num/multiple;
  return (multiple*res == num) ? 1 : 0;
}

int answer(void)
{
  long i;
  long sum = 0;
  for (i=0; i<1000; i++)
  {
    if (isMultiple(i, 3) || isMultiple(i, 5))
    {
      sum+=i;
    }
  }
  printf("Sum = %lu\n", sum);
  return 42;
}

