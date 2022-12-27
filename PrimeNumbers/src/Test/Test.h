#pragma once

#include <cmath>
#include <iostream>

class Test
{
public:
	/// <summary>
	/// ��������� �������� �� ������������ �������� (2) � (3)
	/// </summary>
	/// <param name="n">- ���������, �������������� �����</param>
	/// <param name="count">- ���������� ������� �����</param>
	bool formulaTwoThree(int n, int count);

	/// <summary>
	/// ��������� �������� �� ������������ ������� (4)
	/// </summary>
	/// <param name="n">- ���������� ����� �������� �����</param>
	/// <param name="number">- ������� �����</param>
	bool formulaFour(int n, unsigned int number);

private:
	double ln(double number);
};

