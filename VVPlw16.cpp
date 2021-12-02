#include <iostream>

void zadacha1()
{
    int const N{ 10 };
    int K{ 1 }, C{ 0 };
    int A[N];
    for (int i{ 0 }; i < N; i++)
    {
        A[i] = K;
        K += 2;
    }
    for (int i{ 0 }; i < N; i++)
    {
        std::cout << A[i] << " ";
    }
    std::cout << "\n\n";
    return;
}

void zadacha2()
{
    int const N{ 10 };
    float A{ 3 }, D{ 2 };
    int M[N], K{1};
    for (int i{ 0 }; i < N; i++)
    {
        M[i] = A;
    }
    while (K < N)
    {
        for (int i{ 1 }; i <= K; i++)
        {
            M[K] = M[K] * D;
        }
        K++;
    }
    for (int i{ 0 }; i < N; i++)
    {
        std::cout << M[i] << " ";
    }
    std::cout << "\n\n";
    return;
}

void zadacha3()
{
    int const N{ 10 };
    int k, A{ 1 }, B{ 1 };
    int M[N]{A,B};
    for (int i{ 2 }; i < 10; i++)
    {
        k = i-1;
        while ( k >= 0)
        {
            M[i] = M[i] + M[k]; // получается так, что можно просто удваивать значение предыдущей(?)
            k--;
        }
    }
    for (int i{ 0 }; i < N; i++)
    {
        std::cout << M[i] << " ";
    }
    std::cout << "\n\n";
    return;
}

void zadacha4()
{
    int const N{10};
    int A[ N ];
    for (int i{ 0 }; i < N; i++)
    {
        A[i] = i;
    }
    for (int i{ 0 }; i < N; i++)
    {
        std::cout << A[i] << " ";
    }
    std::cout << "\n";
    if(N%2 == 1)
    { 
        int x{ (N - 1) / 2 }, k{0};
        while(k<x)
        {
            std::cout << A[k] << " " << A[N - k - 1] << " ";
            k++;
        }
        std::cout << A[k];
    }
    else
    {
        int x{ (N - 1) / 2 }, k{ 0 };
        while (k <= x)
        {
            std::cout << A[k] << " " << A[N - k - 1] << " ";
            k++;
        }
    }
    return;
}

void zadacha5()
{
    int const N{ 10 };
    int A[N], i{0};
    std::cout << "\n\n";
    for (i; i < N; i++)
    {
        A[i] = i;
    }
    i = 0;
    while(i < N)
    {
        if (i % 2 == 1)
        {
            std::cout << A[i] << " ";
        }
        i++;
    }
    i = 0;
    while (i < N)
    {
        if (i % 2 == 0)
        {
            std::cout << A[i] << " ";
        }
        i++;
    }
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