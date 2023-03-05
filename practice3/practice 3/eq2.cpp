#include "eq2.h"


eq2::eq2(double _a, double _b, double _c)
{
	a = _a; b = _b; c = _c;
	D = b * b - 4 * a * c;
}

void eq2::set(double _a, double _b, double _c)
{
	a = _a; b = _b; c = _c;
	D = b * b - 4 * a * c;
}

double eq2::find_X()
{
	if (D < 0)
	{
		cout << "������ ���" << endl;
		return 0;
	}
	else if (D == 0)
	{
		cout << "���� ������: " << endl;
		double x = (-b + sqrt(D)) / (2 * a);
		cout << x << endl;
		return x;
	}
	else
	{
		cout << "������ 2, ����������: " << endl;
		double x = max(((-b - sqrt(D)) / (2 * a)), ((-b + sqrt(D)) / (2 * a)));
		return x;
	}
}

double eq2::find_Y(double _x)
{
	return a * _x * _x + b * _x + c;
}
