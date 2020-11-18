#include <iostream>

using namespace std;

int main()
{
    int card[10];
    int money = 0;
    int allMoney = 0;
    int i;
    for (i = 0; i < 10; i++)
    {
        card[i] = 0;
    }
    while (true)
    {
        cout << "vvedite nomer karti - ";
        cin >> i;
        cout << "skolko polozhit? ";
        cin >> money;
        card[i - 1] = card[i - 1] + money;
        for (int j = 0; j < 10; j++)
        {
            cout << card[j] << " ";
        }
        cout << endl;
        cout << "v summe na vsex kartochkah - ";
        allMoney = allMoney + money;
        cout << allMoney;
        cout << endl;
    }
}
