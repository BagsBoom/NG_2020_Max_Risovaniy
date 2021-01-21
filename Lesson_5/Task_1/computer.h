#ifndef COMPUTER_H
#define COMPUTER_H

#include <cpu.h>
#include <motherboard.h>
#include <videocard.h>


using namespace std;

class computer
{
public:
    computer();
    void Config_CPU(CPU newCConfig) {CConfig = newCConfig;}
    void Config_videocard(videocard newVConfig) {VConfig = newVConfig;}
    void Config_motherboard(motherboard newMConfig) {MConfig = newMConfig;}


    double fullCost ();


    void fullInfo();

    void check();

private:
    CPU CConfig;
    videocard VConfig;
    motherboard MConfig;
};

#endif // COMPUTER_H
