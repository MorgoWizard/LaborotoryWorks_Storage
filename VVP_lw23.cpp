#include <iostream>
#include <string>

void zadacha1()
{
    char C{ 'S'};
    std::cout << (char)((int)C - 1) << " " << (char)((int)C + 1);
    std::cout << "\n\n";
    return;
}

void zadacha2()
{
    std::string SNAK{"SSS"};
    int i{ 0 };
    while (i != SNAK.length() - 1)
    {
        if (SNAK[i] != ' ')
        {
            SNAK.insert(SNAK.begin() + i + 1, ' ');
        }
        i++;
    }
    std::cout << SNAK;
    std::cout << "\n\n";
    return;
}

void zadacha3()
{
    std::string SNAK{ "SSaS" };
    int i{ 0 }, c{0};
    while (i < SNAK.length())
    {
        if ((int)SNAK[i] >= 65 && (int)SNAK[i] <= 90)
        {
            c++;
        }
        i++;
    }
    std::cout << c << "\n\n";
    return;
}

void zadacha4()
{
    std::string SNAK{ "SSaSaS" };
    char c{ 'a' };
    int i{ 0 };
    while (i != SNAK.length() - 1)
    {
        if (SNAK[i] == 'a')
        {
            SNAK.insert(SNAK.begin() + i + 1, 'a');
            i++;
        }
        i++;
    }
    std::cout << SNAK;
    std::cout << "\n\n";
    return;
}

void zadacha5()
{
    std::string SNAK{ "SSaSSaS" }, SNAK0{ "SS" }, PROV{""};
    int i{ 0 }, c{ 0 };
    while (i < SNAK.length() - SNAK0.length())
    {
        PROV.push_back(SNAK[i]);
        if (PROV.length() == 3)
        {
            PROV.erase(PROV.begin());
        }
        i++;
        std::cout << PROV << "\n";
        if (PROV == SNAK0)
        {
            c++;
        }
    }
    std::cout << c;
    std::cout << "\n\n";
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
