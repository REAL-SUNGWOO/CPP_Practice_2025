//레포트 1 연습문제 2 
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

	cout << "학생 점수를 입력하세요(종료 : -1)" << endl;
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

	cout << "###성적 결과 출력 ###" << endl;
	cout << endl << "총  점: " << Sum << ", 평  균: " << Ave << ", 최대값: " << Max << endl;


	return 0;
}