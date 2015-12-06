#ifndef COMPUTERS_H
#define COMPUTERS_H

#include <string>

using namespace std;

enum comType{ //lagaði þetta
    mecanic,
    electronic
};


class Computers
{
public:
    Computers(string name, enum comType type, int yearBuild); //(breyttir úr string type í enum comType type)
    Computers(string name, enum comType type, int yearBuild, bool built); //(breyttir úr string type í enum comType type)

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
