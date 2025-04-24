//레포트2 연습문제 5 분할 컴파일

//#include<iostream>
#include<iomanip>
#include "point.h"

using namespace std;

int main(void) {
	int tempx, tempy;
	Point test;
	test.showPoint();
	cout << "temp.x: "; cin >> tempx;
	test.setX(tempx);
	cout << "temp.y: "; cin >> tempy;
	test.setY(tempy);
	test.showPoint();

	return 0;
}