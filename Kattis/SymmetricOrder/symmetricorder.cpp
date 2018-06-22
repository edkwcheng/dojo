#include <iostream>
#include <string>
#include <list>

int main()
{
    int numStrs = 0;
    int set = 1;
    std::cin >> numStrs;
    std::cin.ignore(1, '\n');

    while (numStrs > 0)
    {
      std::cout << "SET " << set << "\n";
      std::list<std::string> inputStr;
      std::list<std::string> sortedStr;
      
      for (int i=1; i<=numStrs; i++)
      {
        std::string input;
        std::getline(std::cin, input);
        
        if (i % 2 != 0)
        {
          sortedStr.push_back(input);
        }
        else
        {
          inputStr.push_front(input);
        }
      }
      sortedStr.insert(sortedStr.end(), inputStr.begin(), inputStr.end());
           
      for (std::list<std::string>::iterator iter = sortedStr.begin(); iter != sortedStr.end(); iter++)
      {
        std::cout << *iter << "\n";
      }
      
      std::cin >> numStrs;
      std::cin.ignore(1, '\n');
      set++;
    }
}
