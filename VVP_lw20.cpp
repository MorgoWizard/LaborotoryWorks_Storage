#include <iostream>
#include <vector>

void zadacha1()
{
    int c{ 1 }, k{ 0 }, buff{0};
    std::vector <int> A = { 1, 1, 1, 2, 2, 4, 21, 3, 5, 5, 5 }, B, C;
    for (int i{ 0 }; i < A.size()-1; i++)
    {
        if (A[i] == A[i + 1])
        {
            c++;
        }
        else
        {
            B.insert(B.begin() + k, 1, c);
            c = 1;
            C.insert(C.begin() + k, 1, A[i]);
            k++;
        }
        buff = i+1;
    }
    B.insert(B.begin() + k, 1, c);
    c = 1;
    C.insert(C.begin() + k, 1, A[buff]);
    k++;
    for (int i{ 0 }; i < A.size(); i++)
    {
        std::cout << A[i] << " ";
    }
    std::cout << "\n";
    for (int i{ 0 }; i < B.size(); i++)
    {
        std::cout << B[i] << " ";
    }
    std::cout << "\n";
    for (int i{ 0 }; i < C.size(); i++)
    {
        std::cout << C[i] << " ";
    }
    std::cout << "\n\n";
    return;
}

void zadacha2()
{
    std::vector <int> A = { 1,1,1,2,2,3,3,3,4,5,5,5,6,7 };
    for (int i{ 0 }; i < A.size(); i++)
    {
        std::cout << A[i] << " ";
    }
    std::cout << "\n";
    int L{ 2 }, c{1}, ns, ks;
    bool n_seria{false};
    for (int i{ 0 }; i < A.size(); i++)
    {
        if (A[i] == A[i + 1])
        {
            c++;
        }
        else
        {
            c = 1;
        }
        if (c > L)
        {
            n_seria = true;
            break;
        }
    }
    while (n_seria == true)
    {
        c = 1;
        for (int i{ 0 }; i < A.size()-1; i++)
        {
            if (A[i] == A[i + 1])
            {
                c++;
            }
            else
            {
                if (c > L)
                {
                    ks = i+1;
                    ns = i - c + 1;
                    c = 1;
                }
                else
                {
                    c = 1;
                }
            }
        }
        A.insert(A.begin() + ks, 1, 0);
        A.erase(A.begin() + ns, A.begin() + ks);
        for (int i{ 0 }; i < A.size()-1; i++)
        {
            if (A[i] == A[i + 1])
            {
                c++;
            }
            else
            {
                c = 1;
            }
            if (c > L)
            {
                n_seria = true;
                break;
            }
            else
            {
                n_seria = false;
                break;
            }
        }// проверка
    }
    for (int i{ 0 }; i < A.size(); i++)
    {
        std::cout << A[i] << " ";
    }
    std::cout << "\n\n";
    return;
}

void zadacha3()
{
    std::vector <int> A = { 1,1,1,2,2,3,3,3,4,5,5,5,6,6 };
    for (int i{ 0 }; i < A.size(); i++)
    {
        std::cout << A[i] << " ";
    }
    std::cout << "\n";
    int K{ 1 }, s1, s2, c{ 1 }, k{ 1 }, ns1, ks1, ns2, ks2, i{ 0 };
    while (k <= K) // определение позиций серии
    {
        if (A[i] == A[i + 1])
        {
            c++;
        }
        else
        {
            ks1 = i;
            ns1 = i - c + 1;
            c = 1;
            k++;
        }
        i++;
    }
    K = 1;
    k = 1;
    i = A.size() - 1;
    while (k <= K) // определение позиций серии 2
    {
        if (A[i] == A[i - 1])
        {
            c++;
        }
        else
        {
            ks2 = i;
            ns2 = i - c + 1;
            c = 1;
            k++;
        }
        i--;
    }
    s1 = A[ns1];
    s2 = A[ks2];
    for (int i{ 1 }; i <= (ks1 - ns1 + 1); i++) // вставка в конце
    {
        A.insert(A.begin() + ks2, 1, s1);
    }
    for (int i{ 1 }; i <= (ks2 - ns2 + 1); i++) // удаление в конце
    {
        A.erase(A.begin() + ks2 + (ks1 - ns1 + 1) );
    }
    for (int i{ 1 }; i <= (ks2 - ns2 + 1); i++) // вставка в начале
    {
        A.insert(A.begin() + ks1 - (ks2 - ns2 + 1), 1, s2);
    }
    for (int i{ 1 }; i <= (ks1 - ns1 + 1); i++) // удаление в начале
    {
        A.erase(A.begin() + ks1 + (ks2 - ns2 - ks1 + ns1 + 1 ));
    }
    for (int i{ 0 }; i < A.size(); i++) 
    {
        std::cout << A[i] << " ";
    }
    std::cout << "\n\n";
    return;
}

void zadacha4()
{
    int max{ 0 }, x, y;
    std::vector<std::vector<int>> A{ {-1,1}, {-5,7}, {-2,1} };
    for (int i{ 0 }; i < A.size(); i++)
    {
        if ((A[i][0]) * (A[i][0]) + (A[i][1]) * (A[i][1]) > max)
        {
            max = (A[i][0])* (A[i][0]) + (A[i][1])* (A[i][1]);
            x = A[i][0];
            y = A[i][1];
        }
    }
    std::cout << x << " " << y;
    return;
}

void main()
{
    zadacha1();
    zadacha2();
    zadacha3();
    zadacha4();
    return;
}