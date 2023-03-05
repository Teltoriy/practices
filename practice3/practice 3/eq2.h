#pragma once
#include <iostream>
using namespace std;
class eq2
{
    private:

		double a, b, c;
	
		double D;

    public:


	
	eq2(double _a, double _b, double _c);

	void set(double _a, double _b, double _c);	

	double find_X();

	double find_Y(double _x);

};