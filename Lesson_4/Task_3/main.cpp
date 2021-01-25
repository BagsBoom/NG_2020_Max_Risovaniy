#include <iostream>

using namespace std;


void enterString(char *stroka)
{
    cout << "Enter stroku: ";
    cin.getline(stroka, 100);
}

void uslovie (char *stroka, int i,int &word)
{
    if((stroka[i] >= 'a' && stroka[i] <= 'z') || (stroka[i] >= 'A' && stroka[i] <= 'Z')){
        if(!(stroka[i + 1] >= 'a' && stroka[i + 1] <= 'z') && !(stroka[i + 1] >= 'A' && stroka[i + 1] <= 'Z')){
            word++;
        }
    }
}

void countsOfWords(char *stroka,int &word)
{
    int i = 0;
    while(stroka[i] != '\0'){
        uslovie(stroka,i,word);
        i++;
    }
}

void conclusion (int word)
{
    cout << "Result: " << word << endl;
}

int main()
{
    int word = 0;
    char stroka[100];
    enterString(stroka);
    countsOfWords(stroka,word);
    conclusion(word);
}
