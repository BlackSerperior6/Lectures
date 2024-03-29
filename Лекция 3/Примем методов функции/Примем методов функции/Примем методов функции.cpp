#include <iostream>
#include <string>

using namespace std;

struct Human 
{
	string Name;
	int Weight;
	int Age;

	void Print() 
	{
		cout << Name << endl << Weight << endl << Age << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "RUS");
	Human Ivan = { "Ivan", 80, 30 };
	Ivan.Print();
}