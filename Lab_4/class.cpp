#include "class.h"

Number::Number(int num) {
	thousand = num / 1000;
	hundred  = num / 100 % 10;
	dozen    = num / 10  % 10;
	digit    = num % 10;
}

Number::Number(Number& num) {
	thousand = num.get1000();
	hundred  = num.get100();
	dozen    = num.get10();
	digit    = num.get1();
}

char Number::get1000() {
	return thousand;
}

char Number::get100() {
	return hundred;
}

char Number::get10() {
	return dozen;
}

char Number::get1() {
	return digit;
}

int Number::getDecimal() {
	return thousand * 1000 + hundred * 100 +
		dozen * 10 + digit;
}

Number Number::operator++(){
	digit = (digit == 9)? 0: digit + 1;
	dozen = (dozen == 9) ? 0: dozen + 1;
	hundred = (hundred == 9) ? 0: hundred + 1;
	thousand = (thousand == 9) ? 0: thousand + 1;
	return *this;
}

Number Number::operator--() {
	digit = (digit == 0)? 9: digit - 1;
	dozen = (dozen == 0)? 9: dozen - 1;
	hundred = (hundred == 0)? 9: hundred - 1;
	thousand = (thousand == 0)? 9: thousand - 1;
	return *this;
}

Number Number::operator+(Number num) {
	Number tmp = getDecimal() + num.getDecimal();
	return tmp;
}

Number Number::operator>(Number num) {
	return (getDecimal() > num.getDecimal())? *this: num;
}