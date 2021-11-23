#include <iostream>

void zadacha1()
{
    float cena{ 109.99 };
    for (float i{ 0.1 }; i < 1.1; i += 0.1)
    {
        std::cout << i * cena << " ";
    }
    return;
}

void zadacha2()
{
    int N{ 5 };
    float R{ 1 };
    for (float i{ 1 }; i != N+1; i++)
    {
        R = R * (1 + (i / 10));
    }
    std::cout << "\n\n" << R;
    return;
}

void zadacha3()
{
    std::cout << "\n\n";
    int N{ 5 }, SUM{ 0 };
    for (int i = 1; i <= 2 * N - 1; i += 2)
    {
        SUM = SUM + i;
        std::cout << SUM << " ";
    }
    return;
}

void zadacha4()
{
    float A{ 1.1 }, SUM{ 1 }, P{ 1 };
    int N{ 3 };
    for (int i{ 1 }; i != N+1; i++)
    {
        P = P * A;
        SUM = SUM + P;
    }
    std::cout << "\n\n" << SUM;
    return;
}

void zadacha5()
{
    float A{ 1.1 }, SUM{ 1 }, P{ 1 };
    int N{ 3 }, K{ -1 };
    for (int i{ 1 }; i != N+1; i++)
    {
        P = P * A;
        SUM = SUM + P*K;
        K *= -1;
    }
    std::cout << "\n\n" << SUM;
    return;
}

void main()
{
    zadacha1();
    zadacha2();
    zadacha3();
    zadacha4();
    zadacha5();
    return;
}