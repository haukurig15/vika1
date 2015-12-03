#include "ui/consoleui.h"
#include <iostream>
using namespace std;

void snilli(){
    cout << "Thu ert sdfdfgdgnfdfgdgilli!" << endl;
}


int main()
{
    snilli();
    ConsoleUI ui;

    return ui.start();
}

