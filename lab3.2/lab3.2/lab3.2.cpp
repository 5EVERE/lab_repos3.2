// Lab_03_2.cpp
// < Гвоздь Северин Тарасович >
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 0.4

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; // вхідний аргумент
	double a; // вхідний параметр
	double b; // вхідний параметр
	double c; // вхідний параметр
	double F; // результат обчислення виразу

	cout << "x = "; cin >> x;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;

	// спосіб 1: розгалуження в скороченій формі
	if (x != 0 && c < 0)
		F = -a * x - c;
	if (x == 0 && c > 0)
		F = (x - a) / -c;
	if (!(x != 0 && c < 0) && !(x == 0 && c > 0))
		F = (b * x) / (c - a);

	cout << "1) F = " << F << endl;

	// спосіб 2: розгалуження в повній формі
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