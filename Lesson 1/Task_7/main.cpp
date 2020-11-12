#include <iostream>

using namespace std;

int main()
{
    int x,y,z;
    cout << "Enter number - ";
    cin >> x;
    y = x;
    while (x <= y)
        {
        while (z <= x)
        {
            cout << z;
            if (z != x)
            {
                cout << ", ";
            }
            z++;
        }
        x++;
        }
}
