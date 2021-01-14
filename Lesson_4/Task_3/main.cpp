#include <iostream>

using namespace std;

int word = 0;


void enterString(char *stroka)
{
    cout << "Enter stroku: ";
    cin.getline(stroka, 100);
}
void uslovie (char *stroka)
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
void countsOfWords(char *stroka)
{
        uslovie(stroka);
}

void conclusion ()
{
    cout << "Result: " << word << endl;
}
int main()
{
    char stroka[100];
    enterString(stroka);
    countsOfWords(stroka);
    conclusion();
}
