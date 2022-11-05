#include <iostream>
#include <vector>

#include "SimpleNumbers.h"
#include "PrintHelper.hpp"
#include "Math.hpp"
#include "Test.h"

void solution(int k1, int k2)
{
    SimpleNumbers simpleNumbers;
    PrintHelper printHelper;
    Test test;
    Math math;

    // 1
    {
        int number;
        std::cout << "Привет. Напиши сюда какое-нибудь число, которое > 2: ";
        std::cin >> number;
        std::string str = simpleNumbers.isPrime(number) ? "простое" : "не простое";
        std::cout << number << " - " << str << " число" << "\n";
        std::cout << std::endl;
    }

    // 2
    {
        int count = (int)simpleNumbers.getUpTo(k1).size();
        std::cout << "Простых чисел, меньших " << k1 << ": " << count << "\n";
        test.formulaTwoThree(k1, count);
        std::cout << std::endl;
    }
    
    // 3
    {
        std::vector<int> firstNumbers = simpleNumbers.getFirst(100);
        std::cout << "Первые 100 простых чисел:" << "\n";
        printHelper.printAsTable(firstNumbers);
        std::cout << std::endl;
    }

    // 4 
    {
        int number = simpleNumbers.get(k2);
        std::cout << k2 << "-e простое число - это: " << number << "\n";
        test.formulaFour(k2, number);
        std::cout << std::endl;
    }

    // 5
    {
        std::vector<int> firstNumbers = simpleNumbers.getFirst(100);

        std::cout << "Среднее арифметическое первых 100 простых чисел: ";
        std::cout << math.arithmeticMean(firstNumbers) << "\n";

        std::cout << "Среднее геометрическое первых 100 простых чисел: ";
        std::cout << math.geometricMean(firstNumbers) << "\n";

        std::cout << "Среднее квадратическое первых 100 простых чисел: ";
        std::cout << math.rootMeanSquare(firstNumbers) << "\n";

        std::cout << "Среднее гармоническое первых 100 простых чисел: ";
        std::cout << math.harmonicMean(firstNumbers) << "\n";
    }
}

int main()
{
    setlocale(LC_ALL, "Ru");
    solution(1000, 500);
}
