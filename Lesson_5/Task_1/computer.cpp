#include "computer.h"

computer::computer()
{

}

double computer::fullCost()
{
    return CConfig.getPrice() + VConfig.getPrice() + MConfig.getPrice();
}

void computer::fullInfo()
{
    cout << "CPU : " << CConfig.getName() << " " << CConfig.getGeneration() << "\t" << CConfig.getFrequency() << " MHz" << "\t" << "\t" << CConfig.getPrice() << "$" << "\t" << CConfig.getSocket() << " Socket" << endl;
    cout << "Videocard: " << VConfig.getName() << "\t" << VConfig.getSeries() << "\t" << VConfig.getPrice() << "$" << "\t" << VConfig.getParrot() << " Parrots" << endl;
    cout << "Motherboard: " << MConfig.getName() << "\t" << MConfig.getModel() << "\t" << "\t" << "\t" << MConfig.getPrice() << "$" << "\t" << MConfig.getSocket() << " Socket" << endl;
    cout << "Total Amount: " << fullCost() << "$" << endl;
}

void computer::check()
{
    if (CConfig.getSocket() != MConfig.getSocket())
    {
        cout << "Warning!" << endl;
        cout << "Sorry, but sockets on processor and motherboard are not compatible! Please, check one more time.." << endl;
        cout << endl;
    }
}
