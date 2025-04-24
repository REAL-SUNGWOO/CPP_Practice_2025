#include<iostream>

using namespace std;

template<typename T>
class Point {
private:
	T x_;
	T y_;
public:
	Point(T x = 0, T y = 0);
	T getX(void) const;
	T getY(void) const;
	void setX(T x);
	void setY(T y);
	void showPoint(void);
};
template<typename T>
Point<T>::Point(T x, T y) { x_ = x; y_ = y; }

template<typename T>
T Point<T>::getX(void) const { return x_; }

template<typename T>
T  Point<T>::getY(void) const { return y_; }

template<typename T>
void  Point<T>::setX(T x) { x_ = x; }

template<typename T>
void  Point<T>::setY(T y) { y_ = y; }

template<typename T>
void  Point<T>::showPoint(void)
	{	
		cout << "x ÁÂÇ¥ : " << x_ << endl;
		cout << "y ÁÂÇ¥ : " << y_ << endl;
	}

