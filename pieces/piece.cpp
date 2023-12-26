#include "piece.hpp"

int Piece::getColor() {
    return color;
}

string Piece::getPieceType() {
    return pieceType;
}

Piece::~Piece() {
    delete color;
    delete pieceType;
}