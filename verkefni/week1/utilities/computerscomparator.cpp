#include "utilities/computerscomparator.h"

ComputersComparator::ComputersComparator(std::string column, bool sortInAscendingOrder)
{
    this->sortColumn = column;
    this->sortInAscendingOrder = sortInAscendingOrder;
}

bool ComputersComparator::operator() (const Computers& first, const Computers& second)
{
    if (sortColumn == "name")
    {
        if (sortInAscendingOrder)
        {
            return first.getName() < second.getName();
        }
        else
        {
            return second.getName() < first.getName();
        }
    }
    else if (sortColumn == "yearBuild")
    {
        if (sortInAscendingOrder)
        {
            return first.getYearBuild() < second.getYearBuild();
        }
        else
        {
            return second.getYearBuild() < first.getYearBuild();
        }
    }

    return false;
}
