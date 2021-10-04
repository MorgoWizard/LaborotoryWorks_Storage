#include <iostream>

void zadacha1()
{
    double R{1025}, result;
    result = ceil(R / 1024);
    std::cout << "Файл занимает " << result << " Кб";
}

void zadacha2()
{
    int A{ 10 }, B{ 3 }, result;
    result = floor(A / B);
    std::cout << "\n\nПолных отрезков B в отрезке A = " << result;
}

void zadacha3()
{
    int A{ 10 }, B{ 3 }, result;
    result = A - B * floor(A / B);
    std::cout << "\n\nДлина незанятой части отрезка A = " << result;
}

void zadacha4()
{
    int A{ 42 }, E, D, result;
    D = floor(A / 10);
    E = A % 10;
    result = 10 * E + D;
    std::cout << "\n\nЧисло " << A << " после перестановки превратится в " << result;
}

void zadacha5()
{
    {
        int A{ 421 }, E, D, S, result;
        S = floor(A / 100);
        D = floor((A%100)/10);
        E = A % 10;
        result = 100 * D + 10 * E + S;
        std::cout << "\n\nЧисло " << A << " после преобразований превратится в " << result;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    zadacha1();
    zadacha2();
    zadacha3();
    zadacha4();
    zadacha5();
    return 0;
}
