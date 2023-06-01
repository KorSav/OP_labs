#pragma once
#define MAX_MATRIX_VALUE 99999

namespace MatrixTransp {
	using namespace System;
	using namespace System::Windows::Forms;
	class NaturalNum {
		int n;
	public:
		NaturalNum() : n(0) { };
		NaturalNum(String^, int=MAX_MATRIX_VALUE);
		int toInt() { return n; }
	};
	class Matrix {
		unsigned int** matrix;
		int rows, cols;
	public:
		Matrix(const Matrix&);
		Matrix(DataGridView^);
		void transponate();
		int getRows() { return rows; };
		int getCols() { return cols; };
		void blit(DataGridView^);
	};
}