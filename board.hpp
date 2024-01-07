#ifndef BOARD_HPP
#define BOARD_HPP
#include "square.hpp"

class Board
{
public:
    Board();
    Square board[8][8];
};

#endif