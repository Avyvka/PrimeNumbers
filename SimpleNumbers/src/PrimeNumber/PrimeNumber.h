#pragma once

#include <vector>
#include <cmath>

class PrimeNumber
{
public:
	/// <summary>
	/// Проверяет число на простое
	/// </summary>
	/// <param name="number">Проверяемое число</param>
	/// <returns>true - Простое / false - Нет</returns>
	bool is(unsigned int number);

	/// <summary>
	/// Возвращает простые числа до некоторого числа
	/// </summary>
	/// <param name="last">Последнее число</param>
	/// <returns>Массив простых чисел</returns>
	std::vector<unsigned int> getUpTo(unsigned int last);

	/// <summary>
	/// Возвращает первые несколько простых чисел
	/// </summary>
	/// <param name="count">Количество простых чисел</param>
	/// <returns>Массив простых чисел</returns>
	std::vector<unsigned int> getFirst(unsigned int count);

	/// <summary>
	/// Возвращает простое число по порядковому номеру
	/// </summary>
	/// <param name="n">Порядковый номер числа</param>
	/// <returns>Простое число</returns>
	unsigned int get(unsigned int n);
};

