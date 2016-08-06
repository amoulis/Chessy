#include "Piece.hpp"

namespace piece {

Piece::Piece()
  : m_x(0)
  , m_y(0)
{}

Piece::Piece(int i, int j)
  : m_x (i)
  , m_y (j)
{}

std::vector <int> 
Piece::get_current_pos()
{
  std::vector <int> curr_pos(2);
  curr_pos[0] = m_x;
  curr_pos[1] = m_y;
  return curr_pos;
}  
void 
Piece::change_current_pos(int i, int j)
{
  m_x = i;
  m_y = j;
}

/****************************************************************************
                                KNIGHT
****************************************************************************/

Knight::Knight()
  : Piece()
{}

Knight::Knight(int i, int j)
  : Piece(i, j)
{}

std::vector <std::vector <int> > 
Knight::get_next_pos(int i, int j)
{
  std::vector < int > x_y_coord(2);
  std::vector < std::vector <int> > total_coord(4);
  
  // y+2 x+2
  x_y_coord[0] = m_x + 2;
  x_y_coord[1] = m_y + 2;
  total_coord[0] = x_y_coord;
  // y+2 x-2
  x_y_coord[0] = m_x - 2;
  x_y_coord[1] = m_y + 2;
  total_coord[1] = x_y_coord;
  // y-2 x-2
  x_y_coord[0] = m_x - 2;
  x_y_coord[1] = m_y - 2;
  total_coord[2] = x_y_coord;
  // y-2 x+2
  x_y_coord[0] = m_x + 2;
  x_y_coord[1] = m_y - 2;
  total_coord[3] = x_y_coord;

  return total_coord;
}

/****************************************************************************
                                Rook
****************************************************************************/
Rook::Rook()
  : Piece()
{}

Rook::Rook(int i, int j)
  : Piece(i, j)
{}

std::vector <std::vector <int> > 
Rook::get_next_pos(int i, int j)
{

}

} // namespace piece
