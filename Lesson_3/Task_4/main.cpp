#include <iostream>

using namespace std;

int main()
{
    char stroka[100];
    char s;
    cout << "Enter stroku: ";
    cin.getline(stroka, 100);
    int i = 0;
    int r = 0;
    int n = 0;
    char c;
    int word = 0;
    int count;
    while (stroka[i]!= '\0')
    {
        if(stroka[i] >= 'a' && stroka[i] <= 'z')
        {
            count = stroka[i];
            count = count - 32;
            stroka[i] = count;
        }
        if(stroka[i] >= 'A' && stroka[i] <= 'Z')
        {
            count = stroka[i];
            count = count + 32;
            stroka[i] = count;
        }
        if(stroka[i] != 32)
        {
            word++;
        }
        i++;
    }
    /* Отсортируем массив по убыванию */
    for(int i = 1; i < word; i++)
    {
        for( r = 0; r < word-i; r++)
        {
            if(stroka[r] < stroka[r+1])
            {
                // Обмен местами
                int temp = stroka[r];
                stroka[r] = stroka[r+1];
                stroka[r+1] = temp;
            }
        }
    }
    c = stroka[0];
                    cout << "Result: " << endl;
    for(int i = 0; i <= word; i++){

        if(c != stroka[i])
        {
            if(c != ' ')
            {
                cout << c << " - " << n << endl;
                n = 1;
                c = stroka[i];
            }
        }
        else
        {
            n++;

        }
    }
}
