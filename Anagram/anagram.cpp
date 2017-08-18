#include "anagram.hpp"
#include <iostream>
#include <cassert>

/*
Write a program to generate all potential 
anagrams of an input string.

For example, the potential anagrams of "biro" are

biro bior brio broi boir bori
ibro ibor irbo irob iobr iorb
rbio rboi ribo riob roib robi
obir obri oibr oirb orbi orib
*/

anagram::anagram(void)
{
  
}

std::list<std::string> &anagram::generate(std::string input)
{
  if (input.length() == 1)
  {
    m_anagrams.push_back(input);
  }
  else if (input.length() == 2)
  {
    m_anagrams.push_back(input);
    std::string temp;
    temp.push_back(input[1]);
    temp.push_back(input[0]);
    m_anagrams.push_back(temp);
  }
  else
  {
    for (size_t i=0; i<input.length(); i++)
    {
      std::string temp;
      temp.push_back(input[i]);
      std::string substr(input);
      substr.erase(i,1);
      anagram substrA;
      std::list<std::string> &myList = substrA.generate(substr);
      for (std::list<std::string>::iterator it = myList.begin(); it != myList.end(); ++it)
      {
        std::string element = temp + *it;
        m_anagrams.push_back(element);  
      }
    }
  }  

  assert(factorial(input.length()) == m_anagrams.size());
  return m_anagrams;
}

anagram::~anagram()
{

}

size_t anagram::factorial(size_t n) const
{
  size_t fact=1;
  for (size_t i=n; i>0; i--)
    fact=fact*i;
  return fact;
}

std::ostream& operator<<(std::ostream& os, const anagram& an)  
{
  size_t length = (*(an.m_anagrams.begin())).length();
  int count = 0;
  size_t fact = an.factorial(length-1);
  for (std::list<std::string>::const_iterator it=an.m_anagrams.begin(); it != an.m_anagrams.end(); ++it)
  {
    os << *it << " ";
    count++;
    if ((count % fact) == 0)
      os << std::endl;
  }
  os << std::endl;
  return os;  
} 

int answer()
{
    anagram *my = new anagram();
    my->generate(std::string("a"));
    std::cout << *my;
    delete my;
    
    my = new anagram();
    my->generate(std::string("ab"));
    std::cout << *my;

    my = new anagram();
    my->generate(std::string("abc"));
    std::cout << *my;

    my = new anagram();
    my->generate(std::string("abcd"));
    std::cout << *my;

    my = new anagram();
    my->generate(std::string("abcde"));
    std::cout << *my;

    my = new anagram();
    my->generate(std::string("abcdef"));
    std::cout << *my;


    return 42;
}

