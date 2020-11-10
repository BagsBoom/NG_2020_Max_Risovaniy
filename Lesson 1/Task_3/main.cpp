#include <iostream>

using namespace std;

int main()
{
    int need, inone, sobrano, so;
    cout << "Skolko oreshkov nuzhno belochke - ";
    cin >> need;
    cout << "Skolko oreshkov v odnoy shiske - ";
    cin >> inone;
    cout << "Skolko shishek bylo sobrano - ";
    cin >> sobrano;
    if(inone*sobrano >= need){
        cout << "YES";
    }
    if(inone*sobrano < need){
        cout << "NO";
    }
}
