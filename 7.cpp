//����Ʈ �������� 3-1 ���Ϳ� ���� 
#include<iostream>
#include<iomanip>
#include<vector>
#include<algorithm>

using namespace std;

int main(void) {

	int count = 10;
	int arr[10];
	vector<int> v;

	cout << "������ ����(10��)�� �Է��ϼ���..." << endl;
	
	for(int i=0;i<10;i++){

		cout << "arr[" << i << "]: "; cin >> arr[i];
		v.push_back(arr[i]);
	}
	//sort �Լ� ����Ҷ� ������ ù��° �ּ� �׸��� ������ ���� �ּ� ����,
	//arr[0] �̷������� �ִ°��� �ּҰ� �ƴ϶� ���̶� ������ ����
	sort(arr, (arr + 10));
	sort(v.begin(), v.end());

	cout << "����(���� �迭): ";
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	cout << endl <<"����(���� �迭): ";
	for (int i = 0; i < 10; i++) {
		cout << v[i] << " ";
	}
}