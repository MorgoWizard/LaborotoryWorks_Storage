#include <iostream>

void zadacha1()
{
	double A{ 0 }, B{ 1 };
	std::cout << "A = " << A << " B = " << B;
	A = A + B;
	B = -B + A;
	A = A - B;
	std::cout << "\nA = " << A << " B = " << B;
}

void zadacha2()
{
	double A{ 0 }, B{ 1 }, C{ 2 }, S;
	std::cout << "\n\nA = " << A << " B = " << B << " C = " << C;
	S = B;
	B = A;
	A = S; // A = B; B = A; C = C
	S = C;
	C = A;
	A = S; // A = C; B = A; C = B
	std::cout << "\nA = " << A << " B = " << B << " C = " << C;
}

void zadacha3()
{
	double A{ 0 }, B{ 1 }, C{ 2 }, S;
	std::cout << "\n\nA = " << A << " B = " << B << " C = " << C;
	S = C;
	C = A;
	A = S; // A = C; B = B; C = A
	S = B;
	B = A;
	A = S; // A = C; B = C; C = B
	std::cout << "\nA = " << A << " B = " << B << " C = " << C;
}

void zadacha4()
{
	double x{ 2 }, y{ -7 };
	x = x * x; // x ^ 2
	y = y - 6 * x;
	x = x * x * x; // x ^ 6
	y = y + 3 * x;
	std::cout << "\n\ny = " << y;
}

void zadacha5()
{
	double x{ 5 }, y{ 2 }, P;
	P = x - 3;
	P = P * P * P; // (x-3) ^ 3
	y = y - 7 * P;
	P = P * P; // (x-3) ^ 6
	y = y + 4 * P;
	std::cout << "\n\ny = " << y;
}

void zadacha6()
{
	double A{ 2 }, P;
	P = A * A; // A^2
	P = P * P; // A^4
	P = P * P; // A^8, вообще можно было бы обойтись и без вспомогательной переменной
	A = P;
	std::cout << "\n\nA^8 = " << A;
}

void zadacha7()
{
	double A{ 2 }, P1, P2;
	P1 = A * A * A; // A^3
	P2 = P1 * P1; // A^6
	P2 = P2 * P2; // A^12
	A = P1 * P2;
	std::cout << "\n\nA^15 = " << A;
}

int main()
{
	zadacha1();
	zadacha2();
	zadacha3();
	zadacha4();
	zadacha5();
	zadacha6();
	zadacha7();
	return 0;
}