#include "piece.hpp"

Piece::Piece(int color, tuple<int, int> pos)
{
    pos = pos;
    color = color;
}

int Piece::getColor()
{
    return color;
}

string Piece::getPieceType()
{
    return pieceType;
}

tuple<int, int> Piece::getPos()
{
    return pos;
}

void Piece::setPos(tuple<int, int> pos)
{
    pos = pos;
}

void Piece::setColor(int color)
{
    color = color;
}