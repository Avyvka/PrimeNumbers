#pragma once

#include <vector>
#include <iostream>

#define MAX_TABLE_COLUMNS 15

class PrintHelper
{
public:
    template<typename T>
    void print(const std::vector<T> vector)
    {
        for (T element : vector)
        {
            std::cout << element << std::endl;
        }

        std::cout << std::endl;
    }

    template<typename T>
    void printAsTable(const std::vector<T> vector)
    {   
        int mean = (int) std::ceil( std::sqrt(vector.size()) );

        const int columns = (mean > MAX_TABLE_COLUMNS) ? MAX_TABLE_COLUMNS : mean;

        for (int i = 0; i < vector.size(); i++)
        {
            if (i > 0 && i % columns == 0) std::cout << "\n";
            std::cout << vector[i] << "\t";
        }

        std::cout << std::endl;
    }
};

