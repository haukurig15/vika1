#include "services/computerservice.h"
#include "utilities/scientistcomparator.h"

#include <algorithm>

using namespace std;

ComputersService::ComputersService()
{

}

vector<Computers> ComputersService::getAllComputers(std::string orderBy, bool orderAscending)
{
    vector<Computers> computers = computersRepo.getAllComputers();

    std::sort(computers.begin(), computers.end(), ComputersComparator(orderBy, orderAscending));

    return computers;
}

std::vector<Computers> ComputersService::searchForComputers(std::string searchTerm)
{
    return computersRepo.searchForComputers(searchTerm);
}

bool ComputersService::addComputers(Computers computers)
{
    return computersRepo.addComputers(computers);
}
