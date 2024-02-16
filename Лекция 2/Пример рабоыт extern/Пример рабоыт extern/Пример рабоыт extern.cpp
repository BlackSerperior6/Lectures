#include <iostream>

using namespace std;

extern int result = 0;

void func() 
{
    result++;
    cout << result << endl;
}

int main()
{
    func();
    func();
    func();
    func();
}

