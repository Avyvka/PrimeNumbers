#include <iostream>
#include <vector>

#include "src/PrimeNumbers/PrimeNumbers.h"
#include "src/PrintHelper/PrintHelper.hpp"
#include "src/Math/Math.h"
#include "src/Test/Test.h"

void solution(int k1, int k2)
{
    PrimeNumbers primeNumbers;
    PrintHelper printHelper;
    Test test;
    Math math;

    // 1
    {
        int number;
        std::cout << "Привет. Напиши какое-нибудь число, которое > 2: ";
        std::cin >> number;

        std::string result = primeNumbers.has(number) ? "простое" : "не простое";
        std::cout << number << " - " << result << " число" << "\n";

        std::cout << std::endl;
    }

    // 2
    {
        int count = (int) primeNumbers.getUpTo(k1).size();

        std::cout << "Простых чисел, меньших " << k1 << ": " << count << "\n";

        test.formulaTwoThree(k1, count);

        std::cout << std::endl;
    }
    
    // 3
    {
        int count = 100;

        std::vector<unsigned int> firstPrimes = primeNumbers.getFirsts(count);

        std::cout << "Первые " << count << " простых чисел:" << "\n";
        printHelper.printAsTable(firstPrimes);

        std::cout << std::endl;
    }

    // 4 
    {
        unsigned int number = primeNumbers.get(k2);

        std::cout << k2 << "-e простое число - это: " << number << "\n";

        test.formulaFour(k2, number);

        std::cout << std::endl;
    }

    // 5
    {
        int count = 100;

        std::vector<unsigned int> firstPrimes = primeNumbers.getFirsts(count);

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
