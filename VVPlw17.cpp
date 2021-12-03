#include <iostream>

void zadacha1()
{
    int const N{ 10 };
    int A[N], K{ 1 }, L{ 4 };
    for (int i{ 0 }; i < N; i++)
    {
        A[i] = i;
    }
    float S{ 0 };
    for (int i{ K }; i <= L; i++)
    {
        S = S + A[i];
    }
    S = S / (L - K + 1);
    std::cout << S << "\n\n";
    return;
}

void zadacha2()
{
    int const N{ 10 };
    bool posled{true};
    int A[N], r;
    for (int i{ 0 }; i < N; i++)
    {
        A[i] = i;
    }
    r = A[1] - A[0];
    for (int i{ 2 }; i < N; i++)
    {
        if (A[i] - A[i - 1] != r)
        {
            posled = false;
            break;
        }
    }
    if (posled == true)
    {
        std::cout << r;
    }
    else
    {
        std::cout << 0;
    }
    std::cout << "\n\n";
    return;
}

void zadacha3()
{
    int const N{ 10 };
    int A[N], min;
    for (int i{ 0 }; i < N; i++)
    {
        A[i] = i;
    }
    min = A[0];
    for (int i{ 0 }; i < N; i += 2)
    {
        if (A[i] < min)
        {
            min = A[i];
        }
    }
    std::cout << min << "\n\n";
    return;
}

void zadacha4()
{
    int const N{ 10 };
    int A[N], max;
    for (int i{ 0 }; i < N; i++)
    {
        A[i] = i;
    }
    if (A[N - 1] > A[N - 2])
    {
        max = A[N - 1];
        std::cout << max;
        return;
    }
    for (int i{ N - 2 }; i >= 0; i--)
    {
        if (A[i] > A[i + 1] && A[i] > A[i - 1])
        {
            max = A[N - 1];
            std::cout << max;
            return;
        }
    }
}
void zadacha5()
{
    std::cout << "\n\n";
    int const N{ 10 };
    int A[N];
    for (int i{ 0 }; i < N; i++)
    {
        A[i] = i;
    }
    A[6] = 1;
    for (int i{ 0 }; i < N-1; i++)
    {
        for (int j{ i+1 }; j < N; j++)
        {
            if (A [i] == A[j])
            {
                std::cout << i << " " << j;
                return;
            }
        }
    }
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