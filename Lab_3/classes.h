#pragma once
#include <iostream>
#include <iomanip>
#define NML 1 //number maximum length
#define arr {\
	{0.5, 0, 0, 0.5},\
	{1.5, 0, 0, 1},\
	{2.5, 0, 0, 2},\
}//  {x, y, z, r}   

class Point {
	float x, y, z;
public:
	void input(void);
	void set(float, float, float);
	void output(void);
	friend class Sphere;
};

class Sphere {
	float r;
	Point center;
public:
	Sphere(float, float, float, float);
	bool contain(Point);
	void output(int);
};

void print_all(Sphere*, int);
void print_ids(Point, Sphere*, int);