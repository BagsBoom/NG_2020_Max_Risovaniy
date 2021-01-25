#include <iostream>
#include <string>
#include "computer.h"
#include "cpu.h"

using namespace std;

int main()
{
    computer information;
    videocard manager_v1;
    CPU manager_c1;
    motherboard manager_m1;


    computer information_2;
    videocard manager_v2;
    CPU manager_c2;
    motherboard manager_m2;

    computer information_3;
    videocard manager_v3;
    CPU manager_c3;
    motherboard manager_m3;

    manager_v1.addVideocard("GTX 1050 Ti", "GeForce 10 Series", 237, 922);
    manager_c1.addCPU("Intel","i7 9700",3000, 311, 1151);
    manager_m1.addMotherboard("Gigabyte", "H310M", 56, 1151);


    information.Config_videocard(manager_v1);
    information.Config_CPU(manager_c1);
    information.Config_motherboard(manager_m1);
    information.check();

    information.fullInfo();

    cout << endl;

    manager_v2.addVideocard("GTX 1080 Ti", "GeForce 10 Series", 637, 1500);
    manager_c2.addCPU("Intel", "i5-10400", 2900, 209, 1200);
    manager_m2.addMotherboard("ASUS", "H310M-E", 92, 1151);

    information_2.Config_videocard(manager_v2);
    information_2.Config_CPU(manager_c2);
    information_2.Config_motherboard(manager_m2);
    information_2.check();

    information_2.fullInfo();



    cout << endl;

    manager_v3.addVideocard("RTX 3090", "GeForce 30 Series", 2550, 3506);
    manager_c3.addCPU("Intel","i7 9700K",3600, 389, 1151);
    manager_m3.addMotherboard("Gigabyte", "H310M", 56, 1151);


    information_3.Config_videocard(manager_v3);
    information_3.Config_CPU(manager_c3);
    information_3.Config_motherboard(manager_m3);
    information_3.check();

    information_3.fullInfo();

    return 0;
}
