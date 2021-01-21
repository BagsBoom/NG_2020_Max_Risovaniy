#ifndef POISK_H
#define POISK_H

#include <string>
#include <iostream>
#include <vector>
#include <computer.h>

using namespace std;
class poisk
{
public:
    poisk();
    vector <poisk> searching;
    void search(string name);
    string getName() {return name;}
private:
    string name;
};

#endif // POISK_H
