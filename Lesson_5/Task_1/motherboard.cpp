#include "motherboard.h"

motherboard::motherboard()
{

}

void motherboard::setPrice(double newPrice)
{
    if (newPrice < 0){
        cout << "Error! Price set to 0!";
        cout << endl;
        price = 0;
    } else {
        price = newPrice;
    }
}

void motherboard::addMotherboard(string name, string model, int price, int socket)
{
    setName(name);
    setModel(model);
    setPrice(price);
    setSocket(socket);

}
