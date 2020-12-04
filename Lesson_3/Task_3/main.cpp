#include <iostream>

using namespace std;

int main()
{
    char stroka[25];
    cout << "Enter stroku: ";
    cin.getline(stroka, 25);
    int i = 0;
    int count;
    while (stroka[i]!=0) {
        if(stroka[i] >= 97 && stroka[i] <= 122){
            count = stroka[i];
            count = count - 32;
            stroka[i] = count;
        }
        i++;
    }
    cout << "Result - " << stroka;
}
