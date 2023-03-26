#include "CutCone.h"
CutCone::CutCone(double a, double b, double c, double r, double h, double hCut) : cone(a, b, c, r, h)
{
	this->height = h;
}

CutCone::CutCone() : cone()
{
}

CutCone::CutCone(cone* cone, double hCut) : cone(*cone)
{
	this->height = hCut;
}

double CutCone::area()
{
	double _rad2 = cone::getRadius() * (cone::getHeight() - height) / cone::getHeight();

	return Pi * (cone::getRadius() + _rad2) * sqrt(pow(height, 2) + pow((cone::getRadius() - _rad2), 2)) + Pi * _rad2 * _rad2 + Pi * pow(cone::getRadius(), 2);
}

double CutCone::volume()
{
	double _rad2 = cone::getRadius() * (cone::getHeight() - height) / cone::getHeight();
	cone temp(0, 0, 0, _rad2, cone::getHeight() - height);
	return cone::volume() - temp.volume();
}

bool CutCone::operator==(CutCone& ccone)
{
	return (this->height == ccone.height) && (this->getRadius() == ccone.getRadius()) && (this->getHeight() == this->getHeight());
}

std::ostream& operator<<(std::ostream& a, CutCone& cone)
{
	a << cone.area() << " " << cone.volume();
	return a;
}
