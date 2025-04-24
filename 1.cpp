//�������� 1-8 ��Ģ���� ����ó��
#include<iostream>
#include<iomanip>

using namespace std;

class Cal {
public:
	double getA(void) { return a; };
	double getB(void) { return b; };
	char getop(void) { return op; };
	Cal(double A = 0, char OP = '+', double B = 0) { a = A; b = B; op = OP; };
private:
	double a, b;
	char op;
};

int main(void) {

	//������ ������ ������ �����Ѵ�.
	double a, b, res;
	char op;
	//������ �Է¹���
	cout << "������ �Է��ϼ���: ";
	// �̶� cin�� space bar�� �Է¹��� �ʱ⶧���� spacebar�� �ԷµǸ� �������� �Ѿ
	cin >> a >> op >> b;

	//����ó���� ���� try catch��
	try {
		switch (op) {
		case '+':  res = a + b; break;
		case '-':  res = a - b; break;
		case '*':  res = a * b; break;
		case '/': {
			if (b == 0) { throw Cal(a, op, b); }
			// Ŭ������ ���ؼ� ���ܸ� ó���ϴ� ���
			//��ü ������ ���ؼ� ���ܸ� ó���ϸ�, ��ü��Ҹ� Ȯ���� �� ����
			res = a / b; break;
		}
		default: throw Cal(a, op, b);
		}
		cout << a << " " << op << " " << b << " = " << res << endl;
	}

//catch���� ���ؼ� � �ڷ����� ���ܸ� ���� ������ Ȯ���Ѵ�.
catch (Cal res) {
	cout << "���� �Է¿� �����ֽ��ϴ�. Ȯ�����ּ���." << endl;
	cout << "�� ������ 1 : " << res.getA() << endl;
	cout << "��   ��   ��: " << res.getop() << endl;
	cout << "�� ������ 2 : " << res.getB() << endl;
}

return 0;
}