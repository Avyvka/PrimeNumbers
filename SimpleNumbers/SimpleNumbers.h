#pragma once

#include <vector>
#include <cmath>

class SimpleNumbers
{
public:
	/// <summary>
	/// ��������� ����� �� �������
	/// </summary>
	/// <param name="number">����������� �����</param>
	/// <returns>true - ������� / false - ���</returns>
	bool isPrime(int number);

	/// <summary>
	/// ���������� ������� ����� �� ���������� �����
	/// </summary>
	/// <param name="last">��������� �����</param>
	/// <returns>������ ������� �����</returns>
	std::vector<int> getUpTo(int last);

	/// <summary>
	/// ���������� ������ ��������� ������� �����
	/// </summary>
	/// <param name="count">���������� ������� �����</param>
	/// <returns>������ ������� �����</returns>
	std::vector<int> getFirst(int count);

	/// <summary>
	/// ���������� ������� ����� �� ����������� ������
	/// </summary>
	/// <param name="n">���������� ����� �����</param>
	/// <returns>������� �����</returns>
	int get(int n);
};

