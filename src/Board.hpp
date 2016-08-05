#ifndef BOARD_HPP
#define BOARD_HPP

#include <vector>

namespace board{

class
Board
{
  public:
  Board();
  void change_square_state(int i, int j, bool n_state);
  bool is_square_empty(int i, int j);
  private:
  std::vector< std::vector<bool> > m_board_state;
};

} // namespace board


#endif // BOARD_HPP
