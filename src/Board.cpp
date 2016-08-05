#include "Board.hpp"

namespace board {

Board::Board()
{
  for(int i = 0; i < 8; i++)
    for(int j = 0; j < 8; j++)
      m_board_state[i][j] = false;
}

bool
Board::is_square_empty(int i, int j)
{
  return m_board_state[i][j];
}

void
Board::change_square_state(int i, int j, bool n_state)
{
  m_board_state[i][j] = n_state;
}

} // namespace board
