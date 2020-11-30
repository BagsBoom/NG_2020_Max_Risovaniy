#include <iostream>
#define sizeNum 5
using namespace std;

int main()
{
    int num[5];
    int i,j;
    int maxSize;
    for(i = 0; i < sizeNum; i++){
        cout << "Enter number - ";
        cin >> num[i];
        if(num[i] > maxSize)
            maxSize = num[i];
    }
    for(i = 0; i <= maxSize; i++){
        for(j = 0; j < sizeNum; j++){
            if(num[j] - i > 0)
                cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
}
