#pragma once

#include <vector>
#include <cmath>

class SimpleNumbers
{
public:
	/// <summary>
	/// Проверяет число на простое
	/// </summary>
	/// <param name="number">Проверяемое число</param>
	/// <returns>true - Простое / false - Нет</returns>
	bool isPrime(int number);

	/// <summary>
	/// Возвращает простые число до некоторого числа
	/// </summary>
	/// <param name="last">Последнее число</param>
	/// <returns>Массив простых чисел</returns>
	std::vector<int> getUpTo(int last);

	/// <summary>
	/// Возвращает первые несколько простых чисел
	/// </summary>
	/// <param name="count">Количество простых чисел</param>
	/// <returns>Массив простых чисел</returns>
	std::vector<int> getFirst(int count);

	/// <summary>
	/// Возвращает простое число по порядковому номеру
	/// </summary>
	/// <param name="n">Порядковый номер числа</param>
	/// <returns>Простое число</returns>
	int get(int n);
};

