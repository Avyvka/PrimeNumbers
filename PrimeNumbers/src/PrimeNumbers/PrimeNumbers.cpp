#include "PrimeNumbers.h"

constexpr auto FIRST_PRIMAL_NUMBER = 2;

bool PrimeNumbers::has(unsigned int number)
{   
    // 1,0 � ������ - �� ������� �����
    if (number < FIRST_PRIMAL_NUMBER) return false;

    // ��� ��� ���� �� ��������� ���������� ����� n ����������� sqrt(n),
    // �������� ����� �������������, ����� ������������ ����� ��������� �� sqrt(n)
    const double sqrt = std::sqrt(number);
    
    for (unsigned int i = FIRST_PRIMAL_NUMBER; i <= sqrt; i++)
    {
        if (number % i == 0) return false;
    }
        
    return true;
}

std::vector<unsigned int> PrimeNumbers::getUpTo(unsigned int last)
{
    std::vector<unsigned int> result;

    for (unsigned int number = FIRST_PRIMAL_NUMBER; number <= last; number++)
    {
        if (has(number)) result.push_back(number);
    }

    return result;
}

std::vector<unsigned int> PrimeNumbers::getFirsts(unsigned int count)
{
    std::vector<unsigned int> result;

    for (unsigned int number = FIRST_PRIMAL_NUMBER; result.size() < count; number++)
    {
        if (has(number)) result.push_back(number);
    }

    return result;
}

unsigned int PrimeNumbers::get(unsigned int n)
{
    int counter = 0;

    for (unsigned int number = FIRST_PRIMAL_NUMBER; ; number++)
    {
        if (has(number) && ++counter == n) return number;
    }
}
