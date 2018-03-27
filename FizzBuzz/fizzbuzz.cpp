#include "fizzbuzz.hpp"
#include <stdio.h>

/* Write a program that prints the numbers from 1 to 100.
But for multiples of three print "Fizz" instead of the
number and for the multiples of five print "Buzz". For
numbers which are multiples of both three and five
print "FizzBuzz".

Sample output:

1
2
Fizz
4
Buzz
Fizz
7
8
Fizz
Buzz
11
Fizz
13
14
FizzBuzz
16
17
Fizz
19
Buzz
... etc up to 100

*/


int answer()
{
    
    for (int i=1; i<=100; i++)
    {
        bool isFizzOrBuzz = false;
        
        if ((i % 3) == 0)
        {
            printf("Fizz");
            isFizzOrBuzz = true;
        }
        
        if ((i % 5) == 0)
        {
            printf("Buzz");   
            isFizzOrBuzz = true;
        }
        
        if (!isFizzOrBuzz)
        {
           printf("%d",i);
              
        }
        printf("\n");
        
    }
    
    return 6 * 7;
}

