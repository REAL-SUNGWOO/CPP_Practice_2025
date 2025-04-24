//연습문제 1-8 사칙연산 예외처리
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

	//수식을 저장할 변수를 생성한다.
	double a, b, res;
	char op;
	//수식을 입력받음
	cout << "수식을 입력하세요: ";
	// 이때 cin은 space bar를 입력받지 않기때문에 spacebar가 입력되면 다음으로 넘어감
	cin >> a >> op >> b;

	//예외처리를 위한 try catch문
	try {
		switch (op) {
		case '+':  res = a + b; break;
		case '-':  res = a - b; break;
		case '*':  res = a * b; break;
		case '/': {
			if (b == 0) { throw Cal(a, op, b); }
			// 클래스를 통해서 예외를 처리하는 방법
			//객체 생성을 통해서 예외를 처리하면, 전체요소를 확인할 수 있음
			res = a / b; break;
		}
		default: throw Cal(a, op, b);
		}
		cout << a << " " << op << " " << b << " = " << res << endl;
	}

//catch절을 통해서 어떤 자료형의 예외를 받을 것인지 확인한다.
catch (Cal res) {
	cout << "주의 입력에 오류있습니다. 확인해주세요." << endl;
	cout << "피 연산자 1 : " << res.getA() << endl;
	cout << "연   산   자: " << res.getop() << endl;
	cout << "피 연산자 2 : " << res.getB() << endl;
}

return 0;
}