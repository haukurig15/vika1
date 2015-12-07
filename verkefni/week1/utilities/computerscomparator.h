#ifndef COMPUTERSCOMPARATOR_H
#define COMPUTERSCOMPARATOR_H


#include "models/computers.h"

/**
 * @brief The ScientistComparator can compare two scientists by rules set in the constructor when used with a sort function
 */
class ComputersComparator
{
public:
    ComputersComparator(std::string sortColumn, bool sortInAscendingOrder);

    bool operator() (const Computers& first, const Computers& second);
private:
    std::string sortColumn;
    bool sortInAscendingOrder;
};

#endif // COMPUTERSCOMPARATOR_H
