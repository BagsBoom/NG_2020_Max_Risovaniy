#include "poisk.h"
#include <string>
#include <iostream>
#include <vector>


using namespace std;

poisk::poisk()
{


}

void poisk::search(string name)
{
    int current = 0;
    for(poisk temp : searching)
    {
        if(temp.getName() == name) {
            searching.(searching.begin() + current);
            return;
        }
        current++;
    }
}
