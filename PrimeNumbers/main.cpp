#include <iostream>
#include <vector>

#include "src/PrimeNumber/PrimeNumber.h"
#include "src/PrintHelper/PrintHelper.hpp"
#include "src/Math/Math.h"
#include "src/Test/Test.h"

void solution(int k1, int k2)
{
    PrimeNumber primeNumber;
    PrintHelper printHelper;
    Test test;
    Math math;

    // 1
    {
        int number;
        std::cout << "Привет. Напиши сюда какое-нибудь число, которое > 2: ";
        std::cin >> number;
        std::string result = primeNumber.is(number) ? "простое" : "не простое";
        std::cout << number << " - " << result << " число" << "\n";
        std::cout << std::endl;
    }

    // 2
    {
        int count = (int)primeNumber.getUpTo(k1).size();
        std::cout << "Простых чисел, меньших " << k1 << ": " << count << "\n";
        test.formulaTwoThree(k1, count);
        std::cout << std::endl;
    }
    
    // 3
    {
        std::vector<unsigned int> firstPrimes = primeNumber.getFirsts(100);
        std::cout << "Первые 100 простых чисел:" << "\n";
        printHelper.printAsTable(firstPrimes);
        std::cout << std::endl;
    }

    // 4 
    {
        unsigned int number = primeNumber.get(k2);
        std::cout << k2 << "-e простое число - это: " << number << "\n";
        test.formulaFour(k2, number);
        std::cout << std::endl;
    }

    // 5
    {
        int count = 100;

        std::vector<unsigned int> firstPrimes = primeNumber.getFirsts(count);

        std::cout << "Среднее арифметическое первых " << count << " простых чисел: ";
        std::cout << math.arithmeticMean(firstPrimes) << "\n";

        std::cout << "Среднее геометрическое первых " << count << " простых чисел: ";
        std::cout << math.geometricMean(firstPrimes) << "\n";

        std::cout << "Среднее квадратическое первых " << count << " простых чисел: ";
        std::cout << math.rootMeanSquare(firstPrimes) << "\n";

        std::cout << "Среднее гармоническое первых " << count << " простых чисел: ";
        std::cout << math.harmonicMean(firstPrimes) << "\n";
    }
}

int main()
{
    setlocale(LC_ALL, "Ru");
    solution(1000, 500);
}
