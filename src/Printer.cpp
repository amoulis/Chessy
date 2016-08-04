#include "Printer.hpp"
#include <iostream>

namespace printer{
Printer::Printer()
  : m_length(8)
  , m_width(24)
{};

void
Printer::print_screen(char board[8][24])
{
  for(int i = 0; i < m_length; i++)
  {
    for(int j = 0; j < m_width; j++)
    {
        std::cout << board[i][j];
    }
    std::cout<< " " <<std::endl;
  }
}

} // namspace printer
