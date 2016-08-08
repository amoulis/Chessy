/******************************************************************************
Game.hpp
All the game 'mechanic' : legit move checking, check (mate) detection, 
piece captures detection...
******************************************************************************/
#ifndef GAME_HPP
#define GAME_HPP

#include <vector>

namespace game {

class
Game
{
  public:
   
  private:
  static const unsigned int m_board_size = 7;
  std::vector <std::vector <int> > is_not_out_of_the_board(std::vector < std::vector <int> >& data_in);
  
};

} // namespace Game

#endif // GAME_HPP
