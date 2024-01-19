#include "pch.h"
#include "Libraries.h"


int mainMenu(array<System::String^>^ args)
{
    int count = 0;
    int rows = 4;
    int cols = 6;
    char choice = '100';

    Console::WriteLine("Выберите задание:");
    Console::WriteLine("1 -> Ввод значений");
    Console::WriteLine("2 -> Решение и вывод");
    Console::WriteLine("0 -> Завершение программы");

    array<int, 2>^ W = nullptr;
    array<int, 2>^ Z = nullptr;
    do
    {


        choice = Convert::ToChar(Console::ReadLine());
        switch (choice)
        {
        case '1':
            count += 1;

            W = gcnew array<int, 2>(rows, cols);
            Z = gcnew array<int, 2>(rows, cols);

            FillMatrix(W, rows, cols);
            FillMatrix(Z, rows, cols);
            Console::WriteLine("Выберите задание:");
            Console::WriteLine("1 -> Ввод значений");
            Console::WriteLine("2 -> Решение и вывод");
            Console::WriteLine("0 -> Завершение программы");
            break;
        case '2':
            if (count > 0)
                Display(W, Z, rows, cols);
            else 
                Console::WriteLine("Вы не ввели значения");
            Console::WriteLine("\nВыберите задание:");
            Console::WriteLine("1 -> Ввод значений");
            Console::WriteLine("2 -> Решение и вывод");
            Console::WriteLine("0 -> Завершение программы");
            break;
        case '0':
            break;
        default:
            Console::WriteLine("unexpected rror");
            break;
        }
        
    } while (choice != '0');

    return 0;
}