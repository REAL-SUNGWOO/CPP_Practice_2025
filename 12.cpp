//�������� 4-3 Ŭ������ ��ü
// class ��� ����

#include<iostream>
#include<iomanip>

using namespace std;
class Point {
public:
	Point(int x = 0, int y = 0) { x_ = x; y_ = y; };// ������ �Լ� ��ü ���� �� ���� ���� ������ �ڵ����� (0,0)���� �ʱ�ȭ �Ѵ�.
	int getX(void) const { return x_; };
	int getY(void) const { return y_; };
	void setX(int x) { x_ = x; }
	void setY(int y) { y_ = y; }
	void showPoint(void) {
		cout << "x ��ǥ: " << x_ << endl;
		cout << "y ��ǥ: " << y_ << endl;
	};
private:
	int x_;
	int y_;
};

int main(void) {
	 
	Point test;
	int tempx, tempy;
	test.showPoint();
	cout << "temp x: "; cin >> tempx;  test.setX(tempx);
	cout << "temp y: "; cin >> tempy;  test.setY(tempy);
	test.showPoint();
	return 0;
}