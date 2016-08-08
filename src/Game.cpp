#include "Game.hpp"

namespace game {


std::vector <std::vector <int> >
Game::is_not_out_of_the_board(std::vector < std::vector <int> >& data_in)
{
  for(int i = 0; i < data_in.size(); i++)
  {
    std::vector<int> vec = data_in[i];
    if( vec[0] < 0 || vec[0] > m_board_size)
    {
      if( vec[1] < 0 || vec[1] > m_board_size)
      {
        data_in.erase(data_in.begin()+i);
      }
    }
  }    

  return data_in;
}

} // namespace game
