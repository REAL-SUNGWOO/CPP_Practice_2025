//����Ʈ2 �������� 4 stack Ŭ����
// stack class (�����̳� ���̺귯��)��� ����

#include<iostream>
#include<iomanip>
#include<stack>
#include<string>

using namespace std;

int main(void) {
	string str;
	stack<char> test;
	cout << "���ڿ� �Է�: "; getline(cin, str);

	for (int i = 0; i < str.size(); i++)
	{
		test.push(str[i]);
	}
	cout << "���ڿ� ���� ���: ";
	for (int i = 0; i < str.size(); i++)
	{
		cout<<test.top();
		test.pop();
	}
	return 0;
}