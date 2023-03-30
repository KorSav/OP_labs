#pragma once
#include <iostream>
#include <fstream>
#include <fstream>
#include <iomanip>
#include <string>
#include <windows.h>

#define NAME_MAXLEN 20   //the maximum filename length
#define DEST_MAXLEN 20   //be careful, the size of structure also changes (while reading from file)!!!
#define H1 "Destination" //first table column name
#define H2 "Departure t."//second table column name
#define H3 "Duration t." //third table column name

using namespace std;
typedef short span;
struct Timetable {
	char place[DEST_MAXLEN+1];
	span start;
	span len;
};

//functions to wotk with files
void file_create(string);
void file_append(string);
void file_write(string);
void file_print(string);
void file_delinfo(string);
void file_lastbus(string, string);
bool file_exists(string);

//help functions
void enter_timetable(Timetable&);
void enter_filename(string&);
span enter_time(void);
void print_line(int, int, int);
void print_time(span);
void enter_string(string&, int);