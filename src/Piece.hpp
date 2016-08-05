#ifndef PIECE_HPP
#define PIECE_HPP

#include <vector>

namespace piece {

class
Piece
{
  protected:
  virtual std::vector <std::vector <int> > get_next_pos(int i, int j);
  virtual std::vector <int> get_current_pos();
  virtual void change_current_pos(int i, int j); 
   
};

} // namespace piece

#endif // PIECE_HPP
