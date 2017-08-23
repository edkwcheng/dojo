#include "palindrome.hpp"
#include <iostream>

/* A palindromic number reads the same both ways. 
The largest palindrome made from the product of two 
2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

bool Palindrome::isPalindrome(unsigned long number)
{
   std::string str = std::to_string(number);
   size_t length = str.length();
   if (length % 2 == 0)
   {
     for (size_t i=0; i<length/2; i++)
     {
       if (str[i] != str[length-i-1])
       {
           return false;
       }
     }
     return true;    
   }
   return false;   
}

unsigned long Palindrome::getLargest(unsigned long start, unsigned long end)
{
   unsigned long largest = 0;
   for (unsigned long i=start; i<end; i++)
   {
     for (unsigned long j=start; j<end; j++)
     {
        if (isPalindrome(i*j))
        {
           if ((i*j) > largest)
           {
              largest = i*j;
           }
        }
     }
   }
   return largest;
}

int answer()
{
    Palindrome myPal;
    unsigned long output = myPal.getLargest(100,999);
    std::cout <<  output << std::endl;
    
    return 6 * 7;
}

