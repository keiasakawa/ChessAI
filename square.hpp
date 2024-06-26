#ifndef SQUARE_HPP
#define SQUARE_HPP
#include "pieces/piece.hpp"

class Square
{
public:
    Square();
    bool isEmpty();
    Piece *getPiece();
    void clear();
    void setPiece(Piece* newPiece);

private:
    Piece* piece;
};

#endif