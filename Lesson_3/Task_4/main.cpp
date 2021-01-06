#include <iostream>

using namespace std;

int main()
{
    char stroka[100];
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

    int l = 0;
    int counter = 0;
    char counts[100];

    for(i = 0; i <= word; i++)
    {
        counts[i] = 0;
    }

    // Подсчет повторений
    for(int i = 0; i <= word; i++){
        for(int j = 0; j <= word; j++){
            int currentSymbol = stroka[i];
            if(currentSymbol == stroka[j])
            {
                counter++;
            }
        }
        counts[l] = counter;
        l++;
        counter = 0;
    }
    // Сортировка
    for(int i = 1; i < word; i++)
    {
        for( r = 0; r < word-1; r++)
        {
            if(counts[r] < counts[r+1])
            {
                // Обмен местами
                int tmp_int = counts[r];
                counts[r] = counts[r+1];
                counts[r+1] = tmp_int;

                char tmp_char = stroka[r];
                stroka[r] = stroka[r+1];
                stroka[r+1] = tmp_char;
            }
        }
    }
    c = stroka[0];
    cout << "Result: " << endl;
    for(int i = 0; i <= word; i++){

        if(c != stroka[i])
        {
            if(c != '\0')
            {
                if(stroka[i] != ' '){
                    cout << c << " - " << n << endl;
                    n = 1;
                    c = stroka[i];
                }
                else
                {
                    word = word + 1;

                }
            }
        }
        else
        {
            n++;

        }
    }
}
