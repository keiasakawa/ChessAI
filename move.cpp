#include "move.hpp"

Move::Move(tuple<tuple<int, int>, tuple<int, int>> move, bool capture, bool promotion)
{
    move = move;
    isCapture = capture;
    isPromotion = promotion;
}