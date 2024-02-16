#include <iostream>

using namespace std;

int sum(int m, ...) 
{
    int* p = &m;
    int sum = 0;

    while (*p)
    {
        sum += *p;
        p++;
    }

    return sum;
}

int main()
{
    cout << sum(1, 1, 1, 1, 0) << endl;
}
