#include <iostream>
#include <vector>

void zadacha1()
{
	int in{ 0 };
	std::vector <int> A = {1, 1, 1, 2, 2, 3};
	int R = A.size();
	for (int i{ 0 }; i < R; i++)
	{
		std::cout << A[i] << " ";
	}
	std::cout << "\n";
	while (in < R-1)
	{
		if (A[in] == A[in + 1])
		{
			A.erase(A.begin()+in+1);
		}
		else
		{
			in++;
		}
		R = size(A);
	}
	for (int i{ 0 }; i < R; i++)
	{
		std::cout << A[i] << " ";
	}
	std::cout << "\n\n";
	return;
}

void zadacha2()
{
	int x, c{ 0 };
	std::vector <int> A = { 1, 1, 2, 2, 3 };
	for (int i{ 0 }; i < A.size(); i++)
	{
		std::cout << A[i] << " ";
	}
	std::cout << "\n";
	std::vector <int> B = A;
	while (B.size() != 0)
	{
		x = B[0];
		c = 0;
		for (int i{ 0 }; i < B.size(); i++)
		{
			if (B[i] == x)
			{
				c++;
			}
		}
		if (c == 2)
		{
			for (int i{ 1 }; i <= 2; i++)
			{
				for (int i{ 0 }; i < A.size(); i++)
				{
					if (A[i] == x)
					{
						A.erase(A.begin() + i);
					}
				}
			}
			
		}
		for (int i{ 0 }; i < B.size(); i++)
		{
			if (B[i] == x)
			{
				B.erase(B.begin() + i);
			}
		}
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
	int min{}, max{};
	std::vector <int> A = { 5, 10, 6, 2, 3 };
	for (int i{ 0 }; i < A.size(); i++)
	{
		std::cout << A[i] << " ";
	}
	std::cout << "\n";
	for (int i{ 0 }; i < A.size(); i++)
	{
		if (A[i] < A[min])
		{
			min = i;
		}
	}
	A.insert(A.begin() + min, 1, 0);
	for (int i{ 0 }; i < A.size(); i++)
	{
		if (A[i] > A[max])
		{
			max = i;
		}
	}
	A.insert(A.begin() + max + 1, 1, 0);
	for (int i{ 0 }; i < A.size(); i++)
	{
		std::cout << A[i] << " ";
	}
	std::cout << "\n\n";
	return;
}

void zadacha4()
{
	std::vector <int> A = { 1, -1, 3, -10, 0 };
	for (int i{ 0 }; i < A.size(); i++)
	{
		std::cout << A[i] << " ";
	}
	std::cout << "\n";
	for (int i{ 0 }; i < A.size(); i++)
	{
		if (A[i] < 0)
		{
			A.insert(A.begin() + i + 1,1,0);
		}
	}
	for (int i{ 0 }; i < A.size(); i++)
	{
		std::cout << A[i] << " ";
	}
	std::cout << "\n\n";
	return;
}

void zadacha5()
{
	std::vector <int> A = { 1, -1, 3, -10, 0 };
	for (int i{ 0 }; i < A.size(); i++)
	{
		std::cout << A[i] << " ";
	}
	std::cout << "\n";
	for (int i{ 0 }; i < A.size(); i++)
	{
		if (A[i] > 0)
		{
			A.insert(A.begin() + i, 1, 0);
			i++;
		}
	}
	for (int i{ 0 }; i < A.size(); i++)
	{
		std::cout << A[i] << " ";
	}
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