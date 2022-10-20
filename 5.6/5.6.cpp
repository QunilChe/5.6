// ������ 17
#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;
double Func(double b, double q, double i, double& bn, int& k) //��������� �������
{

	if (i > 0) {
		k += i; //�������� �����
		bn *= q; //������� ������ ���� �� ���������
		double t = b * q; // � - ����� ������� �� ���������
		return t + Func(t, q, i - 1, bn, k); //��������� ��������� �����
	}
	else
		return 0;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double b, q, i, bn, S = 0;
	int level = 0; //��������� �������� ���� ������
	cout << "������ ���� - "; cin >> b;
	cout << "��������� - "; cin >> q;
	cout << "����� i-���� ����� - "; cin >> i;


	bn = b; //���������� �� ��������� �����(������ ������ ���� �������� ��� ����������)
	cout << "���� " << i << " ����� - " << Func(b, q, i, bn, level) << endl;
	cout << i << " �� ���� - " << bn << endl;
	cout << "г���� ������ - " << level << endl;
	cout << "������� ������ - " << level + 1 << endl;

	return 0;
}
