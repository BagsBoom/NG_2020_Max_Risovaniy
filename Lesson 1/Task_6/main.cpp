#include <iostream>

using namespace std;

int main()
{
    int x = 1;
    int s;
    int y = 1;
    cout << "Enter size - ";
    cin >> s;
    // First
    while (x <= s)
    {
        while (y != s + 1)
        {
            cout << "*";
            y++;
        }
        cout << endl;
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
        while (y != s - x + 1)
        {
            cout << " ";
            y++;
        }
        while (y != s + 1)
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
        while (y != s + 1)
        {
            cout << "*";
            y++;
        }
        cout << endl;
        y = 1;
        x++;
    }
}
