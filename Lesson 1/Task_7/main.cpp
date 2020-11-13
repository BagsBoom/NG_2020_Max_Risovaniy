#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    int y;
    cout << "Enter number - ";
    cin >> y;
    while (x != y)
    {
        cout << x << ", ";
        x++;
    }
    cout << x;
}
