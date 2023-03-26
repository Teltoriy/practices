#pragma once
#include "Ocean.h"
#include "Sea.h"
class Gulf : public Ocean 
{
public:
	Ocean* ocean;
	Sea* sea;
	Gulf();
	Gulf(string _name, double _square, double _depth, Coords _coordinates, Ocean* ocean);
	Gulf(string _name, double _square, double _depth, Coords _coordinates, Sea* sea);
	friend ostream& operator<<(ostream& stream, Gulf& o);
	friend istream& operator>>(istream& stream, Gulf& o);
};

ostream& operator<<(ostream& stream, Gulf& o);
istream& operator>>(istream& stream, Gulf& o);

