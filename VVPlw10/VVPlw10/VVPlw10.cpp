#include <iostream>

void zadacha1()
{
    int A{ 0 }, B{-1};
    std::cout << "A = " << A << " B = " << B << "\nA > 2 и B <=3 ?";
    if ((A > 2) && (B <= 3))
    {
        std::cout << "\nИстина";
    }
    else
    {
        std::cout << "\nЛожь";
    }
}

void zadacha2()
{
    int A{ 1 }, B{ 2 }, C{ 0 };
    std::cout << "\n\nA = " << A << " B = " << B << " C = " << C << "\nA < B < C ?";
    if ((A < B) && (B < C))
    {
        std::cout << "\nИстина";
    }
    else
    {
        std::cout << "\nЛожь";
    }
}

void zadacha3()
{
    int N{22}, P;
    P = N % 2;
    std::cout << "\n\nЧисло " << N << " двузначное и чётное?";
    if ((N >= 10) && (N <= 99) && (P == 0))
    {
        std::cout << "\nИстина";
    }
    else
    {
        std::cout << "\nЛожь";
    }
}

void zadacha4()
{
    int N{ 111 }, S, D, E;
    std::cout << "\n\nЧисло " << N << ". Цифры данного числа образуют возрастающую или убывающую последовательность?";
    S = floor(N / 100);
    D = floor((N % 100) / 10);
    E = N % 10;
    if (((S > D) && (D > E)) || ((S < D) && (D < E)))
    {
        std::cout << "\nИстина";
    }
    else
    {
        std::cout << "\nЛожь";
    }
}

void zadacha5()
{
    int N{ 1221 }, T, S, D, E;
    std::cout << "\n\nЧисло " << N << " читается одинаково слева направо и справа налево?";
    T = floor(N / 1000);
    S = floor((N % 1000) / 10);
    D = floor((N % 1000) / 100);
    E = N % 10;
    if ((S = D) && (T = E))
    {
        std::cout << "\nИстина";
    }
    else
    {
        std::cout << "\nЛожь";
    }
}

void zadacha6()
{
    int a{ 3 }, b{ 4 }, c{ 5 };
    std::cout << "\n\nТреугольник со сторонами " << a << " " << b << " " << c << " " << " является прямоугольным?";
    a = a * a;
    b = b * b;
    c = c * c;
    bool f{ false };
    if ((a == (b + c)) || (b == (a + c)) || (c == (a + b)))
    {
        f = true;
    }
    if (f == true)
    {
        std::cout << "\nИстина";
    }
    else
    {
        std::cout << "\nЛожь";
    }
}

void zadacha7()
{
    int a{ 1 }, b{ 4 }, c{ 5 };
    std::cout << "\n\nТреугольник со сторонами " << a << " " << b << " " << c << " " << " cуществует?";
    bool f{ false };
    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        f = true;
    }
    if(f == true)
    {
        std::cout << "\nИстина";
    }
    else
    {
        std::cout << "\nЛожь";
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
    zadacha7();
}