//레포트 1 연습문제 1 
#include<iostream>
#include<iomanip>

using namespace std;

int main(void) {

	double d, v;
	cout << "거리(km)  : "; cin >> d;
	cout << "속력(km/h): "; cin >> v;

	double hour = d / v;
	double min = ((d / v) - (int)(hour))*60;
	double sec = (min - (int)(min)) * 60;
	cout << fixed << setprecision(1);
	cout << endl << "걸리는 시간: " << (int)(hour) << "시간, " << (int)(min)<<"분, "<<sec<<"초 입니다.";

	return 0;
}