#include "funcs.h"

//function, that creates a new binary file
void file_create(string fileName) {
	ofstream newFile(fileName, ios::binary);
	newFile.close();
	return;
}

//function, that checks if file exists
bool file_exists(string fileName) {
	ifstream file(fileName, ios::binary);
	if (!file) return false;
	file.close();
	return true;
}

//function, that appends timetable data to file
void file_append(string fileName) {
	ofstream file(fileName, ios::binary | ios::app);
	Timetable tNew;
	char c;
	do {
		enter_timetable(tNew);
		file.write(reinterpret_cast<char*>(&tNew), sizeof tNew);
		cout << "Input another trip? (y/n)";
		cin >> c;
		cin.ignore(LLONG_MAX, '\n');
	} while (tolower(c) == 'y');
	file.close();
	return;
}

//function, that writes data from cin to a binary file
void file_write(string fileName) {
	file_create(fileName);
	file_append(fileName);
	return;
}

//function, that outputs data from a binary file
void file_print(string fileName) {
	ifstream file(fileName, ios::binary);
	Timetable table;
	int l1 = strlen(H1), l2 = strlen(H2), l3 = strlen(H3), l0;
	l1 = (DEST_MAXLEN > l1) ? DEST_MAXLEN : l1;
	//header
	cout << endl;
	print_line(l1, l2, l3);
	cout << setw(l1) << left << H1 << right << '|'
		 << setw(l2) << H2 << '|'
		 << setw(l3) << H3 << '|' << endl;
	print_line(l1, l2, l3);
	//output file data
	while (!file.eof()) {
		file.read(reinterpret_cast<char*>(&table), sizeof Timetable); 
		cout << setw(l1) << left << table.place << '|' << right;
		l0 = (l2 - 5) / 2;
		cout << setw(l0) << ' '; print_time(table.start);
		cout << setw(l2 - l0 - 4) << '|';
		l0 = (l3 - 5) / 2;
		cout << setw(l0) << ' '; print_time(table.len);
		cout << setw(l3 - l0 - 4) << '|' << endl;
		file.peek();
	}
	file.close();
	print_line(l1, l2, l3);
	return;
}

//function, that prints the last bus going to somewhere
void file_lastbus(string fileName, string dest) {
	ifstream file(fileName, ios::binary);
	Timetable table;
	span last = -1;
	while (!file.eof()) {
		file.read(reinterpret_cast<char*>(&table), sizeof Timetable);
		if (dest == table.place)
			last = (last > table.start)? last: table.start;
		file.peek();
	}
	file.close();
	if (last == -1)
		cout << "There is no bus, going to " << dest << endl;
	else {
		cout << "The last bus, going to '" << dest << "' departs at ";
		print_time(last); cout << endl;
	}
	return;
}

//function, that removes trips from file, that are inappropriate
void file_delinfo(string fileName) {
	ifstream oldFile(fileName, ios::binary);
	ofstream newFile("temp.tmp", ios::binary);
	Timetable table;
	span end, mins;
	while (!oldFile.eof()) {
		oldFile.read(reinterpret_cast<char*>(&table), sizeof Timetable);
		mins = table.start % 60 + table.len % 60;       //total amount of minutes
		end = (table.start / 60 + table.len / 60) * 60; //sum of hours
		end += (mins / 60)*60;                          //hours from minutes
		end += mins % 60;                               //time the trip ends
		if (table.len > 17*60 || (table.start>5*60+59 && table.start<23*60 && end <= 23*60 ))
			newFile.write(reinterpret_cast<char*>(&table), sizeof Timetable);
		oldFile.peek();
	}
	oldFile.close();
	newFile.close();
	remove(fileName.c_str());
	rename("temp.tmp", fileName.c_str());
	return;
}