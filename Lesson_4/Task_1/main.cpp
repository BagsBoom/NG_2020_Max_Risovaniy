#include <iostream>
#define num_card 10

using namespace std;

int card[10];
int allMoney = 0;

void cards(int numOfCards){
    for (int j = 0; j < numOfCards; j++)
    {
        cout << card[j] << " ";
    }
}
void arrayCycle(int numOfCards){
    for (int i = 0; i < numOfCards; i++)
    {
        card[i] = 0;
    }
}
int UserInputNumOfCard (){
    int nomer;
    cout << "vvedite nomer karti - ";
    cin >> nomer;
    return nomer;
}
int UserInputMoney(){
    int inputMoney;
    cout << "skolko polozhit? ";
    cin >> inputMoney;
    return inputMoney;
}
int sum(int money){
    cout << "v summe na vsex kartochkah - ";
    allMoney = allMoney + money;
    cout << allMoney;
    cout << endl;
}
void eternalCycle(){
    int i;
    int money;
    while(true){
        i = UserInputNumOfCard();
        money = UserInputMoney();
        card[i - 1] = card[i - 1] + money;
        cards(num_card);
        cout << endl;
        sum(money);
    }
}
int main()
{
    arrayCycle(10);
    eternalCycle();
}
