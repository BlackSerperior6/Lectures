#include <iostream>

using namespace std;

class Date
{    
public:

    Date(int Day, int Month, int Year) 
    {
        day = Day;
        month = Month;
        year = Year;
    }

    Date(Date* d)
    {
        day = d->day;
        month = d->month;
        year = d->year;
    }

    ~Date() 
    {
        cout << "Вы уничтожили Старун" << endl;
    }

    void show()
    {
        cout << day << " " << month << " " << year << endl;
    }

private:
    int day;
    int month;
    int year;
};

int main()
{
    setlocale(LC_ALL, "RUS");

    Date* date = new Date(28, 12, 2004);
    date->show();
    
    Date* date2 = new Date(date);

    delete date;
    delete date2;
}
