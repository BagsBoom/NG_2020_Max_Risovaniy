#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Skolko vi zarabativaite? ";
    cin >> x;
    if (x < 1001){
        cout << "Rabotai bolshe!";
    }
    if (x > 1000){
        if(x < 1000000){
            cout << "Tak derzhat!";
        }
    }
    if(x > 999999){
        cout << "Ti millioner!";
    }
    cout << "No ti molodec!";
}
