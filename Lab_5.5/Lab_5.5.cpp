// Lab_5.5.cpp
// Дорожовець Володимир 
// Лабораторна робота № 5.5
// Рекурсивні функції.
// Варіант 0.6 
#include <iostream>
#include <Windows.h>

int f(int n, int level, int& depth);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int x;
	int n;
	int depth = 0;

	std::cout << "Введіть число n: ";
	std::cin >> n;
	std::cout << "\n";

	x = f(n, 1, depth);

	std::cout << "номер людини, що залишилась: " << x << std::endl;
	std::cout << "кількість повторень: " << depth << std::endl;

	return 0;
}

int f(int n, int level, int& depth)
{
	if (level > depth)
		depth = level;
	std::cout << " level = " << level << std::endl;
	std::cout << "\n";
	if (n == 1)
		return 1;
	if (n % 2)
		return 2 * f(n * 1 / 2, level + 1, depth) + 1;
	else
		return 2 * f(n * 1 / 2, level + 1, depth) - 1;
}