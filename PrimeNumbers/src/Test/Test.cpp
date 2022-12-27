#include "Test.h"

/*
         n                         n
    -----------  <  Count  <  -----------
    ln(n) - 3/2               ln(n) - 1/2
*/
bool Test::formulaTwoThree(int n, int count)
{
    double left = n / (ln(n) - 1.0 / 2);
    double right = n / (ln(n) - 3.0 / 2);

    bool result = left < count && count < right;
    
    std::cout << std::round(left) << " < ";
    std::cout << count << " < ";
    std::cout << std::round(right);
    
    std::string str = result ? "верно" : "не верно";
    std::cout << " - " << str << "\n";

    return result;
}

/*
    n( ln(n) + ln(ln(n)) - 3/2 )  <  number  <  n( ln(n) + ln(ln(n)) - 1/2 )
*/
bool Test::formulaFour(int n, unsigned int number)
{
    double left = n * (ln(n) + ln(ln(n)) - 3.0 / 2);
    double right = n * (ln(n) + ln(ln(n)) - 1.0 / 2);

    bool result = left < number && number < right;

    std::cout << std::round(left) << " < ";
    std::cout << number << " < ";
    std::cout << std::round(right);

    std::string str = result ? "верно" : "не верно";
    std::cout << " - " << str << "\n";

    return result;
}

double Test::ln(double number)
{
    return std::log(number);
}
