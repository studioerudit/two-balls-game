#include "cell.h"

Cell::Cell()
{
}

bool Cell::isOccupied()
{
    return m_ball != nullptr;
}

Ball* Cell::getBall()
{
    return m_ball;
}

void Cell::setBall(Ball* ball)
{
    m_ball = ball;
}
