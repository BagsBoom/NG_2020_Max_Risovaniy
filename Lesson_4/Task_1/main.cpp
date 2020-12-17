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
void OutputAllCards(int numOfCards){
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
    return allMoney;
}
void eternalCycle(){
    int NumOfCardFromUser;
    int money;
    while(true){
        NumOfCardFromUser = UserInputNumOfCard();
        money = UserInputMoney();
        card[NumOfCardFromUser - 1] = card[NumOfCardFromUser - 1] + money;
        cards(num_card);
        cout << endl;
        sum(money);
    }
}
int main()
{
    OutputAllCards(num_card);
    eternalCycle();
}
