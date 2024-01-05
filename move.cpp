#include "move.hpp"

Move::Move(tuple<tuple<int, int>, tuple<int, int>> move, bool capture = false, bool promotion = false)
{
    move = move;
    isCapture = capture;
    isPromotion = promotion;
}