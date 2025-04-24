//연습문제 6-4 클래스를 이용한 예외처리
//class 사용 연습
//이 문제에서 class는 사용자가 입력한 계좌번호에 대해서 
//오로지 예외처리를 하기 위한 객체 생성에 목적이 있음.
#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

class Account {
private:
	string account_;
	string pass_;
public:
	Account(string account, string pass) ;
	void showAccount(void) const;
};
Account::Account(string account, string pass) { 
	account_ = account; 
	pass_ = pass;
}
//showAccount 멤버 함수는 읽기만 하는 함수이므로 const로 선언하면 안전하다.
void Account::showAccount(void) const {
	cout << "계좌번호 : " << account_ << endl;
	cout << "비밀번호 : " << pass_ << endl;
}

//기존에 설정된 계좌번호와 비밀번호 그리고 잔액
//#define을 사용하면 문자열은 char형 배열 그리고 상수는 int로 자동설정
#define Bank "356-1212-2962-23"
#define Pass "1234"
#define Balance 100'000'000

//혹은 이런식으로 상수를 지정할 수 있다.
//string Bank = "356-1212-2962-23";
//string Pass = "1234";
//int Bal = 100'000'000;

int main(void) {
	string useracc, userpass;

	cout << "계좌번호 : "; getline(cin, useracc);
	cout << "비밀번호 : "; getline(cin, userpass);

	try {
		if (useracc != Bank || userpass != Pass)
			throw(Account(useracc, userpass));
		else
		{
			int money;
			cout << endl <<"출금액: "; cin >> money;
			if (money > Balance)throw(money);
			else { cout << endl << "출금: " << money << ", 잔액: " << (Balance - money) << endl; }
		}
	}
	// 예외 처리 블록을 생성할때는 참조로 불러와서 복사생성자가 일을 하지 않도록 하고, 
	// 값이 변경되지 않도록 const로 처리하는 것이 안전하다.
		catch (const Account& useracc) {
			cout << endl <<"다음 입력을 다시 한 번 확인하세요!!!" << endl;
			useracc.showAccount();

		}
		catch (int money) {
			cout << endl <<"출금 희망액: (" << money << ")이 너무 많네요.";
		}
	return 0;
}