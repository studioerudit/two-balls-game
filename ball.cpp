#include "ball.h"

Ball::Ball()
{
    m_color = Color::None;
}

Color Ball::getColor()
{
    return m_color;
}

void Ball::setColor(Color color)
{
    m_color = color;
}

bool Ball::isWhite()
{
    return m_color == Color::White;
}

