#include <iostream>

using namespace std;

int main()
{
    int numOfIteration = 1;
    int output = 1;
    int userSize;
    int widthTree = 1;
    cout << "Enter size of the christmas tree - ";
    cin >> userSize;
    widthTree = (userSize * 2) - 1;
    while (numOfIteration <= userSize)
    {
        while (output <= userSize - numOfIteration)
        {
            cout << " ";
            output++;
        }
        while (output <= widthTree / 2 + numOfIteration)
        {
            cout << "*";
            output++;
        }
        cout << endl;
        numOfIteration++;
        output = 1;
    }
    while (output <= widthTree / 2)
    {
        cout << " ";
        output++;
    }
    cout << "*";
    output = 1;
}

