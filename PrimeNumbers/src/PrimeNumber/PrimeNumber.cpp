#include "PrimeNumber.h"

constexpr auto FIRST_PRIMAL_NUMBER = 2;

bool PrimeNumber::is(unsigned int number)
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

std::vector<unsigned int> PrimeNumber::getUpTo(unsigned int last)
{
    std::vector<unsigned int> result;

    for (unsigned int number = FIRST_PRIMAL_NUMBER; number <= last; number++)
    {
        if (is(number)) result.push_back(number);
    }

    return result;
}

std::vector<unsigned int> PrimeNumber::getFirsts(unsigned int count)
{
    std::vector<unsigned int> result;

    for (unsigned int number = FIRST_PRIMAL_NUMBER; result.size() < count; number++)
    {
        if (is(number)) result.push_back(number);
    }

    return result;
}

unsigned int PrimeNumber::get(unsigned int n)
{
    int counter = 0;

    for (unsigned int number = FIRST_PRIMAL_NUMBER; ; number++)
    {
        if (is(number) && ++counter == n) return number;
    }
}
