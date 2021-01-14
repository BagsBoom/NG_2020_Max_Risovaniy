#include <iostream>

using namespace std;

int main()
{
    char stroka[100];
    cout << "Enter stroku: ";
    cin.getline(stroka, 100);
    int amount = 0;
    char symbol;
    int word = 0;
    int count;
    int i = 0;
    while (stroka[i]!= '\0')
    {
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

    int iteration = 0;
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
        counts[iteration] = counter;
        iteration++;
        counter = 0;
    }
    int sort = 0;
    // Сортировка
    for(int i = 1; i < word; i++)
    {
        for( sort = 0; sort < word-1; sort++)
        {
            if(counts[sort] < counts[sort+1])
            {
                // Обмен местами
                int tmp_int = counts[sort];
                counts[sort] = counts[sort+1];
                counts[sort+1] = tmp_int;

                char tmp_char = stroka[sort];
                stroka[sort] = stroka[sort+1];
                stroka[sort+1] = tmp_char;
            }
        }
    }
    symbol = stroka[0];
    cout << "Result: " << endl;
    for(int i = 0; i <= word; i++){

        if(symbol != stroka[i])
        {
            if(symbol != '\0')
            {
                if(stroka[i] != ' '){
                    cout << symbol << " - " << amount << endl;
                    amount = 1;
                    symbol = stroka[i];
                }
                else
                {
                    word = word + 1;

                }
            }
        }
        else
        {
            amount++;

        }
    }
}
