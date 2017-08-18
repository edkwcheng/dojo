#ifndef ANAGRAM_INCLUDED
#define ANAGRAM_INCLUDED

#include <string>
#include <list>
#include <iostream>

int answer();

class anagram
{
public:
  anagram(void);
  ~anagram();
  
  std::list<std::string> &generate(std::string input);
  size_t factorial(size_t n) const;
  friend std::ostream& operator<<(std::ostream& os, const anagram& an);  

private:
  std::string m_inputStr;
  std::list<std::string> m_anagrams;
};

#endif

