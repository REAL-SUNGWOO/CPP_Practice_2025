//연습문제 3-4 vector 클래스 활용
#include<iostream>
#include<iomanip>
#include<vector>

using namespace std;

int main(void) {
	
	int dec;
	cout << "십진수 입력: "; cin >> dec;
	vector<int> bset;

	while (dec)
	{
		bset.push_back(dec % 2);
		dec /= 2;
	}

	cout << "2진수 변환: ";
	//가볍게 생각해서 vector가 빈벡터가 아닐때까지 while문을 반복한다.
		while(!bset.empty())
		{
			cout<<bset.back();
			bset.pop_back();
			//vector에는 .back()이라는 멤버 함수가 있음 맨뒤의 값 보여줌
		}
	return 0;
}