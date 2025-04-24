//�������� 4-3 Ŭ������ ��ü
// class ��� ����

#include<iostream>
#include<iomanip>

using namespace std;
template<typename T>
class Point {
public:
	Point(T x = 0, T y = 0) { x_ = x; y_ = y; };// ������ �Լ� ��ü ���� �� ���� ���� ������ �ڵ����� (0,0)���� �ʱ�ȭ �Ѵ�.
	T getX(void) const { return x_; };
	T getY(void) const; 
	void setX(T x) { x_ = x; }
	void setY(T y) { y_ = y; }
	void showPoint(void) {
		cout << "x ��ǥ: " << x_ << endl;
		cout << "y ��ǥ: " << y_ << endl;
	};
private:
	T x_;
	T y_;
};
template<typename T>
T Point<T>::getY(void) const { return y_; }

int main(void) {

	Point<int> test;
	int tempx, tempy;
	test.showPoint();
	cout << "temp x: "; cin >> tempx;  test.setX(tempx);
	cout << "temp y: "; cin >> tempy;  test.setY(tempy);
	test.showPoint();
	return 0;
}