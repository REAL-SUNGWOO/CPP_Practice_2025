//레포트2 연습문제 4 stack 클래스
// stack class (컨테이너 라이브러리)사용 연습

#include<iostream>
#include<iomanip>
#include<stack>
#include<string>

using namespace std;

int main(void) {
	string str;
	stack<char> test;
	cout << "문자열 입력: "; getline(cin, str);

	for (int i = 0; i < str.size(); i++)
	{
		test.push(str[i]);
	}
	cout << "문자열 역순 출력: ";
	for (int i = 0; i < str.size(); i++)
	{
		cout<<test.top();
		test.pop();
	}
	return 0;
}