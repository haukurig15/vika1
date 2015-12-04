#include "models/computers.h"
#include "utilities/utils.h"
#include "utilities/constants.h"
#include <QtSql>
#include <string>

using namespace std;

Computers::Computers(string name, string type, int yearBuild)
{
    this->name = name;
    this->type = type;
    this->yearBuild = yearBuild;
}

Computers::Computers(string name, string type, int yearBuild, bool built)
{
    this->name = name;
    this->type = type;
    this->yearBuild = yearBuild;
    this->built = built;
}

string Computers::getName() const
{
    return name;
}

string Computers::getType() const
{
    return type;
}

int Computers::getYearBuild() const
{
    return yearBuild;
}

bool Computers::didItGetBuilt() const
{
    return built;
}
/*
bool Scientist::contains(string searchTerm)
{
    string searchTermLower = utils::stringToLower(searchTerm);

    string nameLower = utils::stringToLower(name);
    if (nameLower.find(searchTermLower) != string::npos)
    {
        return true;
    }

    if (searchTermLower == "male" && sex == sexType::male)
    {
        return true;
    }

    if (searchTermLower == "female" && sex == sexType::female)
    {
        return true;
    }

    string yearBornString = utils::intToString(yearBorn);

    if (yearBornString.find(searchTerm) != string::npos)
    {
        return true;
    }

    if (yearDied != constants::YEAR_DIED_DEFAULT_VALUE)
    {
        string yearDiedString = utils::intToString(yearDied);

        if (yearDiedString.find(searchTerm) != string::npos)
        {
            return true;
        }
    }
    else
    {
        if (searchTermLower == "alive")
        {
            return true;
        }
    }

    return false;
}
*/
