#include "cone.h"

cone::cone() {
	x = y = z = radius = height = 0;
}
cone::cone(double r, double h) {
	x = y = z = 0.0;
	radius = r;
	height = h;
}
cone::cone(double a, double b, double c, double r, double h) {
	x = a;
	y = b;
	z = c;
	radius = r;
	height = h;
}
void cone::setCoordinate(double a, double b, double c) {
	x = a;
	y = b;
	z = c;
}

void cone::setRadius(double r)
{
	radius = r;
}

void cone::setHeight(double h)
{
	height = h;
}

double cone::getRadius()
{
	return radius;
}

double cone::getHeight()
{
	return height;
}

double cone::area()
{
	return Pi * radius * (radius + std::sqrt(height * height + radius * radius));
}

double cone::volume()
{
	return Pi * radius * radius * height / 3;
}

bool cone::operator>(cone& cone)
{
	return this->volume() > cone.volume();
}

bool cone::operator<(cone& cone)
{
	return this->volume() < cone.volume();
}

bool cone::operator==(cone& cone)
{
	return (this->height == cone.height) && (this->radius == cone.radius);
}

