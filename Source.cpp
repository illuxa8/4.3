// Lab_04_3.cpp
// Мельничук Ілля
// Лабораторна робота № 4.3
// Табуляція функції, заданої формулою: функція з параметрами
// Варіант 15
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main() {
	double a, b, c, xp, F, xk ,dx;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	cout << "dx = ";
	cin >> dx;
	cout << "xp = ";
	cin >> xp;
	cout << "xk = ";
	cin >> xk;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "F" << " |" << endl;
	cout << "---------------------------" << endl;

	while (xp <= xk) {
		if (xp < 0 && b != 0)
		{
			F = -a * pow(xp, 2) + b;
		}
		else if (xp > 0 && b == 0)
			{
				F = (xp / (xp - c)) + 5.5;
			}
			else
			{
				F = xp / (-c);
			}
		cout << "|" << setw(7) << setprecision(2) << xp
			<< " |" << setw(10) << setprecision(3) << F
			<< " |" << endl;
		xp += dx;
	}
	cout << "---------------------------" << endl;
}