//�������� 6-5 Ŭ������ �̿��� ����ó��
//class ��� ����
//�� �������� class�� ����ڰ� �Է��� ���¹�ȣ�� ���ؼ� 
//������ ����ó���� �ϱ� ���� ��ü ������ ������ ����.
#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

class Account {
public:
	//���� ���� �� �ʱ� ��й�ȣ�� 1111, �ܾ��� 1��
	//const�� �ʱ�ȭ�� ��������� ������ ���� �� �ʱ�ȭ �Ǿ���. 
	//:�������(�ʱⰪ)���� ó��
	Account(string name, string account, string pass="11111", int balance=1)
		:account_(account), name_(name) {
		pass_ = pass;
		balance_ = balance;
	}
	//showAccount ��� �Լ��� �б⸸ �ϴ� �Լ��̹Ƿ� const�� �����ϸ� �����ϴ�.
	void showAccount(void) const {
		cout << "��    �� : " << name_ << endl;
		cout << "���¹�ȣ : " << account_ << endl;
		cout << "��й�ȣ : " << pass_ << endl;
		cout << "�����ܾ� : " << balance_ << endl;
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

//Ȥ�� �̷������� ����� ������ �� �ִ�.
string Bank = "356-1212-2962-23";
string Pass = "1234";
int Bal = 100'000'000;

int main(void) {
	
	Account my_acc("ȫ����", Bank, Pass, Bal);
	my_acc.showAccount();
	cout << endl;
	string useracc, userpass;

	cout << "####���� ���� ����####" << endl;
	cout << "���¹�ȣ �Է�: "; getline(cin, useracc);
	cout << "��й�ȣ �Է�: "; getline(cin, userpass);

	try {
		if (useracc != my_acc.getAccount() || userpass != my_acc.getPass())
			throw(Account("",useracc, userpass,0));
		else
		{
			int money;
			cout << endl <<"��ݾ�: "; cin >> money;
			if (money > my_acc.getBalance())throw(money);
			else {
				int temp = my_acc.getBalance();
				my_acc.setBalance(temp - money);
				cout << endl << "���: " << money << ", �ܾ�: " << my_acc.getBalance()  << endl;
			}
		}
	}
	// ���� ó�� ����� �����Ҷ��� ������ �ҷ��ͼ� ��������ڰ� ���� ���� �ʵ��� �ϰ�, 
	// ���� ������� �ʵ��� const�� ó���ϴ� ���� �����ϴ�.
		catch (const Account& useracc) {
			cout << endl <<"���� �Է��� �ٽ� �� �� Ȯ���ϼ���!!!" << endl;
			useracc.showAccount();

		}
		catch (int money) {
			cout << endl <<"��� �����: (" << money << ")�� �ʹ� ���׿�.";
		}
	return 0;
}