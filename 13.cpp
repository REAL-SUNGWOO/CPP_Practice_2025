//연습문제 4-3 클래스와 객체
// class 사용 연습

#include<iostream>
#include<iomanip>

using namespace std;
template<typename T>
class Point {
public:
	Point(T x = 0, T y = 0) { x_ = x; y_ = y; };// 생성자 함수 객체 생성 시 값을 주지 않으면 자동으로 (0,0)으로 초기화 한다.
	T getX(void) const { return x_; };
	T getY(void) const; 
	void setX(T x) { x_ = x; }
	void setY(T y) { y_ = y; }
	void showPoint(void) {
		cout << "x 좌표: " << x_ << endl;
		cout << "y 좌표: " << y_ << endl;
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