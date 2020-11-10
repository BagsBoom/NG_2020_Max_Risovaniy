#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    cout << "Vvedite pervoe chislo - ";
    cin >> x;
    cout << "Vvedite vtoroe chislo - ";
    cin >> y;
    cout << "Vvedite deistvie - ";
    cin >> z;
    if (z == 1){
        cout << "Resultat - " << x + y;
    }
    if (z == 2){
        cout << "Resultat - " << x - y;
    }
    if (z == 3){
        cout << "Resultat - " << x * y;
    }
    if (z == 4){
        cout << "Resultat - " << x / y;
    }
}
