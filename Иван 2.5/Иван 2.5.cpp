// Иван 2.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float x1, x2, y1, y2, x3, y3, S, P, a, b, c;

	cout << "Введите координаты для первой точки: ";
	cin >> x1 >> y1;
	cout << "Введите координаты для второй точки: ";
	cin >> x2 >> y2;
	cout << "Введите координаты для третьей точки: ";
	cin >> x3 >> y3;

a = sqrt(pow (x2 - x1, 2) + pow(y2 - y1, 2));
b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
P = (a + b + c) / 2;
	S = sqrt(P * (P - a) * (P - b) * (P - c));
	cout << "S = " << S << endl;
	cout << "P = " << a + b + c << endl;
	return 0;
}

