#include <iostream>

using namespace std;

int main()
{
    int x,y,z;
    cout << "Enter number - ";
    cin >> y;
    while (x != y)
        {
       cout << x << ", ";
        x++;
        }
        y = 1;
        cout << x;
}
