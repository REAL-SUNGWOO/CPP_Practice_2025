//연습문제 6-5 클래스를 이용한 예외처리
//class 사용 연습
//이 문제에서 class는 사용자가 입력한 계좌번호에 대해서 
//오로지 예외처리를 하기 위한 객체 생성에 목적이 있음.
#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

class Account {
public:
	//계좌 생성 시 초기 비밀번호는 1111, 잔액은 1원
	//const로 초기화된 멤버변수는 생성자 생성 시 초기화 되야함. 
	//:멤버변수(초기값)으로 처리
	Account(string name, string account, string pass="11111", int balance=1)
		:account_(account), name_(name) {
		pass_ = pass;
		balance_ = balance;
	}
	//showAccount 멤버 함수는 읽기만 하는 함수이므로 const로 선언하면 안전하다.
	void showAccount(void) const {
		cout << "이    름 : " << name_ << endl;
		cout << "계좌번호 : " << account_ << endl;
		cout << "비밀번호 : " << pass_ << endl;
		cout << "현재잔액 : " << balance_ << endl;
	}
	void setPass(string pass) { pass_ = pass; };
	void setBalance(int bal) { balance_ = bal; };
	string getName(void) const { return name_; };
	string getAccount(void) const { return account_; };
	string getPass(void) const { return pass_; };
	int getBalance(void) const { return balance_; };
private:
	const string name_;
	const string account_;
	string pass_;
	int balance_;
};

//혹은 이런식으로 상수를 지정할 수 있다.
string Bank = "356-1212-2962-23";
string Pass = "1234";
int Bal = 100'000'000;

int main(void) {
	
	Account my_acc("홍성우", Bank, Pass, Bal);
	my_acc.showAccount();
	cout << endl;
	string useracc, userpass;

	cout << "####은행 계좌 인증####" << endl;
	cout << "계좌번호 입력: "; getline(cin, useracc);
	cout << "비밀번호 입력: "; getline(cin, userpass);

	try {
		if (useracc != my_acc.getAccount() || userpass != my_acc.getPass())
			throw(Account("",useracc, userpass,0));
		else
		{
			int money;
			cout << endl <<"출금액: "; cin >> money;
			if (money > my_acc.getBalance())throw(money);
			else {
				int temp = my_acc.getBalance();
				my_acc.setBalance(temp - money);
				cout << endl << "출금: " << money << ", 잔액: " << my_acc.getBalance()  << endl;
			}
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