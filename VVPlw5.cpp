#include <iostream>

void zadacha1(double x1, double x2, double y1, double y2) // инициализировали фун-ию, которая находит расстояние между двумя точками с заданными координатами (x1,y1) и (x2,y2)
{
    double L = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    std::cout << "L = " << L;
}

void zadacha2(double A, double B, double C) // инициализировали фун-ию, которая находит длины отрезков AC и BC и их сумму
{
    double AC = abs(A - C);
    double BC = abs(B - C);
    std::cout << "\n\nAC = " << AC << "\nBC = " << BC << "\nAC + BC = " << AC + BC;
}

void zadacha3(double A, double B, double C) // инициализировали фун-ию, которая находит произведение длин отрезков AC и BC с учётом того, что точка C находится между ними
{
    double AC = abs(A - C);
    double BC = abs(B - C);
    std::cout << "\n\nAC*BC = " << AC * BC;
}

void zadacha4(double x1, double x2, double y1, double y2) // инициализировали фун-ию, которая находит периметр и площадь прямоугольника по координатам двух противоположных углов
{
    double a = abs(x1 - x2);
    double b = abs(y1 - y2);
    std::cout << "\n\nS = " << a * b << "\nP = " << 2 * (a + b);
}

void zadacha5(double x1, double y1, double x2, double y2, double x3, double y3) // инициализировали фун-ию, которая находит периметр и площадь треугольника по координатам трёх его вершин
{
    double A = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    double B = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
    double C = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
    double p = (A + B + C) / 2;
    std::cout << "\n\nP = " << p * 2 << "\nS = " << sqrt(p * (p - A) * (p - B) * (p - C));
}

int main()
{
    zadacha1(-1,0,15,2);
    zadacha2(1, 2, 3);
    zadacha3(1, 3, 2);
    zadacha4(0, 5, 0, 5);
    zadacha5(0, 0, 1, 3, 2, 0);
    return 0;
}