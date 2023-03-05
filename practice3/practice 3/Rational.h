#pragma once
#include <iostream>
using namespace std;
class Rational
{
public:
	int a, b;
	Rational(int _a, int _b);
	Rational();
	bool set(int _a, int _b);
	void show();

	bool isValid = false; 

	Rational operator+ (Rational _rightRat);

	void operator++();

	friend Rational operator- (Rational leftRat, Rational rightRat);

	bool operator==(Rational rightRat);

	bool operator> (Rational rightRat);

	void operator= (Rational rightRat);
};