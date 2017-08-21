#include "primes.hpp"

/*The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/


LargestPrimeFactors::LargestPrimeFactors(unsigned long long number) : 
  m_factors()
{
   for (unsigned long long i = 3; i<number; i=i+2)
   {
     if ((number % i == 0) && isPrime(i))
     {
        m_factors.push_back(i);   
        std::cout << *this;

        unsigned long long prime = number/i;
        std::cout << "Checking if " << prime << " is a candidate" << std::endl;
        if (isPrime(prime))
        {
          m_factors.push_back(prime);
          std::cout << *this;
          break;
        }
     }
   }    
}

bool LargestPrimeFactors::isPrime(unsigned long long number)
{
   for (unsigned long long i = 2; i<number; i++)
   {
     if (number % i == 0)
     {
       return false;   
     }
   }
   return true;
}

std::ostream& operator<<(std::ostream& os, LargestPrimeFactors& factors)  
{
  for (std::list<unsigned long long>::const_iterator it=factors.m_factors.begin(); 
       it != factors.m_factors.end(); ++it)
  {
    os << *it << " ";
    os << std::endl;
  }
  os << std::endl;
  return os;  
} 

LargestPrimeFactors::~LargestPrimeFactors()
{
    
}

int answer()
{
    LargestPrimeFactors test(600851475143);
    std::cout << test;
    
    return 6 * 7;
}


