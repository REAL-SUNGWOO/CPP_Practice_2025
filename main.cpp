//����Ʈ2 �������� 5 ���� ������

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