#include "pch.h"
#include "Libraries.h"



int main(array<System::String^>^ args)
{
    int rows;
    int cols;
    while (true)
    {
        Console::Write("Введите количество рядов в массиве: ");
        if (Int32::TryParse(Console::ReadLine(), rows))
        {
            if (rows <= 4 && rows > 0)
            {
                break;
            }
            Console::WriteLine("Неверное значение");
        }
    }

    while (true)
    {
        Console::Write("Введите количество столбцов в массиве: ");
        if (Int32::TryParse(Console::ReadLine(), cols))
        {
            if (cols <= 6 && cols > 0)
            {
                break;
            }
            Console::WriteLine("Неверное значение");
        }
    }

    int P;

    array<int, 2>^ W = gcnew array<int, 2>(rows,cols);
    array<int, 2>^ Z = gcnew array<int, 2>(rows,cols);

    FillMatrix(W, rows, cols);
    FillMatrix(Z, rows, cols);

    Console::Write("Введите значение P: ");
    if (Int32::TryParse(Console::ReadLine(), P))
    {
        array<int>^ T = ExtractElementsAboveP(W, rows, cols, P);
        array<int>^ S = ExtractElementsAboveP(Z, rows, cols, P);

        // Выводим результаты
        Console::WriteLine("Массив T:");
        for each (int val in T)
        {
            Console::Write(val + " ");
        }

        Console::WriteLine("\nМассив S:");
        for each (int val in S)
        {
            Console::Write(val + " ");
        }
    }
    else
    {
        Console::WriteLine("Ошибка ввода. Пожалуйста, введите целое число для P.");
    }

    return 0;
}
