#pragma warning: c2131
#include "funcs.h"

//function, that writes input data into timetable and checks the data
void enter_timetable(Timetable& table) {
	cout << "Enter destination place (no longer than " << DEST_MAXLEN << " symbols): ";
	while (1) {
		cin.getline(table.place, DEST_MAXLEN + 1, '\n');
		if (!cin.good()) {
			cin.clear(); cin.ignore(LLONG_MAX, '\n'); //clear error bits and buffer
			cout << "The length of name is too long, change it: ";
			continue;
		}break;
	}
	cout << "Enter departure time in format 'HH:MM': ";
	table.start = enter_time();
	cout << "Enter trip duration in format 'HH:MM': ";
	table.len = enter_time();
}

//function, that writes input data into a string
void enter_string(string& s, int maxlen) {
	char* arr = new char[maxlen + 1];
	while (1) {
		cin.getline(arr, maxlen + 1, '\n');
		if (!cin.good()) {
			cin.clear(); cin.ignore(LLONG_MAX, '\n'); //clear error bits and buffer
			cout << "The length of name is too long, change it: ";
			continue;
		}
		s = arr; 
		delete [] arr; return;
	}
}

//function, that returns input time in minutes 
span enter_time(void) {
	span h, m;
	while (1) {
		cin >> h;
		if (!cin.good() || h > 23 || h < 0) {
			cin.clear(); cin.ignore(LLONG_MAX, '\n'); //clear error bits and buffer
			cout << "HH should be a number from 0 to 23, try again: ";
			continue;
		}
		if (cin.get() != ':') {
			cin.clear(); cin.ignore(LLONG_MAX, '\n'); //clear error bits and buffer
			cout << "Delimiter should be ':', try again: ";
			continue;
		}
		cin >> m;
		if (!cin.good() || m > 59 || m < 0) {
			cin.clear(); cin.ignore(LLONG_MAX, '\n'); //clear error bits and buffer
			cout << "MM should be a number from 0 to 59, try again: ";
			continue;
		}break;
	}
	return h * 60 + m;
}

//function, that prints a line for a file output
void print_line(int l1, int l2, int l3) {
	cout.fill('-');
	cout << setw(l1+1) << "+"
		<< setw(l2+1) << "+"
		<< setw(l3+1) << "+";
	cout << endl;
	cout.fill(' ');
	return;
}

//function, that prints given time in minutes
void print_time(span t) {
	cout.fill('0');
	cout << setw(2) << t / 60 << ":" << setw(2) << t % 60;
	cout.fill(' ');
	return;
}