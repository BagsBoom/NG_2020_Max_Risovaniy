#include <iostream>
#define sizeNum 20
using namespace std;

int main()
{
    int num[20];
    int maxSize = 0;
    int i;
    int sp;
    for(i = 0; i < sizeNum; i++){
        num[i] = 0;
    }
    for(i = 0; i < sizeNum; i++){
        cout << "Enter number - ";
        cin >> num[i];
        if(num[i] > maxSize)
            maxSize = num[i];
        if(num[i] == 0) break;
    }
    for(i = 0; i < sizeNum; i++){
        for(sp = 0; sp < (maxSize - num[i])/2; sp++){
            cout << " ";
        }
        for(int z = 0; z < num[i]; z++){
            cout << "*";
        }
        cout << endl;
        if(num[i] == 0) break;
    }
    cout << endl;
}
