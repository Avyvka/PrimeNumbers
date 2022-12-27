#pragma once

#include <vector>
#include <cmath>

class Math
{
public:
    /// <summary>
    /// Вычисляет среднее арифметическое
    /// </summary>
    template<typename T>
    double arithmeticMean(const std::vector<T> vector);

    /// <summary>
    /// Вычисляет среднее геометрическое
    /// </summary>
    template<typename T>
    double geometricMean(const std::vector<T> vector);

    /// <summary>
    /// Вычисляет среднее квадратическое
    /// </summary>
    template<typename T>
    double rootMeanSquare(const std::vector<T> vector);

    /// <summary>
    /// Вычисляет среднее гармоническое
    /// </summary>
    template<typename T>
    double harmonicMean(const std::vector<T> vector);
};