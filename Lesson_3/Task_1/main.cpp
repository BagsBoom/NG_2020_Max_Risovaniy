#include <iostream>

using namespace std;

int main()
{
    char stroka[100];
    int i = 0;
    int word = 0;
    cout << "Enter stroku: ";
    cin.getline(stroka, 100);
    while(stroka[i] != 0){
        if((stroka[i] >= 'a' && stroka[i] <= 'z') || (stroka[i] >= 'A' && stroka[i] <= 'Z')){
            if(!(stroka[i + 1] >= 'a' && stroka[i + 1] <= 'z') && !(stroka[i + 1] >= 'A' && stroka[i + 1] <= 'Z')){
                word++;
            }
        }
        i++;
    }
    cout << "Result: " << word << endl;
}
