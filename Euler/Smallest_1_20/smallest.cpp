#include "smallest.hpp"
#include <iostream>

/*2520 is the smallest number that can be divided by each of 
the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly
divisible by all of the numbers from 1 to 20?
*/

unsigned long Smallest::getSmallest(unsigned long start, unsigned long end)
{
   unsigned long smallest = 1;
   bool found = false;
   unsigned long i=0;
   while (!found)
   {
     for (i=start; i<=end; i++)
     {
        if (!isDivisible(smallest,i))
        {
           break;
        } 
     }  
     if (i>end)
     {
       found = true;
     }
     else
     {
       smallest++;
     }
   }
   return smallest;
}

int answer()
{
    Smallest test;
    std::cout << test.getSmallest(1,20) << std::endl;
    return 6 * 7;
}

