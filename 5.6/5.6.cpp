// Варіант 17
#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;
double Func(double b, double q, double i, double& bn, int& k) //визначаємо функцію
{

	if (i > 0) {
		k += i; //збільшуємо рівень
		bn *= q; //множимо перший член на знаменник
		double t = b * q; // т - число множене на знаменник
		return t + Func(t, q, i - 1, bn, k); //повертаємо управління назад
	}
	else
		return 0;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double b, q, i, bn, S = 0;
	int level = 0; //початкове значення рівня рекурсії
	cout << "Перший член - "; cin >> b;
	cout << "Знаменник - "; cin >> q;
	cout << "Номер i-того члена - "; cin >> i;


	bn = b; //переходимо на наступний рівень(робимо другий член основним для обчислення)
	cout << "Сума " << i << " членів - " << Func(b, q, i, bn, level) << endl;
	cout << i << " ий член - " << bn << endl;
	cout << "Рівень рекурсії - " << level << endl;
	cout << "глибина рекурсії - " << level + 1 << endl;

	return 0;
}
