#ifndef CPU_H
#define CPU_H

#include <string>
#include <iostream>
#include <vector>


using namespace std;

class CPU
{
public:
    CPU();
    void setName(string newName) { name = newName;}
    string getName() {return name;}

    void setGeneration(string newGeneration) { generation = newGeneration; }
    string getGeneration() {return generation;}

    void setFrequency(int newFrequency) {frequency = newFrequency;}
    int getFrequency() {return frequency;}

    void setPrice(double newPrice);
    double getPrice() {return price;}

    void setSocket(int newSocket) {socket = newSocket;}
    int getSocket() {return socket;}

    void addCPU(string name, string generation, int frequency, int price, int socket);

private:
    string name;
    string generation;
    double price;
    double frequency;
    int parrot;
    int socket;

    vector<CPU> cpus;
};

#endif // CPU_H
