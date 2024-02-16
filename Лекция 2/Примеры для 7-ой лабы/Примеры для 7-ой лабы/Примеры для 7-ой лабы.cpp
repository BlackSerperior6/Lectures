#include <iostream>

using namespace std;

int sum(int m, ...) // m - явный параметр, которым задано кол-во элементов
{
    int* p = &m + 1;
    int sum = 0;
    for (m != 0; m--;)
    {
        sum += *p;
        p++;
    }

    return sum;
}

int main()
{
    cout << sum(4, 1, 10, 1, 1) << endl; //13
}
