#include <iostream>

using namespace std;

int main()
{
    char stroka[20];
    int i = 0;
    int word = 0;
    cout << "Enter stroku: ";
    cin.getline(stroka, 20);
    while(stroka[i] != 0){
        if(stroka[i] >= 97 && stroka[i] <= 122){
            if(!(stroka[i + 1] >= 97 && stroka[i + 1] <= 122)){
                word++;
            }
        }
        i++;
    }
    cout << "Result: " << word << endl;
}
