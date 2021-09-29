#include <iostream>

void zadacha1(double a, double b)  // инициализировали фун-ию для вычисления площади и периметра прямоугольника со сторонами a и b
{
    double S = a * b;
    double P = 2 * (a + b);
    std::cout << "Площадь S = " << S << "\nПериметр P = " << P;
}

void zadacha2(double d) // инициализировали фун-ию для вычисления длины окружности
{
    const double Pi = 3.14;
    double L = Pi * d;
    std::cout << "\n\nДлина окружности L = " << L;
}

void zadacha3(double a, double b) // инициализировали фун-ию для вычисления среднего арифмитического чисел a и b
{
    double result = (a + b) / 2;
    std::cout << "\n\nСреднее арифметическое " << result;
}

void zadacha4(double a, double b)  // инициализировали фун-ию для вычисления суммы/разности/произведения/частного квадратов чисел a и b
{
    double akv = a * a; // вычислили квадрат числа a
    double bkv = b * b; // вычислили квадрат числа b
    std::cout << "\n\nСумма квадратов = " << akv + bkv;
    std::cout << "\nРазность квадратов = " << akv - bkv;
    std::cout << "\nПроизведение квадтратов = " << akv * bkv;
    std::cout << "\nЧастное квадратов = " << akv / bkv;
}

void zadacha5(double a, double b) // инициализировали фун-ию для вычисления суммы/разности/произведения/частного модулей чисел a и b
{
    double ma = abs(a); // нашли модуль числа a
    double mb = abs(b); // нашли модуль числа b
    std::cout << "\n\nСумма модулей = " << ma + mb;
    std::cout << "\nРазность моулей = " << ma - mb;
    std::cout << "\nПроизведение модулей = " << ma * mb;
    std::cout << "\nЧастное модулей = " << ma / mb;
}


void main()
{
    setlocale(LC_ALL, "Russian"); // чтобы выводить текст на русском языке в консоль
    zadacha1(3, 4);
    zadacha2(5);
    zadacha3(35, 61);
    zadacha4(23, -4);
    zadacha5(23, -3);
}
