#include "Math.h"

template<typename T>
double Math::arithmeticMean(std::vector<T> vector)
{
	double sum = 0;

	for (double element : vector) sum += element;

	return sum / vector.size();
}

template<typename T>
double Math::geometricMean(const std::vector<T> vector)
{
	double product = 1;

	for (double element : vector) product *= element;

	return std::pow(product, 1.0 / vector.size());
}

template<typename T>
double Math::rootMeanSquare(const std::vector<T> vector)
{
	double mean = 0;

	for (double element : vector) mean += std::pow(element, 2);

	return std::sqrt(mean / vector.size());
}

template<typename T>
double Math::harmonicMean(const std::vector<T> vector)
{
	double mean = 0;

	for (double element : vector) mean += 1.0 / element;

	return vector.size() / mean;
}

template double Math::arithmeticMean<unsigned int>(const std::vector<unsigned int>);
template double Math::geometricMean<unsigned int>(const std::vector<unsigned int>);
template double Math::rootMeanSquare<unsigned int>(const std::vector<unsigned int>);
template double Math::harmonicMean<unsigned int>(const std::vector<unsigned int>);