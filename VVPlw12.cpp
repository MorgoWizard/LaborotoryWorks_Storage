#include <iostream>

void zadacha1()
{
    int C{ 12 }, M{ 3 };
    switch (C)
    {
    case 1:
        std::cout << "Первое ";
        break;
    case 2:
        std::cout << "Второе ";
        break;
    case 3:
        std::cout << "Третье ";
        break;
    case 4:
        std::cout << "Четвёртое ";
        break;
    case 5:
        std::cout << "Пятое ";
        break;
    case 6:
        std::cout << "Шестое ";
        break;
    case 7:
        std::cout << "Седьмое ";
        break;
    case 8:
        std::cout << "Восьмое ";
        break;
    case 9:
        std::cout << "Девятое ";
        break;
    case 10:
        std::cout << "Десятое ";
        break;
    case 11:
        std::cout << "Одиннадцатое ";
        break;
    case 12:
        std::cout << "Двенадцатое ";
        break;
    case 13:
        std::cout << "Тринадцатое ";
        break;
    case 14:
        std::cout << "Четырнадцатое ";
        break;
    case 15:
        std::cout << "Пятнадцатое ";
        break;
    case 16:
        std::cout << "Шестнадцатое ";
        break;
    case 17:
        std::cout << "Семнадцатое ";
        break;
    case 18:
        std::cout << "Восемнадцатое ";
        break;
    case 19:
        std::cout << "Девятнадцатое ";
        break;
    case 20:
        std::cout << "Двадцатое ";
        break;
    case 21:
        std::cout << "Двадцать первое ";
        break;
    case 22:
        std::cout << "Двадцать второе ";
        break;
    case 23:
        std::cout << "Двадцать третье ";
        break;
    case 24:
        std::cout << "Двадцать четвёртое ";
        break;
    case 25:
        std::cout << "Двадцать пятое ";
        break;
    case 26:
        std::cout << "Двадцать шестое ";
        break;
    case 27:
        std::cout << "Двадцать седьмое ";
        break;
    case 28:
        std::cout << "Двадцать восьмое ";
        break;
    case 29:
        std::cout << "Двадцать девятое ";
        break;
    case 30:
        std::cout << "Тридцатое ";
        break;
    case 31:
        std::cout << "Тридцать первое ";
        break;
    }
    switch (M)
    {
    case 1:
        std::cout << "января";
        break;
    case 2:
        std::cout << "февраля";
        break;
    case 3:
        std::cout << "марта";
        break;
    case 4:
        std::cout << "апреля";
        break;
    case 5:
        std::cout << "мая";
        break;
    case 6:
        std::cout << "июня";
        break;
    case 7:
        std::cout << "июля";
        break;
    case 8:
        std::cout << "августа";
        break;
    case 9:
        std::cout << "сентября";
        break;
    case 10:
        std::cout << "октября";
        break;
    case 11:
        std::cout << "ноября";
        break;
    case 12:
        std::cout << "декабря";
        break;

    }
}

void zadacha2()
{
    char C{'В'};
    int N{ 1 }, K{ (int)(C) };
    switch(K)
    {
    case -47:
        K = 1;
        break;
    case -57:
        K = 2;
        break;
    case -34:
        K = 3;
        break;
    case -62:
        K = 4;
        break;
    }
    switch (N)
    {
    case 1:
        ++K;
        break;
    case -1:
        --K;
        break;
    }
    if (K == 5)
    {
        K = 1;
    }
    if (K == 0)
    {
        K = 4;
    }
    switch (K)
    {
    case 1:
        std::cout << "\n\nCевер";
        break;
    case 2:
        std::cout << "\n\nЗапад";
        break;
    case 3:
        std::cout << "\n\nЮг";
        break;
    case 4:
        std::cout << "\n\nВосток";
        break;
    }
}

