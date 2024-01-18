#include "pch.h"
#include "Libraries.h"

void In(int rows, int cols)
{
    while (true)
    {
        Console::Write("������� ���������� ����� � �������: ");
        if (Int32::TryParse(Console::ReadLine(), rows))
        {
            if (rows <= 4 && rows > 0)
            {
                break;
            }
            Console::WriteLine("�������� ��������");
        }
    }

    while (true)
    {
        Console::Write("������� ���������� �������� � �������: ");
        if (Int32::TryParse(Console::ReadLine(), cols))
        {
            if (cols <= 6 && cols > 0)
            {
                break;
            }
            Console::WriteLine("�������� ��������");
        }
    }
}

void Display(array<int, 2>^ W, array<int, 2>^ Z, int rows, int cols)
{
    int P;
    Console::Write("������� �������� P: ");
    if (Int32::TryParse(Console::ReadLine(), P))
    {
        array<int>^ T = ExtractElementsAboveP(W, rows, cols, P);
        array<int>^ S = ExtractElementsAboveP(Z, rows, cols, P);

        // ������� ����������
        Console::WriteLine("������ T:");
        for each (int val in T)
        {
            Console::Write(val + " ");
        }

        Console::WriteLine("\n������ S:");
        for each (int val in S)
        {
            Console::Write(val + " ");
        }
    }
    else
    {
        Console::WriteLine("������ �����. ����������, ������� ����� ����� ��� P.");
    }
}