#include "videopicker.h"

videopicker::videopicker()
{

}

void videopicker::list_all()
{
    showCardsAmount();
    for(videocard temp : videocards)
    {
        cout << temp.getName() << "\t" << temp.getSeries() << "\t" << temp.getPrice() << "$" << "\t" << temp.getParrot() << " Parrots" << endl;
    }
}

void videopicker::addVideocard(string name, string series, int price, int parrot)
{
    videocard temp;
    temp.setName(name);
    temp.setSeries(series);
    temp.setPrice(price);
    temp.setParrot(parrot);

    videocards.push_back(temp);
}

void videopicker::showCardsAmount()
{
    cout << "There are " << videocards.size() << " videocards known" << endl;
}
