#include "point_with_tem.cpp"

int main(void) {
	
	int tempx, tempy;
	Point<int> test;
	test.showPoint();
	cout << "temp.x: "; cin >> tempx;
	test.setX(tempx);
	cout << "temp.y: "; cin >> tempy;
	test.setY(tempy);
	test.showPoint();
	return 0;
}