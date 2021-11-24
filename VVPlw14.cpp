#include <iostream>

void zadacha1()
{
    int A{1}, B{5};
    for (int i{ A }; i != B + 1; i++)
    {
        for (int j{ 0 }; j != i; j++)
        {
            std::cout << i << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
    return;
}

void zadacha2()
{
    int A{ 10 }, B{ 3 }, c{ 0 };
    while (A > B)
    {
        A -= B;
        c += 1;
    }
    std::cout << c << "\n\n";
    return;
}

void zadacha3()
{
    float K{ 1 }, R = (1 + K) / 2 * K, N{ 10 };
    while (1>0)
    {
        if (R >= N)
        {
            std::cout << K << "\n\n";
            break;
        }
        K++;
        R = (1 + K) / 2 * K;
    }
    return;
}

void zadacha4()
{
    float P{ 3.11 }, S{ 1000 };
    int K{ 0 };
    P = P / 100 + 1;
    while (S < 1100)
    {
        K++;
        S = S * P;
    }
    std::cout << K << " " << S << "\n\n";
    return;
}

void zadacha5()
{
    int A{30}, B{12};
    while ((A != 0) && (B != 0))
    {
        if (A > B)
        {
            A = A % B;
        }
        else
        {
            B = B % A;
        }
    }
    std::cout << A + B << "\n\n";
}

void zadacha6()
{
    int N{89}, K{ 2 }, at{ 1 }, ap{ 0 }, x;
    while (at < N)
    {
        x = at;
        at = at + ap;
        ap = x;
        K++;
    }
    std::cout << K;
}

void main()
{
    zadacha1();
    zadacha2();
    zadacha3();
    zadacha4();
    zadacha5();
    zadacha6();
    return;
}