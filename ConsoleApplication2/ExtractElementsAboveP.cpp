#include "pch.h"
#include "Libraries.h"


array<int>^ ExtractElementsAboveP(array<int, 2>^ matrix, int rows, int cols, int P)
{
    array<int>^ result = gcnew array<int>(rows * cols);
    int index = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i, j] > P)
            {
                result[index++] = matrix[i, j];
            }
        }
    }

    Array::Resize(result, index);
    return result;
}