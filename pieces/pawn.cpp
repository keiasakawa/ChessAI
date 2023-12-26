#include "pawn.hpp"

vector<Move *> Pawn::getPossibleMoves(vector<vector<Piece *>> board)
{
    // Unpack Values
    int x;
    int y;
    tie(x, y) = pos;

    vector<Move *> moves;

    int adjustment;
    if (color)
    {
        adjustment = 1;
    }
    else
    {
        adjustment = -1;
    }
    if (!board[x][y + adjustment])
    {
        tuple<tuple<int, int>, tuple<int, int>> move(getPos(), make_tuple(x, y + adjustment));
        moves.push_back(new Move(move));
    }

    return moves;
}