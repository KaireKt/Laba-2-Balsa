#pragma once

int mainMenu(array<System::String^>^ args);

void FillMatrix(array<int, 2>^ matrix, int rows, int cols);

array<int>^ ExtractElementsAboveP(array<int, 2>^ matrix, int rows, int cols, int P);

void In(int rows, int cols);

void Display(array<int, 2>^ W, array<int, 2>^ Z, int rows, int cols);