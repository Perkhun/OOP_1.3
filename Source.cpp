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
	cout << "ĳ����� �������� ���� �� �����: " << k.divSum(10) << endl;
	cout << "ĳ����� ���� �� �����: " << k.div(200, 2) << endl;
	
	Money m;
	
	m.Init(500, 3);
	cout << "���������: " << lessthan(m, k);
}