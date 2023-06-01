#pragma once

namespace HelpF
{
	using namespace System;
	//using namespace System::ComponentModel;
	//using namespace System::Collections;
	using namespace System::Windows::Forms;
	//using namespace System::Data;
	//using namespace System::Drawing;
	template <typename T>
	void handleNumudEnterPress(T obj, KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter) {
			obj->Select();
			e->SuppressKeyPress = true;
		}
	}
	void matrix_updateRows(DataGridView^, int);
    void matrix_updateCols(DataGridView^, int);
    void handleCellValidating(DataGridView^, DataGridViewCellValidatingEventArgs^);
}