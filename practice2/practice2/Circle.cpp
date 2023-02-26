#include "Circle.h"

Circle::Circle(float r, float x, float y)
{
	set_circle(r, x, y);
}

void Circle::set_circle(float r, float x, float y)
{
	radius = r;
	x_center = x;
	y_center = y;
}

float Circle::square()
{
	return M_PI * radius * radius;
}

bool Circle::triangle_around(float a, float b, float c)
{
	float p = (a + b + c) / 2;
	float triangleSquare = sqrt(p * (p - a) * (p - b) * (p - c));
	return this->radius == (a * b * c / (4 * triangleSquare));
}

bool Circle::triangle_in(float a, float b, float c)
{
	float p = (a + b + c) / 2;
	float triangleSquare = sqrt(p * (p - a) * (p - b) * (p - c));
	return this->radius == (triangleSquare / p);
}

bool Circle::check_circle(float r, float x_cntr, float y_cntr)
{
	float d = sqrt(pow((x_cntr - x_center), 2) + pow((y_cntr - y_center), 2));

	if (d == 0 && radius == r)
		return false;

	if (d > r + radius)
		return false;

	if (d < abs(r - radius))
		return false;

	return true;
}