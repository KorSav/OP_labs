#include "classes.h"

using namespace std;
int main(int argc, char* argv[]) {
	Sphere spheres[] = arr;
	Point point;
	int n = sizeof(spheres) / sizeof(Sphere);
	cout << "Spheres:" << endl;
	print_all(spheres, n);
	cout << "Enter point: " << endl;
	point.input();
	cout << "Spheres that contain this point :" << endl;
	print_ids(point, spheres, n);
	return 0;
}