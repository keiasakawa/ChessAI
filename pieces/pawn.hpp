#ifndef PAWN_H
#define PAWN_H
#include "piece.hpp"
#include <vector>
#include <tuple>
using namespace std;

class Pawn : public Piece
{
    // Get All The Piece's Possible Moves
    vector<tuple<int, int>> getPossibleMoves(vector<Piece> board);
};

#endif