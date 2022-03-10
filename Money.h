#pragma once
#include <string>
using namespace std;

class Money
{
	int n500 = 0;
	int n200 = 0;
	int n100 = 0;
	int n50 = 0;
	int n20 = 0;
	int n10 = 0;
	int n5 = 0;
	int n2 = 0;
	int n1 = 0;

	int c50 = 0;
	int c25 = 0;
	int c10 = 0;
	int c5 = 0;
	int c2 = 0;
	int c1 = 0;
	
public:
	
	void setCurrency(double nominal, int count);
	int getCurrency(double nominal) const;
	
	double sum() const;
	double divSum(double value) const;
	double div(double nominal, double value) const;

	void Display() const;
	void Read();
	bool Init(double nominal, int count);
	string toString() const;

	friend bool lessthan(const Money& f, const Money& s);	//	Money[500, 3] < Money[100, 3] == false		f.sum() < s.sum();
	friend bool greatthan(const Money& f, const Money& s);	//	Money[500, 3] > Money[100, 3] == true		f.sum() > s.sum();
};


