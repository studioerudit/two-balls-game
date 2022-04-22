#pragma once

#include <vector>
#include "cell.h"

class Field
{
private:
    std::vector<std::vector<Cell>> m_cells;

public:
    Field();

    unsigned getNumberOfAvailableCells();
};

