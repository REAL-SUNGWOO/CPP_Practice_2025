#include "point.h"
using namespace std;

Point::Point(int x, int y) { x_ = x; y_ = y; }
int Point::getX(void) const { return x_; }
int  Point::getY(void) const { return y_; }
void  Point::setX(int x) { x_ = x; }
void  Point::setY(int y) { y_ = y; }
void  Point::showPoint(void) 
	{	
		cout << "x ��ǥ : " << x_ << endl;
		cout << "y ��ǥ : " << y_ << endl;
	}

// cout, endl �ĺ����� ���� �����̶�� ���� �ߴ� ����
// ������Ͽ� #include<iostream> �������� ������ �� �������
// ���� �� ��!

