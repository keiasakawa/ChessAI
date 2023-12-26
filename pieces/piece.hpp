#ifndef PIECE_H
#define PIECE_H
#include <string>
using namespace std;

class Piece {
    public:

        virtual vector<tuple<int, int>> getPossibleMoves(vector<Piece> board) = 0;

        int getColor();

        string getPieceType();

        virtual ~Piece();


    protected:
        int color;
        string pieceType;

}

#endif