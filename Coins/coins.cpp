#include "coins.hpp"

/*
There are four types of common coins in US currency:
  quarters (25 cents)
  dimes (10 cents)
  nickels (5 cents) 
  pennies (1 cent)
  
There are 6 ways to make change for 15 cents:
  A dime and a nickel;
  A dime and 5 pennies;
  3 nickels;
  2 nickels and 5 pennies;
  A nickel and 10 pennies;
  15 pennies.

How many ways are there to make change for a dollar
using these common coins? (1 dollar = 100 cents).
*/

int answer()
{
    int ways = 0;
    int amount = 100;
    for (int quarter = 0; quarter <= amount; quarter += 25)
    {
      if (quarter == amount)
      {
        ways++;
        break;
      }
      for (int dime =0; dime <= amount; dime += 10)
      {
        if ((quarter + dime) == amount)
        {
          ways++;
          break;
        }
        for (int nickel =0; (dime + nickel) <= amount; nickel += 5)
        {
          if ((quarter + nickel + dime) == amount)
          {
            ways++;
            break;
          }
          for (int penny = 0; (dime + nickel + penny) <= amount; penny++)
          {
            if ((quarter + dime + nickel + penny) == amount)
            {
              ways++;
              break;
            }
          }
        }
      }
    }
    
    return ways;
}

