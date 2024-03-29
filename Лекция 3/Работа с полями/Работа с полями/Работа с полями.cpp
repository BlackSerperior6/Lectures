#include <iostream>
#include <string>

using namespace std;

struct Human
{
    string Name;
    int Weight;
    int Age;

};

struct Appartment 
{
    string Name;
    int price;
    int floor;
    int size;
};

int main()
{
    setlocale(LC_ALL, "RUS");
    Human Ivan = { "Ivan", 80, 30 };
    cout << Ivan.Age + Ivan.Weight << endl;
    cout << (Ivan.Age < Ivan.Weight) << endl << endl;

    Appartment v;
    cout << "Введите имя квартиры" << endl;
    getline(cin, v.Name);
    cout << v.Name << endl;
    cout << "Введите цену" << endl;
    cin >> v.price;
    cout << v.price << endl;
}
