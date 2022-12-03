#pragma once

#include <cmath>
#include <iostream>

class Test
{
public:
	/// <summary>
	/// Проверяет значение на соответствие формулам (2) и (3)
	/// </summary>
	/// <param name="n">- последнее, ограничивающее число</param>
	/// <param name="count">- количество простых чисел</param>
	bool formulaTwoThree(int n, int count);

	/// <summary>
	/// Проверяет значение на соответствие формуле (4)
	/// </summary>
	/// <param name="n">- порядковый номер простого числа</param>
	/// <param name="number">- простое число</param>
	bool formulaFour(int n, unsigned int number);

private:
	double ln(double number);
};

