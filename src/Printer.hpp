#ifndef PRINTER_HPP
#define PRINTER_HPP

namespace printer{
class
Printer {
public:
  Printer();

  void print_screen(char board[8][24]);
private:
  int m_length;
  int m_width;
};

} // namespace printer

#endif //Printer_HPP
