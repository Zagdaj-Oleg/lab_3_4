// Lab_03_4.cpp
// ������ ����
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 8

#include <iostream>

using namespace std;

int main()
{
	double x; // ������� ��������
	double y; // ������� ��������
	double R; // ������� ��������

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;
	// ������������ � ����� ����
	if ((y <= R && y >= -x && x <= 0) || (x >= 0 && y >= 0 && x*x-y*y<=R*R) || 
		(x>=0 && y<=0 && x*x-y*y<= R*R) || (x<=0 && y>=-R && y<=x))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}