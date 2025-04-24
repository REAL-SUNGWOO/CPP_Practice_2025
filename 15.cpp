//�������� 6-4 Ŭ������ �̿��� ����ó��
//class ��� ����
//�� �������� class�� ����ڰ� �Է��� ���¹�ȣ�� ���ؼ� 
//������ ����ó���� �ϱ� ���� ��ü ������ ������ ����.
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
//showAccount ��� �Լ��� �б⸸ �ϴ� �Լ��̹Ƿ� const�� �����ϸ� �����ϴ�.
void Account::showAccount(void) const {
	cout << "���¹�ȣ : " << account_ << endl;
	cout << "��й�ȣ : " << pass_ << endl;
}

//������ ������ ���¹�ȣ�� ��й�ȣ �׸��� �ܾ�
//#define�� ����ϸ� ���ڿ��� char�� �迭 �׸��� ����� int�� �ڵ�����
#define Bank "356-1212-2962-23"
#define Pass "1234"
#define Balance 100'000'000

//Ȥ�� �̷������� ����� ������ �� �ִ�.
//string Bank = "356-1212-2962-23";
//string Pass = "1234";
//int Bal = 100'000'000;

int main(void) {
	string useracc, userpass;

	cout << "���¹�ȣ : "; getline(cin, useracc);
	cout << "��й�ȣ : "; getline(cin, userpass);

	try {
		if (useracc != Bank || userpass != Pass)
			throw(Account(useracc, userpass));
		else
		{
			int money;
			cout << endl <<"��ݾ�: "; cin >> money;
			if (money > Balance)throw(money);
			else { cout << endl << "���: " << money << ", �ܾ�: " << (Balance - money) << endl; }
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