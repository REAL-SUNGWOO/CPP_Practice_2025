//����Ʈ 1 �������� 2 
#include<iostream>
#include<iomanip>
#include<vector>

using namespace std;

void stuGrade(vector<double> & pArr, double& rSum, double& rAve, double& rMax) {
	rMax = pArr[0];
	rSum = pArr[0];
	rAve = 0;
	for (int i = 1; i < pArr.size(); i++)
	{
		rSum += pArr[i];
		if (pArr[i] > rMax)
		{
			rMax = pArr[i];
		}
	}
	rAve = rSum / pArr.size();
}

int main(void) {

	int count = 0;
	double Sum, Ave, Max;
	double temp;
	vector<double>stu;

	cout << "�л� ������ �Է��ϼ���(���� : -1)" << endl;
	while (1)
	{
		cout << "vArr[" << count << "]: ";
		cin >> temp;
		if (temp == -1) { break; }
		else
		{
			stu.push_back(temp);
			count++;
		}
	}

	stuGrade(stu, Sum, Ave, Max);

	cout << "###���� ��� ��� ###" << endl;
	cout << endl << "��  ��: " << Sum << ", ��  ��: " << Ave << ", �ִ밪: " << Max << endl;


	return 0;
}