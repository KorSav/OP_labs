#include "pch.h"
#include "Form1.h"

using namespace CppCLRWinFormsProject;

System::Void Form1::btnTranspon_Click(Object^ sender, EventArgs^ e) {
	try {
		MatrixTransp::Matrix M1(Matrix1);
		MatrixTransp::Matrix M2(Matrix2);
		M1.transponate();
		M2.transponate();
		numudMatrix1SizeCols->Value = M1.getCols();
		numudMatrix1SizeRows->Value = M1.getRows();
		M1.blit(Matrix1);
		numudMatrix2SizeCols->Value = M2.getCols();
		numudMatrix2SizeRows->Value = M2.getRows();
		M2.blit(Matrix2);
	}
	catch (FormatException^ ex) {
		MessageBox::Show(ex->Message, "Таблиці не заповнені");
	}
}

System::Void Form1::Matrix1_CellValidating(Object^ sender, DataGridViewCellValidatingEventArgs^ e) {
	HelpF::handleCellValidating(Matrix1, e);
}
System::Void Form1::Matrix2_CellValidating(Object^ sender, DataGridViewCellValidatingEventArgs^ e) {
	HelpF::handleCellValidating(Matrix2, e);
}

System::Void Form1::numudMatrix1SizeRows_ValueChanged(Object^ sender, EventArgs^ e) {
	HelpF::matrix_updateRows(Matrix1, Convert::ToInt32(numudMatrix1SizeRows->Value));
}
System::Void Form1::numudMatrix1SizeCols_ValueChanged(Object^ sender, EventArgs^ e) {
	HelpF::matrix_updateCols(Matrix1, Convert::ToInt32(numudMatrix1SizeCols->Value));
}
System::Void Form1::numudMatrix2SizeRows_ValueChanged(Object^ sender, EventArgs^ e) {
	HelpF::matrix_updateRows(Matrix2, Convert::ToInt32(numudMatrix2SizeRows->Value));
}
System::Void Form1::numudMatrix2SizeCols_ValueChanged(Object^ sender, EventArgs^ e) {
	HelpF::matrix_updateCols(Matrix2, Convert::ToInt32(numudMatrix2SizeCols->Value));
}
System::Void Form1::numudMatrix1SizeRows_KeyDown(Object^ sender, KeyEventArgs^ e) {
	numudMatrix1SizeRows->Validate();
	HelpF::handleNumudEnterPress(numudMatrix1SizeCols, e);
}
System::Void Form1::numudMatrix1SizeCols_KeyDown(Object^ sender, KeyEventArgs^ e) {
	numudMatrix1SizeCols->Validate();
	HelpF::handleNumudEnterPress(Matrix1, e);
}
System::Void Form1::numudMatrix2SizeRows_KeyDown(Object^ sender, KeyEventArgs^ e) {
	HelpF::handleNumudEnterPress(numudMatrix2SizeCols, e);
}
System::Void Form1::numudMatrix2SizeCols_KeyDown(Object^ sender, KeyEventArgs^ e) {
	HelpF::handleNumudEnterPress(Matrix2, e);
}