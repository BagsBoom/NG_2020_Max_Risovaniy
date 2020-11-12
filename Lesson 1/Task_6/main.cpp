#include <iostream>

using namespace std;

int main()
{
    int x = 1;
    int s;
    int z = 1;
    int y = 1;
    cout << "Enter size - ";
    cin >> s;
    // First
    while (x <= s)
    {
        while (y <= s)
        {
            cout << "*";
            if (y == s)
            {
                cout << endl;
            }
            y++;
        }
        y = 1;
        x++;
    }
    x = 1;
    cout << endl;
    // Second
    while (x <= s)
    {
        while (y <= x)
        {
            cout << "*";
            y++;
        }
        cout << endl;
        x++;
        y = 1;
    }
    cout << endl;
    x = 1;
    // Third
    while (x <= s)
    {
        while (y <= s - x)
        {
            cout << " ";
            y++;
        }
        while (z <= x)
        {
            cout << "*";
            z++;
        }
        if (x == z - 1)
        {
            cout << endl;
        }

        x++;
        y = 1;
        z = 1;
    }
    cout << endl;
    x = 1;
    // Forth
    while (x <= s)
    {
        while (y <= s - x + 1)
        {
            cout << "*";
            y++;
        }
        cout << endl;
        x++;
        y = 1;
    }
    x = 1;
    y = 1;
    cout << endl;
    // Fifth
    while (x <= s)
    {
        while (y <= x - 1)
        {
            cout << " ";
            y++;
        }
        while (z <= s - x + 1)
        {
            cout << "*";
            z++;
        }
        cout << endl;
        z = 1;
        y = 1;

        x++;
    }
}
