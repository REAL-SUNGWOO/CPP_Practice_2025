//����Ʈ 1 �������� 1 
#include<iostream>
#include<iomanip>

using namespace std;

int main(void) {

	double d, v;
	cout << "�Ÿ�(km)  : "; cin >> d;
	cout << "�ӷ�(km/h): "; cin >> v;

	double hour = d / v;
	double min = ((d / v) - (int)(hour))*60;
	double sec = (min - (int)(min)) * 60;
	cout << fixed << setprecision(1);
	cout << endl << "�ɸ��� �ð�: " << (int)(hour) << "�ð�, " << (int)(min)<<"��, "<<sec<<"�� �Դϴ�.";

	return 0;
}