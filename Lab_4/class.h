#pragma once
#include <iostream>

class Number {
	char thousand, hundred, dozen, digit;
public:
	Number() { thousand = hundred = dozen = digit = 0; }; //default ctor
	Number(int); //transform ctor
	Number(Number&); //copy ctor
	Number(char a, char b, char c, char d) : //ctor with init list
		thousand(a), hundred(b), dozen(c), digit(d) {}; 
	char get1000();
	char get100();
	char get10();
	char get1();
	int getDecimal();
	Number operator++();
	Number operator--();
	Number operator+(Number);
	Number operator>(Number);
};