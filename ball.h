#pragma once

enum class Color {None, Red, Orange, Yellow, Green, LightBlue, Blue, Violet, White};

class Ball
{
private:
    Color m_color;

public:
    Ball();

    Color getColor();
    void setColor(Color color);

    virtual bool isWhite();
};
