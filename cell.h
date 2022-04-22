#pragma once

#include "ball.h"

class Cell
{
private:
    Ball* m_ball;

public:
    Cell();

    Ball* getBall();
    void setBall(Ball* ball);

    bool isOccupied();
};
