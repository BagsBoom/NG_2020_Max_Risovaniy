#include <iostream>

using namespace std;

int main()
{
    char stroka[20];
    int i = 0;
    int smallW = 0;
    int num = 0;
    int bigW = 0;
    cout << "Enter stroku: ";
    cin.getline(stroka, 20);
    for(i = 0; i < 20; i++){
        if(stroka[i] == '\0') break;
        if(stroka[i] >= 97 && stroka[i] <= 122){
            smallW = 1;
        }
        if(stroka[i] >= 48 && stroka[i] <= 57){
            num = 1;
        }
        if(stroka[i] >= 65 && stroka[i] <= 90){
            bigW = 1;
        }
    }
    cout << "Result: " << smallW + num + bigW << endl;
}
