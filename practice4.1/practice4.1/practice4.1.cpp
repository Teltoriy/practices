#include <iostream>
#include "cone.h"
#include "CutCone.h"
#include "Ocean.h"
#include "Sea.h"
#include "Gulf.h"
#include <Windows.h>
using namespace std;
void task1() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	cone c1(3, 7);
	cone c2(1, 2, 3, 5, 10);
	cout << "Конус 1 "<< endl;
	cout << "Площадь поверхности: " << c1.area() << endl;
	cout << "Объем: " << c1.volume() << endl;
	cout << "Конус 2 "<< endl;
	cout << "Площадь поверхности: " << c2.area() << endl;
	cout << "Объем: " << c2.volume() << endl;
}
void task2() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	CutCone c1(0, 0,0,10,10,9);
	CutCone c2(0, 0, 0, 10, 40,10);
	cone base(0, 0, 0, 10, 10);
	CutCone derived1(&base, 2);
	CutCone derived2(&base, 5);
	cout << derived1<<endl;
	cout << derived2<<endl;
}
void task3() {
	Ocean pacific = Ocean("Pacific", 178684000000, 4000, { -8.783195, -124.508522 });
	cout << pacific << endl;

	Sea Ohotsk = Sea("Ohotskoye", 1603000000, 821, { 53.715418, 148.960572 }, &pacific);

	Gulf* pGulf = new Gulf();
	cout << "Enter name, square, depth and coords x and y of some gulf in the Pacific Ocean" << endl;
	cin >> (*pGulf);
	pGulf->ocean = &pacific;
	cout << (*pGulf) << endl;
	delete pGulf;

	pGulf = new Gulf();
	cout << "Enter name, square, depth and coords x and y of some gulf in the Ohotskoye Sea" << endl;
	cin >> (*pGulf);
	pGulf->sea = &Ohotsk;
	cout << (*pGulf) << endl;
	delete pGulf;
}

int main()
{
	//task1();
	//task2();
	task3();
}

