#ifndef MOVE_H
#define MOVE_H
#include <vector>
using namespace std;

class Move
{
public:
    Move(tuple<tuple<int, int>, tuple<int, int>>, bool capture = false, bool promotion = false);
    tuple<tuple<int, int>, tuple<int, int>> move;
    bool isCapture;
    bool isPromotion;
};

#endif