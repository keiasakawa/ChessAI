#include "pieces/pawn.hpp"

int main()
{
    tuple<int, int> t = make_tuple(1, 1);
    Pawn *p1 = new Pawn(1, t);
    vector<vector<Piece *>>
        board{{NULL, NULL, NULL}, {NULL, p1, NULL}};
    for (unsigned int i = 0; i < board.size(); i++)
    {
        for (unsigned int j = 0; j < board[i].size(); j++)
        {
            if (board[i][j])
            {
                vector<Move *> moves = board[i][j]->getPossibleMoves(board);
                for (unsigned int k = 0; k < moves.size(); k++)
                {
                    cout << moves[k] << endl;
                }
            }
        }
    }
    return 0;
};
