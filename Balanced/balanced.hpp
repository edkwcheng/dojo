#ifndef BALANCED_INCLUDED
#define BALANCED_INCLUDED

#include <string>
#include <iostream>

int answer();

class Balanced
{
public:
  Balanced(std::string input);
  ~Balanced();

  bool isBalanced(void);
  friend std::ostream& operator<<(std::ostream& os, Balanced& my);  

private:
  std::string m_str;
};

#endif

