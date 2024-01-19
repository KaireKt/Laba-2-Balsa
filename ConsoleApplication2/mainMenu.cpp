#include "pch.h"
#include "Libraries.h"


int mainMenu(array<System::String^>^ args)
{
    int count = 0;
    int rows = 4;
    int cols = 6;
    char choice = '100';

    Console::WriteLine("�������� �������:");
    Console::WriteLine("1 -> ���� ��������");
    Console::WriteLine("2 -> ������� � �����");
    Console::WriteLine("0 -> ���������� ���������");
    do
    {
        array<int, 2>^ W = nullptr;
        array<int, 2>^ Z = nullptr;

        choice = Convert::ToChar(Console::ReadLine());
        switch (choice)
        {
        case '1':
            count += 1;

            W = gcnew array<int, 2>(rows, cols);
            Z = gcnew array<int, 2>(rows, cols);

            FillMatrix(W, rows, cols);
            FillMatrix(Z, rows, cols);
            Console::WriteLine("�������� �������:");
            Console::WriteLine("1 -> ���� ��������");
            Console::WriteLine("2 -> ������� � �����");
            Console::WriteLine("0 -> ���������� ���������");
        case '2':
            if (count > 0)
                Display(W, Z, rows, cols);
            else 
                Console::WriteLine("�� �� ����� ��������");
            Console::WriteLine("\n�������� �������:");
            Console::WriteLine("1 -> ���� ��������");
            Console::WriteLine("2 -> ������� � �����");
            Console::WriteLine("0 -> ���������� ���������");
        }
    } while (choice != '0');

    return 0;
}