#pragma once

#include <vector>
#include <cmath>

class PrimeNumbers
{
public:
    /// <summary>
    /// Проверяет число на простое
    /// </summary>
    /// <param name="number">- проверяемое число</param>
    /// <returns>true - Простое / false - Нет</returns>
    bool has(unsigned int number);

    /// <summary>
    /// Возвращает простые числа до некоторого числа
    /// </summary>
    /// <param name="last">- последнее число</param>
    /// <returns>Массив простых чисел</returns>
    std::vector<unsigned int> getUpTo(unsigned int last);

    /// <summary>
    /// Возвращает первые несколько простых чисел
    /// </summary>
    /// <param name="count">- количество простых чисел</param>
    /// <returns>Массив простых чисел</returns>
    std::vector<unsigned int> getFirsts(unsigned int count);

    /// <summary>
    /// Возвращает простое число по порядковому номеру
    /// </summary>
    /// <param name="n">- порядковый номер числа</param>
    /// <returns>Простое число</returns>
    unsigned int get(unsigned int n);
};

