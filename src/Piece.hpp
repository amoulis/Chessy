#ifndef PIECE_HPP
#define PIECE_HPP

#include <vector>

namespace piece {

class
Piece
{
  public:
  Piece();
  Piece (int i, int j);  
  virtual std::vector <std::vector <int> > get_next_pos(int i, int j) = 0;
  std::vector <int> get_current_pos();
  void change_current_pos(int i, int j);
  private:
  int m_x;
  int m_y;
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
};

class
Rook : public Piece {
  
  private:
  int m_x;
  int m_y;
  
  public:
  Rook();
  Rook(int i, int j);
  std::vector <std::vector <int> > get_next_pos(int i, int j);
};

class
Bishop : public Piece {
  
  private:
  int m_x;
  int m_y;
  
  public:
  Bishop();
  Bishop(int i, int j);
  std::vector <std::vector <int> > get_next_pos(int i, int j);

};

class
Pawn : public Piece {
  private:
  int m_x;
  int m_y;
  bool m_first_move;
  
  public:
  Pawn();
  Pawn(int i, int j);
  bool set_first_move(const bool val);
  std::vector <std::vector <int> > get_next_pos(int i, int j);

};

class
King : public Piece {
  
  private:
  int m_x;
  int m_y;
  
  public:
  King();
  King(int i, int j);
  std::vector <std::vector <int> > get_next_pos(int i, int j);

};

class
Queen : public Piece {

};

} // namespace piece

#endif // PIECE_HPP
