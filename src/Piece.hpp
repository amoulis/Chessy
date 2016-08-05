#ifndef PIECE_HPP
#define PIECE_HPP

#include <vector>

namespace piece {

class
Piece
{
  protected:
  int x;
  int y;
  virtual std::vector <std::vector <int> > get_next_pos(int i, int j);
  virtual std::vector <int> get_current_pos();
  virtual void change_current_pos(int i, int j); 
   
};

class
Knight : public Piece {

};

class
Rook : public Piece {

};

class
Bishop : public Piece {

};

class
Pawn : public Piece {

};

class
King : public Piece {

};

class
Queen : public Piece {

};

} // namespace piece

#endif // PIECE_HPP
