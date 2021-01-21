#include "cpu.h"

CPU::CPU()
{

}

void CPU::setPrice(double newPrice)
{
    if (newPrice < 0){
        cout << "Error! Price set to 0!";
        cout << endl;
        price = 0;
    } else {
        price = newPrice;
    }

}

void CPU::addCPU(string name, string generation, int frequency, int price, int socket)
{
    setName(name);
    setGeneration(generation);
    setFrequency(frequency);
    setPrice(price);
    setSocket(socket);
}

