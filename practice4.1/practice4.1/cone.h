#pragma once
#include <cmath>
const double Pi = 3.14159265;
class cone
{
private:
	double x, y, z;
	double radius;
	double height;
public:
	cone();
	cone(double r, double h);
	cone(double a, double b, double c, double r, double h);

	void setCoordinate(double a, double b, double c);
	void setRadius(double r);
	void setHeight(double h);

	double getRadius();
	double getHeight();
	double area();
	double volume();

	bool operator> (cone& cone);
	bool operator< (cone& cone);
	bool operator==(cone& cone);


};