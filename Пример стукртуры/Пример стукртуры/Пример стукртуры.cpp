#include <iostream>
#include <string>
using namespace std;

struct Lada
{
    string Name;
    int distance;
    int price;
};

int main()
{
    setlocale(LC_ALL, "RUS");
    Lada Vesta = {"VESTA", 0, 100000000};
    cout << Vesta.price << endl;
    Vesta.price = 1;
    cout << Vesta.price << endl;
    Lada* pvesta = &Vesta;
    pvesta->price = 1600;
    cout << pvesta->price << endl;
    cout << Vesta.price << endl;

}
