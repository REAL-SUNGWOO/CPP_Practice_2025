#include "point.h"
using namespace std;

Point::Point(int x, int y) { x_ = x; y_ = y; }
int Point::getX(void) const { return x_; }
int  Point::getY(void) const { return y_; }
void  Point::setX(int x) { x_ = x; }
void  Point::setY(int y) { y_ = y; }
void  Point::showPoint(void) 
	{	
		cout << "x 좌표 : " << x_ << endl;
		cout << "y 좌표 : " << y_ << endl;
	}

// cout, endl 식별되지 않은 구문이라는 오류 뜨는 이유
// 헤더파일에 #include<iostream> 포함하지 않으면 이 오류뜬다
// 주의 할 것!

