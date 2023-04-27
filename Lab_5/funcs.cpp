#include "mpts.h"

using namespace std;

float rval(void) {
	return (rand() % 991 + 10.) / 100.;
}

void randomize(MovingPointX ps[]) {
	for (int i=0; i<k; i++)
		ps[i].set(rval(), rval());
}
void randomize(MovingPointXY ps[]) {
	for (int i = 0; i < k; i++)
		ps[i].set(rval(), rval(), rval(), rval());
}

void print(MovingPointX ps[k]) {
	cout << k << " x dots:\n";
	for (int i = 0; i < k; i++)
		ps[i].print();
	cout << endl;
}
void print(MovingPointXY ps[n]) {
	cout << n << " xy dots:\n";
	for (int i = 0; i < n; i++)
		ps[i].print();
	cout << endl;
}

float max_distance(MovingPointX *Ax, MovingPointXY *Axy, float t, MovingPoint **p1_res, MovingPoint **p2_res) {
	float max=0;
	float cur_dist;
	MovingPoint* p1 = nullptr, * p2 = nullptr;
	int i1, i2;
	//x and x
	for (int i = 0; i < k-1; i++)
		for (int j = i+1; j < k; j++) {
			p1 = Ax + i; p2 = Ax + j;
			cur_dist = (p1->position(t)).distance(p2->position(t));
			cout << cur_dist << endl;
			if (max < cur_dist) {
				max = cur_dist;
				*p1_res = p1; *p2_res = p2;
			}
	}
	//xy and xy
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++) {
			p1 = Axy + i; p2 = Axy + j;
			cur_dist = (p1->position(t)).distance(p2->position(t));
			cout << cur_dist << endl;
			if (max < cur_dist) {
				max = cur_dist;
				*p1_res = p1; *p2_res = p2;
			}
	}
	//x and xy
	for (int i = 0; i < k; i++)
		for (int j = 0; j < n; j++) {
			p1 = Ax + i; p2 = Axy + j;
			cur_dist = (p1->position(t)).distance(p2->position(t));
			cout << cur_dist << endl;
			if (max < cur_dist) {
				max = cur_dist;
				*p1_res = p1; *p2_res = p2;
			}
	}
	return max;
}