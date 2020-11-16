#include <iostream>

using namespace std;

int main()
{
    int school[10];
    int mySchool = 0;
    int num;
    int key_1 = 0;
    for (num = 0; num < 10; num++)
    {
        cout << "vvedite nomer shkoli - ";
        cin >> school[num];
    }
    cout << endl;
    cout << "a teper vvedi nomer svoyu shkoly - ";
    cin >> mySchool;
    for(num = 0; num < 10; num++){
        if (school[num] == mySchool)
        {
            cout << "ya znau ety shkoly";
            key_1 = 1;
            break;
        }

    }
    if (key_1 == 0){
        cout << "ya ne znau!";
    }
    return 0;
}
