#ifndef PRIMES_INCLUDED
#define PRIMES_INCLUDED

#include <list>
#include <iostream>

int answer();

class LargestPrimeFactors
{

public:

    LargestPrimeFactors(unsigned long long number);
    ~LargestPrimeFactors();
    
    bool isPrime(unsigned long long number);
    
    friend std::ostream& operator<<(std::ostream& os, LargestPrimeFactors& my);
    
    std::list<unsigned long long> m_factors;
};

#endif

