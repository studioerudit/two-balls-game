#include "field.h"

Field::Field()
{

}

unsigned Field::getNumberOfAvailableCells()
{
    unsigned numberOfAvailableCells = 0;

    /*
    for (std::vector<Cell> line : m_cells)
    {
        for (Cell cell : line)
        {
            numberOfAvailableCells++;
        }
    }
    */

    for (unsigned i = 0; i < m_cells.size(); i++)
    {
        for (unsigned j = 0; j < m_cells[i].size(); j++)
        {
            if(!m_cells[i][j].isOccupied())
            {
                numberOfAvailableCells++;
            }
        }
    }

    return numberOfAvailableCells;
}
