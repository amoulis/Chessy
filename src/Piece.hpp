/*******************************************************************************
Piece.hpp
Classes used for piece movements and any move 'possible'. It does not have any
data about the board, that means another class would have to check if the moves are 'legit' (i.e: not out of the board...).
Piece is the mother class, other inherits directly from it.

                                  Piece
                                    |
                  _____________________________________
                  |      |      |     |     |         |
                Knight King   Queen Pawn  Rook      Bishop

*******************************************************************************/
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
  virtual std::vector <std::vector <int> > get_next_pos() = 0;
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
  std::vector <std::vector <int> > get_next_pos();
};

class
Rook : public Piece {
  
  private:
  int m_x;
  int m_y;
  
  public:
  Rook();
  Rook(int i, int j);
  std::vector <std::vector <int> > get_next_pos();
};

class
Bishop : public Piece {
  
  private:
  int m_x;
  int m_y;
  
  public:
  Bishop();
  Bishop(int i, int j);
  std::vector <std::vector <int> > get_next_pos();

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
  std::vector <std::vector <int> > get_next_pos();

};

class
King : public Piece {
  
  private:
  int m_x;
  int m_y;
  
  public:
  King();
  King(int i, int j);
  std::vector <std::vector <int> > get_next_pos();

};

class
Queen : public Piece {
  
  private:
  int m_x;
  int m_y;
  
  public:
  Queen();
  Queen(int i, int j);
  std::vector <std::vector <int> > get_next_pos();

};

} // namespace piece

#endif // PIECE_HPP
