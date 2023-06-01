#include "pch.h"
#include "Matrix.h"
#include "HelpFuncs.h"

using namespace MatrixTransp;

NaturalNum::NaturalNum(String^ strN, int max) {
	if (Int32::TryParse(strN, n)) {
		if (n < 0) 
			throw gcnew ArgumentException("Не допускається введення від'ємних чисел");
		else if (n > max)
			throw gcnew ArgumentException("Не допускається введення чисел більших за " + max);
	}
	else throw gcnew FormatException("Можна вводити лише цілі числа");
}

Matrix::Matrix(const Matrix& M) {
	rows = M.rows;
	cols = M.cols;
	matrix = new unsigned int* [rows];
	for (int i = 0; i < rows; i++) {
		matrix[i] = new unsigned int[cols];
		for (int j = 0; j < cols; j++)
			matrix[i][j] = M.matrix[i][j];
	}
}

Matrix::Matrix(DataGridView^ dataGrid) {
	rows = dataGrid->Rows->Count;
	cols = dataGrid->Columns->Count;
	matrix = new unsigned int*[rows];
	for (int i = 0; i < rows; i++) {
		matrix[i] = new unsigned int[cols];
		for (int j = 0; j < cols; j++) {
			if (dataGrid->Rows[i]->Cells[j]->Value)
				matrix[i][j] = Convert::ToUInt32(dataGrid->Rows[i]->Cells[j]->Value);
			else throw gcnew FormatException("Таблиця не заповнена повністю");
		}
	}
}

void Matrix::transponate(void) {
	Matrix temp(*this);
	for (int i = 0; i < rows; i++)
		delete[] matrix[i];
	delete[] matrix;
	rows = temp.cols;
	cols = temp.rows;
	matrix = new unsigned int* [rows];
	for (int i = 0; i < rows; i++) {
		matrix[i] = new unsigned int[cols];
		for (int j = 0; j < cols; j++)
			matrix[i][j] = temp.matrix[j][i];
	}
}

void Matrix::blit(DataGridView^ dataGrid) {
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
			dataGrid->Rows[i]->Cells[j]->Value = matrix[i][j];
}