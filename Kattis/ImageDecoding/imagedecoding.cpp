#include <iostream>
#include <string>

int main()
{
  int first = 1;
  while (1)
  { 
    int numLines = 0;
    std::cin >> numLines;
    std::cin.ignore(1, '\n');
  
    if (numLines == 0)
    {
      break;
    }
  
    if (!first)
    {
      std::cout << "\n";
    }
    int pixels[numLines];
    for (int i=0; i<numLines; i++)
    {
      pixels[i] = 0;
      std::string input;
      getline(std::cin, input);
    
      char outputChar = input.front();
      unsigned int pos = 0, end = 0;
      do
      {
        pos = input.find_first_of(" ", end);
        end = input.find_first_not_of(" ", pos);
        end = (end < input.size()) ? input.find_first_of(" ", end) : input.size();
        int num = std::stoi(input.substr(pos, end)); 
        pixels[i] += num;
        while (num > 0)
        {
          std::cout << outputChar;
          num--;
        }        
        outputChar = (outputChar == '#') ? '.' : '#';
      } while (end < input.size());    
      std::cout << "\n";
    }
  
    int invalid = 0;
    for (int i=0; i<numLines; i++)
    {
      if (pixels[0] != pixels[i])  
      {
        invalid = 1;
      }
    }
  
    if (invalid)
    {
      std:: cout << "Error decoding image" << "\n";
    }
    first = 0;
  }
}

