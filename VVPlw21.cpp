#include <iostream>
#include <vector>

void zadacha1()
{
    int p, a, n;                          // 7-ой {1,2,3,4,5,6,7},{8,9,10,11,12,13,14},{15,16,17,18,19,20,21},{22,23,24,25,26,27,28},{29,30,31,32,33,34,35},{36,37,28,39,40,41,42},{43,44,45,46,47,48,49}
    std::vector<std::vector<double>> A{ {1,2,3,4,5}, {6,7,8,9,10}, {11,12,13,14,15}, {16,17,18,19,20}, {21,22,23,24,25} }; // 5-ый 
    int m = A.size();                     // 3-ий {1, 2, 3 }, {4, 5, 6}, {7, 8, 9} 
    p = m;
    for (int k{ m - 2 }; k > 0; k = k - 2)
    {
        --p;
        n = m - p - 1;

        std::cout << A[n][n] << " "; // вывод левый верхний угол
        //std::cout << "\n";

        for (a = n + 1; a < p; a++) // вывод левой грани
        {
            std::cout << A[a][n] << " ";
        }
        //std::cout << "\n";

        std::cout << A[p][n] << " "; // вывод левый нижний угол
        //std::cout << "\n";

        for (a = n + 1; a < p ; a++) // вывод нижней грани
        {
            std::cout << A[p][a] << " ";
        }
        //std::cout << "\n";

        std::cout << A[p][p] << " "; // вывод правый нижний угол
        //std::cout << "\n";

        for (a = 1; p - a > n; a++) // вывод правой грани
        {
            std::cout << A[p - a][p] << " ";
        }
        //std::cout << "\n";

        std::cout << A[n][p] << " "; // вывод верхний угол
        //std::cout << "\n";

        for (a = 1; p - a > n; a++) // вывод верхней грани
        {
            std::cout << A[n][p - a] << " ";
        }
        //std::cout << "\n";
    }
    n = round(m/2);
    std::cout << A[n][n]; // центр матрицы
}

void zadacha2()
{
    std::vector<std::vector<double>> A{ {1,2,3}, {4,5,6}, {7,8,9}, {10,11,12} };
    int N = A[0].size();
    int K{ 2 };
    double sum{ 0 }, pro{ 1 }; // изначально сумма равна нулю, а произведение единице, чтобы начальное значение суммы не влияло на конечное, как и начальное значение для произведения ( если бы произведение изначально равнялось нулю, то при умножении оно всегда равнялось бы нулю )
    for (int i{ 0 }; i < N; i++) // цикл, пробегающий по фиксированной строке, меняя столбцы
    {
        sum = sum + A[K-1][i];
        pro = pro * A[K-1][i];
    }
    std::cout << "\n\nСумма = " << sum << " Произведение = " << pro;
}

void zadacha3()
{
    std::vector<std::vector<double>> A{ {1,2,3}, {4,5,6}, {7,8,9}, {10,11,12} };
    int M = A.size();
    int N = A[0].size();
    int nomer, min, pro;

    int j{ 0 };
    pro = 1;
    for (int i{ 0 }; i < M; i++)
    {
        pro = pro * A[i][j];
    }
    min = pro;  // за минимум берём значение произведения первого столбика
    nomer = j + 1;

    for(j;j < N;j++)  // далее сравниваем минимум с остальными произведениями и получаем ответ
    {
        pro = 1;
        for (int i{ 0 }; i < M; i++)
        {
            pro = pro * A[i][j];
        }

        if (pro < min)
        {
            min = pro;
            nomer = j + 1;
        }
    }
    std::cout << "\n\nНомер = " << nomer << " Произведение = " << min;
}

void zadacha4()
{
    std::vector < std::vector < double >> A{ {1,2,3}, {4,5,6}, {7,8,9}, {10,11,12} };
    int M = A.size();
    int N = A[0].size();
    int kolvo{ 0 };
    double sr{ 0 };
    std::cout << "\n\n";

    for (int j{ 0 }; j < N; j++)
    {
        for (int i{ 0 }; i < M; i++) // находим среднее значение для столбца
        {
            sr = sr + A[i][j];
        }
        sr = sr / M;

        for (int i{ 0 }; i < M; i++) // сравниваем каждое значение и считаем
        {
            if (A[i][j] < sr)
            {
                kolvo = kolvo + 1;
            }
        }

        std::cout << j + 1 << " = " << kolvo << "\n"; // выводим полученное значение
        kolvo = 0;
        sr = 0;

    }
}

void zadacha5()
{
    std::vector<std::vector<int>> A{ {2,1,3}, {3,5,6}, {3,1,9}, {3,11,12} };
    int M = A.size();
    int N = A[0].size();
    bool nashel = false;
    for (int j{ 0 }; (j < N) && (nashel == false); j++) // пока не нашли нужный столбец - проверяем
    {
        bool nechet = true;
        for (int i{ 0 }; (i < M) && (nechet == true); i++) // пока не появилось чётное число - проверяем
        {
            int ost = A[i][j] % 2;
            if ( ost != 1)
            {
                nechet = false;
            }
        }

        if (nechet == true)  // если все числа нечётные - сообщаем, что нашли и выводим
        {
            nashel = true;
            std::cout << "\nНомер столбца " << j + 1;
        }
    }
    if (nashel == false) // если за всю проверку так и не нашли - выводим 0
    {
        std::cout << "\n0";
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