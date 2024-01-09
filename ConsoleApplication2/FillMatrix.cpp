#include "pch.h"
#include "Libraries.h"


void FillMatrix(array<int, 2>^ matrix, int rows, int cols)
{
    Console::WriteLine("������� �������� ��� ������� ({0}x{1}):", rows, cols);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            int value;
            Console::Write("������� [{0}][{1}]: ", i, j);
            if (Int32::TryParse(Console::ReadLine(), value))
            {
                matrix[i, j] = value;
            }
            else
            {
                Console::WriteLine("������ �����. ����������, ������� ����� �����.");
                j--; // ������������ �� ���������� �������
            }
        }
    }
}