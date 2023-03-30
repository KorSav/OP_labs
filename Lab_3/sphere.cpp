#include "classes.h"

using namespace std;

Sphere::Sphere(float x0, float y0, float z0, float r0) {
	center.set(x0, y0, z0);
	r = r0;
}

bool Sphere::contain(Point p) {
	float res=0;
	res += (p.x - center.x) * (p.x - center.x);
	res += (p.y - center.y) * (p.y - center.y);
	res += (p.z - center.z) * (p.z - center.z);
	return res <= r * r;
}

void Sphere::output(int num) {
	cout << left << num << ": ";
	center.output();
	cout << ", r = " << setw(NML) << r << endl;
	cout << right;
	return;
}