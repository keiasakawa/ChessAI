#include "pieces/piece.hpp"
#include "pieces/pawn.hpp"
#include "square.hpp"

int main() {
    tuple<int, int> t = make_tuple(1, 1);
    Piece * piece = new Piece(0, t);
    cout << piece->getColor() << endl;

    Square * square = new Square();
    cout << square->getPiece() << endl;

    Pawn *p1 = new Pawn(1, t);
    square->setPiece(p1);
    cout << square->getPiece() << endl;

    cout << square->isEmpty() << endl;

    square->clear();
    cout << square->getPiece() << endl;

    cout << square->isEmpty() << endl;

}