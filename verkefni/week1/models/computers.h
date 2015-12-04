#ifndef COMPUTERS_H
#define COMPUTERS_H
#include <QtSql>
#include <string>

using namespace std;

enum comTyp{
    mecanic,
    electronic,
    lectric
};


class Computers
{
public:
    Computers(string name, string type, int yearBuild);
    Computers(string name, string type, int yearBuild, bool built);

    string getName() const;
    enum comType getType() const;
    int getYearBuild() const;
    bool didItGetBuilt() const;

    bool contains(string searchTerm);

private:
    string name;
    enum comType type;
    int yearBuild;
    bool built;
};

#endif // COMPUTERS_H
