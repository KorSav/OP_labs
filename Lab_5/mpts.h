#pragma once
#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstdlib>
#define k 2
#define n 1

class MovingPoint {
protected:
	float x0, y0;
public:
	MovingPoint() { x0 = y0 = 0; }
	MovingPoint(float x, float y=0) :
		x0(x), y0(y) { }
	virtual MovingPoint position(float);
	virtual void print(void);
	float distance(MovingPoint);
	void set(float, float);
};

class MovingPointX : public MovingPoint {
	float a1;
public:
	MovingPointX() { a1 = 1; }
	MovingPointX(float x, float a) : 
		MovingPoint(x), a1(a) { }
	MovingPoint position(float);
	void print(void);
	void set(float, float);
};

class MovingPointXY : public MovingPoint {
	float a1, a2;
public:
	MovingPointXY() { a1 = a2 = 1; }
	MovingPointXY(float x, float y, float a1, float a2) : 
		MovingPoint(x, y), a1(a1), a2(a2) { }
	MovingPoint position(float);
	void print(void);
	void set(float, float, float, float);
};

void randomize(MovingPointX[]);
void randomize(MovingPointXY[]);
float rval(void);
void print(MovingPointX[]);
void print(MovingPointXY[]);
float max_distance(MovingPointX*, MovingPointXY*, float,
	MovingPoint**, MovingPoint**);