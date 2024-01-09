#pragma once

#include "pch.h"

using namespace System;

void FillMatrix(array<int, 2>^ matrix, int rows, int cols);

array<int>^ ExtractElementsAboveP(array<int, 2>^ matrix, int rows, int cols, int P);
