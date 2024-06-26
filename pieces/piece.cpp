#include "piece.hpp"
#include <tuple>

Piece::Piece(int col, tuple<int, int> pos)
{
    pos = pos;
    color = col;
}

int Piece::getColor()
{
    return color;
}

tuple<int, int> Piece::getPos()
{
    return pos;
}

void Piece::setPos(tuple<int, int> p)
{
    pos = p;
}

void Piece::setColor(int col)
{
    color = col;
}