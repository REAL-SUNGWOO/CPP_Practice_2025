//����Ʈ 1 �������� 5 
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
	// Ŭ���� ���ø��� ����ϴ� ��쿡�� ��ü �����ÿ� �� �ڷ����� ������־�� �Ѵ�.
	// ���� Point<int> a
}