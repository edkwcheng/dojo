#include "balanced.hpp"
#include <deque>

/*

Write a program to determine if the the parentheses (),
the brackets [], and the braces {}, in a string are balanced.

For example:

{{)(}} is not balanced because ) comes before (

({)} is not balanced because ) is not balanced between {}
     and similarly the { is not balanced between ()

[({})] is balanced

{}([]) is balanced

{()}[[{}]] is balanced
*/

Balanced::Balanced(std::string input) : m_str(input)
{
}

Balanced::~Balanced()
{
}

bool Balanced::isBalanced(void) 
{
  std::deque<char> tokens;
  for (std::string::iterator it=m_str.begin(); it!=m_str.end(); ++it)
  {
    if ( (*it == '{') || (*it == '(') || (*it == '[') )
    {
      tokens.push_front(*it);
    }  
    else if (tokens.empty())
    {
      return false;
    }
    else     
    {
      char temp = tokens.front();
      std::cout << tokens.front() << std::endl;
      switch (temp)
      {
        case '{':
        {
          if (*it != '}')
            return false;
          break;
        }
        case '(':
          if (*it != ')')
            return false;
          break;
        case '[':
          if (*it != ']')
            return false;
          break;
        default: 
          return false;
      }
      tokens.pop_front();
    }
  }
  return true;
}

std::ostream& operator<<(std::ostream& os, Balanced& my)
{
   os << my.m_str << " ";
   if (my.isBalanced())
   {
     os << "True";
   }
   else
   {
     os << "False";
   }
   os << std::endl;   

   return os;
}

int answer()
{
  Balanced *str = new Balanced(std::string("{{)(}}"));
  std::cout << *str;
  delete str;
  
  str = new Balanced(std::string("({)}"));
  std::cout << *str;
  delete str;
  
  str = new Balanced(std::string("[({})]"));
  std::cout << *str;

  str = new Balanced(std::string("{}([])"));
  std::cout << *str;
  
  str = new Balanced(std::string("{()}[[{}]]"));
  std::cout << *str;

  return 42;
}

