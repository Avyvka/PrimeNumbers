#include "SimpleNumbers.h"

#define FIRST_PRIMAL_NUMBER 2

bool SimpleNumbers::isPrime(int number)
{   
    // 0 и 1 - не простые числа
    if (number < FIRST_PRIMAL_NUMBER) return false;

    // “ак как один из делителей составного числа n об€зательно sqrt(n),
    // алгоритм можно останавливать, после вычеркивани€ чисел дел€щихс€ на sqrt(n).
    const double last = std::sqrt(number);
    
    for (int i = FIRST_PRIMAL_NUMBER; i <= last; i++)
    {
        if (number % i == 0) return false;
    }
        
    return true;
}

std::vector<int> SimpleNumbers::getUpTo(int last)
{
    std::vector<int> result;

    for (int i = FIRST_PRIMAL_NUMBER; i <= last; i++)
    {
        if (isPrime(i)) result.push_back(i);
    }

    return result;
}

std::vector<int> SimpleNumbers::getFirst(int count)
{
    std::vector<int> result;

    for (int i = FIRST_PRIMAL_NUMBER; result.size() < count; i++)
    {
        if (isPrime(i)) result.push_back(i);
    }

    return result;
}

int SimpleNumbers::get(int n)
{
    int counter = 0;

    for (int number = FIRST_PRIMAL_NUMBER; ; number++)
    {
        if (isPrime(number) && ++counter == n) return number;
    }
}
