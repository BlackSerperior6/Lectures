#include <iostream>

using namespace std;

int max(int a, int b) 
{
    if (a < b)
        return b;

    return a;
}

double max(double a, double b) 
{
    if (a < b)
        return b;

    return a;
}

int main()
{
    cout << max(13, 15) << endl;
    cout << max(14.21, 28.17) << endl;
}
