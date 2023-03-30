#include "classes.h"

using namespace std;
void Point::input(void) {
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	cout << "z = ";
	cin >> z;
	return;
}

void Point::output(void) {
	cout << "x = " << setw(NML) << x << ", ";
	cout << "y = " << setw(NML) << y << ", ";
	cout << "z = " << setw(NML) << z;
	return;
}

void Point::set(float x0, float y0, float z0) {
	x = x0; y = y0; z = z0;
	return;
}