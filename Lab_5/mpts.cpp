#include "mpts.h"

using namespace std;
MovingPoint MovingPoint::position(float) {
	return *this;
}
MovingPoint MovingPointX::position(float t) {
	return MovingPoint(x0 + a1 * sin(t));
}
MovingPoint MovingPointXY::position(float t) {
	return MovingPoint(x0 + a1 * sin(t), y0 + a2 * cos(t));
}

void MovingPoint::print(void) {
	cout << std::fixed << setprecision(2)
		<< '(' << x0 << ", " << y0 << ")";
}
void MovingPointX::print(void) {
	MovingPoint::print();
	cout << " a1=" << a1 << endl;
}
void MovingPointXY::print(void) {
	MovingPoint::print();
	cout << " a1=" << a1 << ", a2=" << a2 << endl;
}

void MovingPoint::set(float x, float y) {
	x0 = x; y0 = y;
}
void MovingPointX::set(float x, float a) {
	MovingPoint::set(x, 0);
	a1 = a;
}
void MovingPointXY::set(float x, float y, float a1_, float a2_) {
	MovingPoint::set(x, y);
	a1 = a1_; a2 = a2_;
}

float MovingPoint::distance(MovingPoint p) {
	return sqrt(pow(x0 - p.x0, 2) + pow(y0 - p.y0, 2));
}