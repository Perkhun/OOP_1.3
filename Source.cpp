#include <iostream>
#include "Money.h"
#include <Windows.h>
using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Money k;
	k.Read();
	k.Display();
	cout << endl;
	cout << "Ділення загальної суми на число: " << k.divSum(10) << endl;
	cout << "Ділення суми на число: " << k.div(200, 2) << endl;
	
	Money m;
	
	m.Init(500, 3);
	cout << "Порівняння: " << lessthan(m, k);
}