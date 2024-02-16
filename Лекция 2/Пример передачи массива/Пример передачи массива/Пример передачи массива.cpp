#include <iostream>

using namespace std;

void change(int* mas, int n) 
{
    for (int i = 0; i < n; i++) 
    {
        mas[i]++;
        cout << mas[i] << " ";
    }
}

int main()
{
    const int n = 3;
    int arr[n] = {1. 2, 3};
    change($arr[0], n)
}
