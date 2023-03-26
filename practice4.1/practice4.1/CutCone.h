#pragma once
#include "cone.h"
#include "iostream"
class CutCone:	public cone
{
public:
	double height;
	CutCone(double a, double b, double c, double r, double h, double hCut);
	CutCone();
	CutCone(cone* cone, double hCut);
	double area();
	double volume();
	friend std::ostream& operator<< (std::ostream& a, CutCone& cone);

	bool operator==(CutCone& ccone);
};

std::ostream& operator<< (std::ostream& a, CutCone& cone);