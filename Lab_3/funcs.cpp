#include "classes.h"

void print_all(Sphere *spheres, int n) {
	for (int i = 0; i < n; i++)
		spheres[i].output(i + 1);
	return;
}

void print_ids(Point p, Sphere *spheres, int n) {
	bool output = false;
	for (int i = 0; i < n; i++)
		if (spheres[i].contain(p)) {
			output = true;
			std::cout << i + 1 << ", ";
		}
	if (output)
		std::cout << "\b\b." << std::endl;
	else
		std::cout << "Point is out of spheres." << std::endl;
	return;
}