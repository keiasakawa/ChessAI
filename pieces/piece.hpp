#ifndef PIECE_H
#define PIECE_H
#include <string>
#include <vector>
#include <tuple>
#include <iostream>
// #include "../move.hpp"
using namespace std;

class Piece
{
public:
    // Constructor
    Piece(int col, tuple<int, int> pos);

    // Get All The Piece's Possible Moves
    // vector<Move *> getPossibleMoves();

    int getColor();

    tuple<int, int> getPos();

    void setColor(int col);

    void setPos(tuple<int, int> p);

protected:
    // 0 == BLACK, 1 == WHITE
    int color;
    tuple<int, int> pos;
};

#endif