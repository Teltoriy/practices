#pragma once
#include <cmath>
#include <iostream>
using namespace std;

class Figure
{
private:
	float	x1, y1,
		x2, y2,
		x3, y3,
		x4, y4;
	float a, b, c, d; 
	float S;

	float P;
public:
	Figure(float _x1, float _x2,
		float _x3, float _x4,
		float _y1, float _y2,
		float _y3, float _y4);

	void show();

	bool is_prug();

	bool is_square();

	bool is_romb();

	bool is_in_circle();

	bool is_out_circle();
};