#ifndef VIDEOPICKER_H
#define VIDEOPICKER_H

#include "videocard.h"
#include <vector>

class videopicker
{
public:
    videopicker();

    void list_all();

    void addVideocard(string name, string series, int price, int parrot);

private:

    void showCardsAmount();
    vector<videocard> videocards;

};

#endif // VIDEOPICKER_H
