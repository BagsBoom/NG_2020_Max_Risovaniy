#include <iostream>

using namespace std;

int main()
{
    int school[10];
    int mySchool = 0;
    int num = 0;
    for (int i = 0; i < 10; i++)
    {
        school[i] = 0;
    }
    for (num = 0; num < 10; num++)
    {
        cout << "vvedite nomer shkoli - ";
        cin >> school[num];
    }
    cout << endl;
    cout << "a teper vvedi nomer svoyu shkoly - ";
    cin >> mySchool;
    if (school[num] == mySchool)
    {
        cout << "ya znau ety shkoly";
    }
    else
    {
        cout << "ya ne znau ety shkoly";
    }

    return 0;
}
