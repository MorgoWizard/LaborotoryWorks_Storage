#include <iostream>

void zadacha1()
{
	const double Pi = 3.14;
	double a{ 180 }, result;
	result = a / 180 * Pi;
	std::cout << "угол a = " << a << " равен " << result << " радиан";
}

void zadacha2()
{
	const double Pi = 3.14;
	double a{ 1 }, result; // 0 < a < 2
	result = a * 180;
	std::cout << "\n\nугол a = " << a*Pi << " радиан равен " << result << "  градусов";
}

void zadacha3()
{
	double X{ 5 }, A{ 100 }, Y{ 3 }, Z, B;
	Z = A / X;
	B = Z * Y;
	std::cout << "\n\nОдин кг стоит " << Z << " рублей\n" << Y << " кг стоит " << B << " рублей";
}

void zadacha4()
{
	double V1{ 60 }, V2{ 90 }, T{2.5};
	std::cout << "\n\nРасстояние между автомобилями через T часов = " << (V1 + V2) * T;
}

void zadacha5()
{
	double A{ 3 }, x, B{ -3 };
	x = -B / A;
	std::cout << "\n\nx = " << x;
}

void zadacha6()
{
	double A1{ 2 }, A2{ 1 }, B1{ -1 }, B2{ 1 }, C1{ 9 }, C2{6}, x, y, k;
	k = A1 / A2;
	if (k >= 1)
	{
		y = (C2 * k - C1) / (B2 * k - B1);
	}
	else
	{
		y = (C1 / k - C2) / (B1 / k - B2);
	}
	x = (C1 - B1 * y) / A1;
	std::cout << "\n\nx = " << x << " y = " << y;
	
}

int main()
{
	setlocale(LC_ALL, "Russian");
	zadacha1();
	zadacha2();
	zadacha3();
	zadacha4();
	zadacha5();
	zadacha6();
	return 0;
}
