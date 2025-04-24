//레포트 1 연습문제 5 
#include<iostream>
#include<iomanip>

using namespace std;

template<typename T>
void printArr(T pArr, const int num)
{
	for (int i = 0; i < num; i++) {
		cout << pArr[i] << " ";
	}cout << endl;
}


int main(void) {

	int iArr[] = { 10,20,30,40,50 };
	const int inum = sizeof(iArr) / 4;

	char cArr[] = "i wanna get iPhone 17";
	const int cnum = sizeof(cArr);

	double dArr[] = { 10.5,20.5,30.5,40.5,50.5 };
	const int dnum = sizeof(dArr) / 8;


	printArr(iArr, inum);
	printArr(cArr, cnum);
	printArr(dArr, dnum);

	return 0;
	// 클래스 템플릿을 사용하는 경우에는 객체 생성시에 꼭 자료형을 명시해주어야 한다.
	// 예시 Point<int> a
}