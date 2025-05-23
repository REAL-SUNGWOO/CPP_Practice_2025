//연습문제 4-3 클래스와 객체
// class 사용 연습

#include<iostream>
#include<iomanip>

using namespace std;
class Point {
public:
	Point(int x = 0, int y = 0) { x_ = x; y_ = y; };// 생성자 함수 객체 생성 시 값을 주지 않으면 자동으로 (0,0)으로 초기화 한다.
	int getX(void) const { return x_; };
	int getY(void) const { return y_; };
	void setX(int x) { x_ = x; }
	void setY(int y) { y_ = y; }
	void showPoint(void) {
		cout << "x 좌표: " << x_ << endl;
		cout << "y 좌표: " << y_ << endl;
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