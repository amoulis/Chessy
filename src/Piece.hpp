#ifndef PIECE_HPP
#define PIECE_HPP

#include <vector>

namespace piece {

class
Piece
{
  protected:
  virtual std::vector <std::vector <int> > get_next_pos(int i, int j) = 0;
  virtual std::vector <int> get_current_pos() = 0;
  virtual void change_current_pos(int i, int j) = 0; 
   
};

class
Knight : public Piece {
  
  private:
  int m_x;
  int m_y;
  
  public:
  Knight();
  Knight(int i, int j);
  std::vector <std::vector <int> > get_next_pos(int i, int j);
  std::vector <int> get_current_pos();
  void change_current_pos(int i, int j);
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
