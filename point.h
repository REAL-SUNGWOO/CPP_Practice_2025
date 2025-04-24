#ifndef Point_h
#define Point_h
#include<iostream>

using namespace std;

class Point {
private:
	int x_;
	int y_;
public:
	Point(int x = 0, int y = 0);
	int getX(void) const;
	int getY(void) const;
	void setX(int x);
	void setY(int y);
	void showPoint(void);
};
#endif