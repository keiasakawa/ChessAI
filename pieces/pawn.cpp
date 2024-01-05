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
        adjustment = -1;
    }
    else
    {
        adjustment = 1;
    }

    /*
    ___|___|___
    ___| P |___

         |
         v

    ___|_P_|___
    ___|___|___

    Move Pawn Forward One Space
    */
    if (!board[x + adjustment][y])
    {
        tuple<tuple<int, int>, tuple<int, int>> move(getPos(), make_tuple(x + adjustment, y));
        moves.push_back(new Move(move));
    }

    /*

    White Space: Diagonal Up Right Capture
    _B_|___|___
    ___|_P_|___

         |
         v

    _P_|___|___
    ___|___|___



    */
    if (board[x + adjustment][y + adjustment])
    {
        tuple<tuple<int, int>, tuple<int, int>> move(getPos(), make_tuple(x, y + adjustment));
        moves.push_back(new Move(move));
    }

    // TODO: DO EN PASSANT

    return moves;
}