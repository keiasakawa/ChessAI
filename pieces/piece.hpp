#ifndef PIECE_H
#define PIECE_H
#include <string>
#include <vector>
#include <tuple>
#include "../move.hpp"
using namespace std;

class Piece
{
public:
    // Constructor
    Piece(int color, tuple<int, int> pos);

    // Get All The Piece's Possible Moves
    virtual vector<Move *> getPossibleMoves(vector<vector<Piece *>> board) = 0;

    int getColor();

    string getPieceType();

    tuple<int, int> getPos();

    void setColor(int color);

    void setPos(tuple<int, int>);

protected:
    // 0 == BLACK, 1 == WHITE
    int color;
    string pieceType;
    tuple<int, int> pos;
};

#endif