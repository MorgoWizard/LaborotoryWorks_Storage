#include <iostream>

const float Pi = 3.14;

float PowerA3(float A, float B)
{
    B = A * A * A;
    return B;
}

int Sign(float X)
{
    if (X < 0)
    {
        return -1;
    }
    if (X == 0)
    {
        return 0;
    }
    if (X > 0)
    {
        return 1;
    }
}

float RingS(float R1, float R2)
{
    return Pi * (R1 * R1 - R2 * R2);
}

int Quarter(float x, float y)
{
    if (x > 0 && y > 0)
    {
        return 1;
    }
    if (x < 0 && y > 0)
    {
        return 2;
    }
    if (x < 0 && y < 0)
    {
        return 3;
    }
    if (x > 0 && y < 0)
    {
        return 4;
    }
}

float Fact2(int N)
{
    float P{ 1 }, K;
    if (N % 2 == 1)
    {
        K = 3;
        while (K <= N)
        {
            P *= K;
            K += 2;
        }
    }
    else
    {
        K = 2;
        while (K <= N)
        {
            P *= K;
            K += 2;
        }
    }
    return P;
}

float B;

void main()
{
    std::cout << PowerA3(2, B) << "\n";
    std::cout << PowerA3(3, B) << "\n";
    std::cout << PowerA3(4, B) << "\n";
    std::cout << PowerA3(5, B) << "\n";
    std::cout << PowerA3(6, B) << "\n\n";

    std::cout << Sign(-12) << "\n";
    std::cout << Sign(0) << "\n";
    std::cout << Sign(51) << "\n\n";

    std::cout << RingS(5,4) << "\n";
    std::cout << RingS(11,2) << "\n";
    std::cout << RingS(7,6) << "\n\n";

    std::cout << Quarter(1, 1) << "\n";
    std::cout << Quarter(-1, 1) << "\n";
    std::cout << Quarter(1, -1) << "\n\n";

    std::cout << Fact2(6) << "\n";
    std::cout << Fact2(5) << "\n";

    return;
}
                                                                                