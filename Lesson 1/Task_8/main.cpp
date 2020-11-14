#include <iostream>

using namespace std;

int main()
{
    int x = 1;
    int y = 1;
    int s;
    int z = 1;
    cout << "Enter size of the christmas tree - ";
    cin >> s;
    z = (s * 2) - 1;
    while (x <= s)
    {
        while (y <= s - x)
        {
            cout << " ";
            y++;
        }
        while (y <= z / 2 + x)
        {
            cout << "*";
            y++;
        }
        cout << endl;
        x++;
        y = 1;
    }
    while (y <= z / 2)
    {
        cout << " ";
        y++;
    }
    cout << "*";
    y = 1;
}

