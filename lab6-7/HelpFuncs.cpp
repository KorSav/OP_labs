#include "pch.h"
#include "Matrix.h"
#include "HelpFuncs.h"

void HelpF::matrix_updateCols(DataGridView^ matrix, int n) {
	int curN = matrix->Columns->Count;
	int diff = (curN - n), i;
	if (diff < 0) {
		for (i = 0; i < -diff; i++) {
			matrix->Columns->Add("col" + curN + i + 1, (curN + i + 1).ToString());
		}
	}
	else if (diff > 0) {
		for (i = 0; i < diff; i++) {
			matrix->Columns->RemoveAt(curN - i - 1);
		}
	}
}

void HelpF::matrix_updateRows(DataGridView^ matrix, int n) {
	int diff = (matrix->Rows->Count - n), i;
	if (diff < 0) {
		matrix->Rows->Add(-diff);
	}
	else if (diff > 0) {
		for (i = 0; i < diff; i++) {
			matrix->Rows->RemoveAt(matrix->Rows->Count - 1);
		}
	}
}

void HelpF::handleCellValidating(DataGridView^ matrix, DataGridViewCellValidatingEventArgs^ e) {
	DataGridViewCell^ cell = matrix->Rows[e->RowIndex]->Cells[e->ColumnIndex];
	String^ strCurN = cell->EditedFormattedValue->ToString();
	if (String::IsNullOrEmpty(strCurN)) return;
	try {
		MatrixTransp::NaturalNum curN(strCurN);
	}
	catch (ArgumentException^ ex) {
		MessageBox::Show(ex->Message, "Некоректне число");
		e->Cancel = true;
	}
	catch (FormatException^ ex) {
		MessageBox::Show(ex->Message, "Некоректне введення");
		e->Cancel = true;
	}
}

