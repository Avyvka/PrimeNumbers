#pragma once

#include <vector>
#include <cmath>

class PrimeNumbers
{
public:
    /// <summary>
    /// ��������� ����� �� �������
    /// </summary>
    /// <param name="number">- ����������� �����</param>
    /// <returns>true - ������� / false - ���</returns>
    bool has(unsigned int number);

    /// <summary>
    /// ���������� ������� ����� �� ���������� �����
    /// </summary>
    /// <param name="last">- ��������� �����</param>
    /// <returns>������ ������� �����</returns>
    std::vector<unsigned int> getUpTo(unsigned int last);

    /// <summary>
    /// ���������� ������ ��������� ������� �����
    /// </summary>
    /// <param name="count">- ���������� ������� �����</param>
    /// <returns>������ ������� �����</returns>
    std::vector<unsigned int> getFirsts(unsigned int count);

    /// <summary>
    /// ���������� ������� ����� �� ����������� ������
    /// </summary>
    /// <param name="n">- ���������� ����� �����</param>
    /// <returns>������� �����</returns>
    unsigned int get(unsigned int n);
};

