//�������� 4-1 ����ü�� ��ü
// struct ����ü ����
#include<iostream>
#include<iomanip>

using namespace std;

struct Stu {
public:
	void setScore(void);
	void showScore(void);
private:
	double kor_, eng_, math_, tot_, ave_;
	char name[12];
};
void Stu::setScore(void) {
	cout << "�л� ������ �Է��ϼ���." << endl;
	cout << "�̸�: "; cin.getline(name,10);
	cout << "����: "; cin >> kor_;
	cout << "����: "; cin >> eng_;
	cout << "����: "; cin >> math_;
	tot_ = kor_ + eng_ + math_;
	ave_ = tot_ / 3;
}
void Stu::showScore(void) {
	cout << "###�л�����###" << endl << endl;
	cout << "����: "<< kor_<<endl;
	cout << "����: "<< eng_ << endl;
	cout << "����: "<< math_ << endl;
	cout << "����:" << tot_ << endl;
	cout << "���:" << ave_ << endl;
}
int main(void) {
	
	Stu hong;
	hong.setScore();
	hong.showScore();

	return 0;
}