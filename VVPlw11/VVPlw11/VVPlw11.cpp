#include <iostream>
#include <vector>

void zadacha1()
{
    int A{ 2 }, B{ 1 };
    if (A == B)
    {
        A = 0;
        B = 0;
    }
    else
    {
        if (A > B)
        {
            B = A;
        }
        else
        {
            A = B;
        }
    }
    std::cout << A << " " << B;
}

void zadacha2()
{
    double a{ 12 }, b{ 1 }, c{4}, N, x;
    std::vector<double> M{ a, b, c };
    N = M.size();
    for (int i{ 0 }; i < N - 1; i++)
    {
        for (int j{ i + 1 }; j <= N - 1 ; j++)
        {
            if (M[i] < M[j])
            {
                x = M[i];
                M[i] = M[j];
                M[j] = x;
            }
        }
    }
    std::cout << "\n\n" << M[0] + M[1];
}

void zadacha3()
{
    std::vector<std::vector<double>> M{ {0,0},{21,5},{5,5} }; // координаты точки A, B, C
    double AB, AC;
    AB = sqrt((M[0][0] - M[1][0]) * (M[0][0] - M[1][0]) + (M[0][1] - M[1][1]) * (M[0][1] - M[1][1]));
    AC = sqrt((M[0][0] - M[2][0]) * (M[0][0] - M[2][0]) + (M[0][1] - M[2][1]) * (M[0][1] - M[2][1]));
    if (AB < AC)
    {
        std::cout << "\n\nB(" << M[1][0] << "," << M[1][1] << ") " << "AB = " << AB;
    }
    else
    {
        std::cout << "\n\nC(" << M[2][0] << "," << M[2][1] << ") " << "AC = " << AC;
    }
}

void zadacha4()
{
    double x{ 1 }, y{ -1 };
    std::cout << "\n\nКоординаты точки " << x << " " << y;
    if ((x > 0) && (y > 0))
    {
        std::cout << "\nI-ая четверть";
    }
    if ((x < 0) && (y > 0))
    {
        std::cout << "\nII-ая четверть";
    }
    if ((x < 0) && (y < 0))
    {
        std::cout << "\nIII-ая четверть";
    }
    if ((x > 0) && (y < 0))
    {
        std::cout << "\nIV-ая четверть";
    }
}

void zadacha5()
{
    int N{ -2 };
    std::cout << "\n\n" << N;
    if (N != 0)
    {
        if (N > 0)
        {
            std::cout << " положительное";
        }
        else
        {
            std::cout << " отрицательное";
        }
        if ((N % 2) == 0)
        {
            std::cout << " чётное число";
        }
        else
        {
            std::cout << " нечётное число";
        }
    }
    else
    {
        std::cout << " нулевое число";
    }
}

void zadacha6()
{
    int N{101};
    std::cout << "\n\n" << N;
    if ((N % 2) == 0)
    {
        std::cout << " чётное";
    }
    else
    {
        std::cout << " нечётное";
    }
    if ((N >= 1) && (N <= 9))
    {
        std::cout << " однозначное число";
    }
    if ((N >= 10) && (N <= 99))
    {
        std::cout << " двузначное число";
    }
    if ((N >= 100) && (N <= 999))
    {
        std::cout << " трёхзначное число";
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
    zadacha6();
}
