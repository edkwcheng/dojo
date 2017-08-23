#ifndef SMALLEST_INCLUDED
#define SMALLEST_INCLUDED

int answer();

class Smallest
{
public:
   Smallest(){}
   ~Smallest(){}
    
   bool isDivisible(unsigned long num, unsigned long multiple)
   {
      return (num % multiple == 0);
   }
    
   unsigned long getSmallest(unsigned long start, unsigned long end);
    
};
 
#endif

