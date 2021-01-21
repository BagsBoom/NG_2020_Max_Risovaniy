#ifndef VIDEOCARD_H
#define VIDEOCARD_H

#include <string>
#include <iostream>
#include <vector>

using namespace std;

class videocard
{
public:
    videocard();

    void setName(string newName) { name = newName; }
    string getName() {return name;}

    void setSeries(string newSeries) { series = newSeries; }
    string getSeries() {return series;}

    void setPrice(double newPrice);
    double getPrice() {return price;}

    void setParrot(int newParrot) {parrot = newParrot;}
    int getParrot() {return parrot;}

    void addVideocard(string name, string series, int price, int parrot);

private:
    string name;
    string series;
    double price;
    int parrot;

        vector<videocard> videocards;
};

#endif // VIDEOCARD_H
