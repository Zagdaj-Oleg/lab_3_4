// Lab_03_4.cpp
// Загдай Олег
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 8

#include <iostream>

using namespace std;

int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R; // вхідний параметр

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;
	// розгалуження в повній формі
	if ((y <= R && y >= -x && x <= 0) || (x >= 0 && y >= 0 && x*x-y*y<=R*R) || 
		(x>=0 && y<=0 && x*x-y*y<= R*R) || (x<=0 && y>=-R && y<=x))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}