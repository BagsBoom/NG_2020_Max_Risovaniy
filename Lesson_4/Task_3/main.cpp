#include <iostream>

using namespace std;

char stroka[100];
int word = 0;

void countsOfWords()
{
    int i = 0;
    while(stroka[i] != '\0'){
        if((stroka[i] >= 'a' && stroka[i] <= 'z') || (stroka[i] >= 'A' && stroka[i] <= 'Z')){
            if(!(stroka[i + 1] >= 'a' && stroka[i + 1] <= 'z') && !(stroka[i + 1] >= 'A' && stroka[i + 1] <= 'Z')){
                word++;
            }
        }
        i++;
    }
}
void enterString()
{
    cout << "Enter stroku: ";
    cin.getline(stroka, 100);
}
int main()
{
    enterString();
    countsOfWords();
    cout << "Result: " << word << endl;
}
