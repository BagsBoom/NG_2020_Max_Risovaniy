#ifndef MOTHERBOARD_H
#define MOTHERBOARD_H

#include <string>
#include <iostream>
#include <vector>

using namespace std;

class motherboard
{
public:
    motherboard();

    void setName(string newName) { name = newName; }
    string getName() {return name;}

    void setModel(string newModel) { model = newModel; }
    string getModel() {return model;}

    void setPrice(double newPrice);
    double getPrice() {return price;}

    void setSocket(int newSocket) {socket = newSocket;}
    int getSocket() {return socket;}


    void list_all();

    void addMotherboard(string name, string model, int price, int socket);

private:
    string name;
    string model;
    int socket;
    double price;

    vector<motherboard> motherboards;
};

#endif // MOTHERBOARD_H
