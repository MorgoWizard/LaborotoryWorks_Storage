#include <iostream>

void zadacha1()
{
	int N{6248}, result;
	result = N % 60;
	std::cout << "С начала последней минуты прошло" << result << " секунд";
}

void zadacha2()
{
	int K{11}, result;
	result = K % 7;
	std::cout << "\n\nНомер K-го дня " << result;
}

void zadacha3()
{
	int K{ 11 }, N{2}, result;
	result = K % 7 + N - 1;
	std::cout << "\n\nНомер K-го дня (1-я января было днём недели с номером " << N << ") " << result;
}

void zadacha4()
{
	int A{ 20 }, B{ 7 }, C{3}, k, S;
	k = floor(A / C) * floor(B / C);
	S = A * B - k * C * C;
	std::cout << "\n\nКоличество квадратов " << k << "\nНезанятая площадь " << S;
}

void zadacha5()
{
	int N{ 2001 }, result;
	result = ceil((double)N / 100);
	std::cout << "\n\n" << N << " год - " << result << " столетие";
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