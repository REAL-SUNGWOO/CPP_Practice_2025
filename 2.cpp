//�������� 2-2 
#include<iostream>
#include<iomanip>

using namespace std;

void stuGrade(const double* pArr, int num, double& rSum, double& rAve, double& rMax) {
	rMax = pArr[0];
	rSum = pArr[0];
	rAve = 0;
	for (int i = 1; i < num; i++)
	{
		rSum += *(pArr + i);
		if (*(pArr + i) > rMax)
		{
			rMax = *(pArr + i);
		}
	}
	rAve = rSum / num;
}

int main(void) {
	int num;
	double Sum, Ave, Max;

	cout << "�Է��� �л��� �� :" ; cin >> num;
	double* stu = new double[num];
	for (int i = 0; i < num; i++)
	{
		cin >> *(stu + i);
	}
	stuGrade(stu, num, Sum, Ave, Max);
	cout << "###���� ��� ��� ###" << endl;
	cout << endl << "�л���: " << num<<endl;
	cout << "��  ��: " << Sum << endl;
	cout << "��  ��: " << Ave << endl;
	cout << "�ִ밪: " << Max << endl;


	delete[] stu;
return 0;
}