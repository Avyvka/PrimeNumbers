#pragma once

#include <vector>
#include <cmath>

class Math
{
public:
	template<typename T>
	double arithmeticMean(std::vector<T> vector)
	{
		double sum = 0;

		for (T element : vector) sum += element;

		return sum / vector.size();
	}

	template<typename T>
	double geometricMean(std::vector<T> vector)
	{
		double result = 1;

		for (T element : vector) result *= element;

		return std::pow(result, 1.0 / vector.size());
	}

	template<typename T>
	double rootMeanSquare(std::vector<T> vector)
	{
		double mean = 0;

		for (T element : vector) mean += std::pow(element, 2);

		return std::sqrt(mean / vector.size());
	}

	template<typename T>
	double harmonicMean(std::vector<T> vector)
	{
		double mean = 0;

		for (T element : vector) mean += 1.0 / element;

		return vector.size() / mean;
	}
};