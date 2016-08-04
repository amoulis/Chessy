#include "Printer.hpp"
#include <iostream>

namespace printer{
Printer::Printer()
  : length(8)
  , width(24)
{};

void
Printer::print_screen(char ** board)
{
  for(int i = 0; i < length; i++)
  {
    for(int j = 0; j < width; j++)
    {
        std::cout << board[i][j];
    }
    std::cout<< " " <<std::endl;
  }
}

}
