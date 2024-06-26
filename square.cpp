#include "square.hpp"

Square::Square()
{
    piece = NULL;
}

bool Square::isEmpty()
{
    if (!piece) {
        return false;
    }
    return true;
}

Piece* Square::getPiece()
{
    return piece;
}

void Square::clear()
{
    piece = NULL;
}

void Square::setPiece(Piece* newPiece){
    piece = newPiece;
}