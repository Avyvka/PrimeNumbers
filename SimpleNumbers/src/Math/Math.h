#pragma once

#include <vector>
#include <cmath>

class Math
{
public:
	/// <summary>
	/// ��������� ������� ��������������
	/// </summary>
	template<typename T>
	double arithmeticMean(const std::vector<T> vector);

	/// <summary>
	/// ��������� ������� ��������������
	/// </summary>
	template<typename T>
	double geometricMean(const std::vector<T> vector);

	/// <summary>
	/// ��������� ������� ��������������
	/// </summary>
	template<typename T>
	double rootMeanSquare(const std::vector<T> vector);

	/// <summary>
	/// ��������� ������� �������������
	/// </summary>
	template<typename T>
	double harmonicMean(const std::vector<T> vector);
};