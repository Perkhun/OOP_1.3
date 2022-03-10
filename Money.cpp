#include "Money.h"
#include <iostream>
#include <sstream>

using namespace std;

void Money::setCurrency(double nominal, int count)
{
	double n = nominal;
	switch ((int)nominal)
	{
	case 500: {
		n500 = count;

		break;
	}
	case 200: {
		n200 = count;

		break;
	}
	case 100: {
		n100 = count;

		break;
	}
	case 50: {
		n50 = count;

		break;
	}
	case 20: {
		n20 = count;

		break;
	}
	case 10: {
		n10 = count;

		break;
	}
	case 5: {
		n5 = count;

		break;
	}
	case 2: {
		n2 = count;

		break;
	}
	case 1: {
		n1 = count;

		break;
	}
	case 0: {
		if (int(n * 100) == 50) c50 = count;
		else if (int(n * 100) == 25) c25 = count;
		else if (int(n * 100) == 10) c10 = count;
		else if (int(n * 100) == 5) c5 = count;
		else if (int(n * 100) == 2) c2 = count;
		else if (int(n * 100) == 1) c1 = count;
	}

	}
}

int Money::getCurrency(double nominal) const
{
	double n = nominal;
	switch (int(nominal))
	{
	case 500: return n500;
	case 200: return n200;
	case 100: return n100;
	case 50: return n50;
	case 20: return n20;
	case 10: return n10;
	case 5: return n5;
	case 2: return n2;
	case 1: return n1;
	case 0: {

	}
		  if (int(n * 100) == 50) return c50;
		  else if (int(n * 100) == 25) return c25;
		  else if (int(n * 100) == 10) return c10;
		  else if (int(n * 100) == 5) return c5;
		  else if (int(n * 100) == 2) return c2;
		  else if (int(n * 100) == 1) return c1;
	}

	return -1;
}

double Money::sum() const
{
	return
		n500 * 500 +
		n200 * 200 +
		n100 * 100 +
		n50 * 50 +
		n20 * 20 +
		n10 * 10 +
		n5 * 5 +
		n2 * 2 +
		n1 * 1 +
		c50 * 0.5 +
		c25 * 0.25 +
		c10 * 0.1 +
		c5 * 0.05 +
		c2 * 0.02 +
		c1 * 0.01;

}

double Money::divSum(double value) const
{
	return sum() / value;
}

double Money::div(double nominal, double value) const
{
	if ((int)nominal == 500  || (int)nominal == 200 || (int)nominal == 100 || (int)nominal == 50 || (int)nominal == 20 || (int)nominal == 10 || (int)nominal == 5 || (int)nominal == 2 || (int)nominal == 1 || int(nominal*100) == 50 || int(nominal*100) == 25 || int(nominal*100) == 10 || int(nominal*100) == 5 || int(nominal *100) == 2 || int(nominal*100) == 1)
		return (getCurrency(nominal) * nominal) / value;
	else return 0;
}


bool Money::Init(double nominal, int count)
{
	if ((int)nominal == 500 || (int)nominal == 200 || (int)nominal == 100 || (int)nominal == 50 || (int)nominal == 20 || (int)nominal == 10 || (int)nominal == 5 || (int)nominal == 2 || (int)nominal == 1 || int(nominal * 100) == 50 || int(nominal * 100) == 25 || int(nominal * 100) == 10 || int(nominal * 100) == 5 || int(nominal * 100) == 2 || int(nominal * 100) == 1)
	{
		
		setCurrency(nominal, count);
			return true;
	}
	else
		return false;
}

void Money::Display() const
{
	
	cout << toString();
}

void Money::Read()
{
	double nominal;
	int count;

	for (;;) //while (true)
	{
		cout << "¬вед≥ть ном≥нал: "; cin >> nominal;	
		if (nominal == 0)
		{
			return;
		}
		cout << "¬вед≥ть к≥льк≥сть: "; cin >> count;
		if ((!(Init(nominal, count))))
		{
			cout << "Error!!!" << endl;
		}
	};
	 
}

string Money::toString() const
{
	double sm = sum();
	stringstream sout;
	sout << "√ривень:  " << trunc(sm) << ", коп≥йок: " << int((sm - trunc(sm)) * 100 )<< endl;
	// √ривень: 525, коп≥йок: 55

	return sout.str();
}

bool lessthan(const Money& f, const Money& s)
{
	return f.sum() < s.sum();
}

bool greatthan(const Money& f, const Money& s)
{
	return f.sum() > s.sum();
}
