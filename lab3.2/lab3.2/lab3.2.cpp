// Lab_03_2.cpp
// < ������ ������� ��������� >
// ����������� ������ � 3.2
// ������������, ������ ��������: ������� � �����������.
// ������ 0.4

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; // ������� ��������
	double a; // ������� ��������
	double b; // ������� ��������
	double c; // ������� ��������
	double F; // ��������� ���������� ������

	cout << "x = "; cin >> x;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;

	// ����� 1: ������������ � ��������� ����
	if (x != 0 && c < 0)
		F = -a * x - c;
	if (x == 0 && c > 0)
		F = (x - a) / -c;
	if (!(x != 0 && c < 0) && !(x == 0 && c > 0))
		F = (b * x) / (c - a);

	cout << "1) F = " << F << endl;

	// ����� 2: ������������ � ����� ����
	if (x != 0 && c < 0)
		F = -a * x - c;
	else
		if (x == 0 && c > 0)
			F = (x - a) / -c;
		else
			F = (b * x) / (c - a);

	cout << "2) F = " << F << endl;

	cin.get();
	return 0;

}