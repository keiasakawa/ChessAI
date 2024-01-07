#ifndef PAWN_H
#define PAWN_H
#include "piece.hpp"
#include <vector>
#include <tuple>
using namespace std;

class Pawn : public Piece
{
public:
    using Piece::Piece;
    // Get All The Piece's Possible Moves
    vector<Move *> getPossibleMoves();
};

#endif