void zadacha3()
{
    std::cout << "\n\n";
    int N{ 22 };
    switch (N)
    {
    case 10:
        std::cout << "Десять ";
        break;
    case 11:
        std::cout << "Одиннадцать ";
        break;
    case 12:
        std::cout << "Двенадцать ";
        break;
    case 13:
        std::cout << "Тринадцать ";
        break;
    case 14:
        std::cout << "Четырнадцать ";
        break;
    case 15:
        std::cout << "Пятнадцать ";
        break;
    case 16:
        std::cout << "Шестнадцать ";
        break;
    case 17:
        std::cout << "Семнадцать ";
        break;
    case 18:
        std::cout << "Восемнадцать ";
        break;
    case 19:
        std::cout << "Девятнадцать ";
        break;
    }
    switch ((int)floor(N / 10))
    {
    case 2:
        std::cout << "Двадцать ";
        break;
    case 3:
        std::cout << "Тридцать ";
        break;
    case 4:
        std::cout << "Сорок ";
        break;
    }
    if (N > 20)
    {
        switch (N % 10)
        {
        case 1:
            std::cout << "одно ";
            break;
        case 2:
            std::cout << "два ";
            break;
        case 3:
            std::cout << "три ";
            break;
        case 4:
            std::cout << "четыре ";
            break;
        case 5:
            std::cout << "пять ";
            break;
        case 6:
            std::cout << "шесть ";
            break;
        case 7:
            std::cout << "семь ";
            break;
        case 8:
            std::cout << "восемь ";
            break;
        case 9:
            std::cout << "девять ";
            break;
        }
    }
    if ((N <= 20) || ((N > 24) && (N <= 29)) || ((N > 34) && (N <= 39)) || (N == 30) || (N == 40))
    {
        std::cout << "учебных заданий";
    }
    if ((N == 21) || (N == 31) || (N == 41))
    {
        std::cout << "учебное задание";
    }
    if (((N > 21) && (N <= 24)) || ((N > 31) && (N <= 34)))
    {
        std::cout << "учебных задания";
    }
}

void zadacha4()
{
    std::cout << "\n\n";
    int N{666};
    switch ((int)floor(N / 100))
    {
    case 1:
        std::cout << "Сто ";
        break;
    case 2:
        std::cout << "Двести ";
        break;
    case 3:
        std::cout << "Триста ";
        break;
    case 4:
        std::cout << "Четыреста ";
        break;
    case 5:
        std::cout << "Пятьсот ";
        break;
    case 6:
        std::cout << "Шестьсот ";
        break;
    case 7:
        std::cout << "Семьсот ";
        break;
    case 8:
        std::cout << "Восемьсот ";
        break;
    case 9:
        std::cout << "Девятьсот ";
        break;
    }
    switch ((int)floor((N % 100) / 10))
    {
    case 2:
        std::cout << "двадцать ";
        break;
    case 3:
        std::cout << "тридцать ";
        break;
    case 4:
        std::cout << "сорок ";
        break;
    case 5:
        std::cout << "пятьдесят ";
        break;
    case 6:
        std::cout << "шестьдесят ";
        break;
    case 7:
        std::cout << "семьдесят ";
        break;
    case 8:
        std::cout << "восемьдесят ";
        break;
    case 9:
        std::cout << "девяносто ";
        break;
    }
    switch (N % 100)
    {
    case 10:
        std::cout << "десять";
        break;
    case 11:
        std::cout << "одиннадцать";
        break;
    case 12:
        std::cout << "двенадцать";
        break;
    case 13:
        std::cout << "тринадцать";
        break;
    case 14:
        std::cout << "четырнадцать";
        break;
    case 15:
        std::cout << "пятнадцать";
        break;
    case 16:
        std::cout << "шестнадцать";
        break;
    case 17:
        std::cout << "семнадцать";
        break;
    case 18:
        std::cout << "восемнадцать";
        break;
    case 19:
        std::cout << "девятнадцать";
        break;
    }
    if ((N % 100) > 19)
    {
        switch (N % 10)
        {
        case 1:
            std::cout << "один";
            break;
        case 2:
            std::cout << "два";
            break;
        case 3:
            std::cout << "три";
            break;
        case 4:
            std::cout << "четыре";
            break;
        case 5:
            std::cout << "пять";
            break;
        case 6:
            std::cout << "шесть";
            break;
        case 7:
            std::cout << "семь";
            break;
        case 8:
            std::cout << "восемь";
            break;
        case 9:
            std::cout << "девять";
            break;
        }
    }
}

void zadacha5()
{
    int N{ 1984 };
    std::cout << "\n\nГод ";
    switch (((N - 1984) / 12) % 5)
    {
    case 0:
        std::cout << "зелёной(ого) ";
        break;
    case 1:
        std::cout << "красной(ого) ";
        break;
    case 2:
        std::cout << "жёлтой(ого) ";
        break;
    case 3:
        std::cout << "белой(ого) ";
        break;
    case 4:
        std::cout << "чёрной(ого) ";
        break;
    }
    switch ((N - 1984) % 12)
    {
    case 0:
        std::cout << "крысы";
        break;
    case 1:
        std::cout << "коровы";
        break;
    case 2:
        std::cout << "тигра";
        break;
    case 3:
        std::cout << "зайца";
        break;
    case 4:
        std::cout << "дракона";
        break;
    case 5:
        std::cout << "змеи";
        break;
    case 6:
        std::cout << "лошади";
        break;
    case 7:
        std::cout << "овцы";
        break;
    case 8:
        std::cout << "обезьяны";
        break;
    case 9:
        std::cout << "курицы";
        break;
    case 10:
        std::cout << "собаки";
        break;
    case 11:
        std::cout << "свиньи";
        break;
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
}