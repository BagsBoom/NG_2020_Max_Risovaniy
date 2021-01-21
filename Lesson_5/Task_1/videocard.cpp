#include "videocard.h"

videocard::videocard()
{
    setName("NONAME");
    setPrice(0);
    setSeries("1050");
    setParrot(0);
}

void videocard::setPrice(double newPrice)
{
    if (newPrice < 0){
        cout << "Error! Price set to 0!";
        cout << endl;
        price = 0;
    } else {
        price = newPrice;
    }
}

void videocard::addVideocard(string name, string series, int price, int parrot)
{
    setName(name);
    setSeries(series);
    setPrice(price);
    setParrot(parrot);
}
