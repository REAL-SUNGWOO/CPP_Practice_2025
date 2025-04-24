//레포트 연습문제 3-1 벡터와 정렬 
#include<iostream>
#include<iomanip>
#include<vector>
#include<algorithm>

using namespace std;

int main(void) {

	int count = 10;
	int arr[10];
	vector<int> v;

	cout << "임의의 정수(10개)를 입력하세요..." << endl;
	
	for(int i=0;i<10;i++){

		cout << "arr[" << i << "]: "; cin >> arr[i];
		v.push_back(arr[i]);
	}
	//sort 함수 사용할때 무조건 첫번째 주소 그리고 마지막 다음 주소 주의,
	//arr[0] 이런식으로 넣는것은 주소가 아니라 값이라서 무조건 오류
	sort(arr, (arr + 10));
	sort(v.begin(), v.end());

	cout << "정렬(정적 배열): ";
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	cout << endl <<"정렬(동적 배열): ";
	for (int i = 0; i < 10; i++) {
		cout << v[i] << " ";
	}
}