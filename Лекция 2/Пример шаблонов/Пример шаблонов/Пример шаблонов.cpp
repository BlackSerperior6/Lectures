#include <iostream>

using namespace std;

template <typename Type>
Type sum(Type a, Type b) 
{
    return a + b;
}

template<typename T1, typename T2>
T1 sum2(T1 a, T2 b) //возвращемый аргумент = тип данных первого аргумента
{
    return a + b;
}

int main()
{
    cout << sum(13, 1) << endl; // 14
    cout << sum(16.0, 0.5) << endl; // 16.5
    cout << "------------------" << endl;
    cout << sum2(0.5, 5) << endl; //5.5
    cout << sum2(13, 0.5) << endl; //13

}
