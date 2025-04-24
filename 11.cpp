//연습문제 4-1 구조체와 객체
// struct 구조체 연습
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
	cout << "학생 성적을 입력하세요." << endl;
	cout << "이름: "; cin.getline(name,10);
	cout << "국어: "; cin >> kor_;
	cout << "영어: "; cin >> eng_;
	cout << "수학: "; cin >> math_;
	tot_ = kor_ + eng_ + math_;
	ave_ = tot_ / 3;
}
void Stu::showScore(void) {
	cout << "###학생성적###" << endl << endl;
	cout << "국어: "<< kor_<<endl;
	cout << "영어: "<< eng_ << endl;
	cout << "수학: "<< math_ << endl;
	cout << "총점:" << tot_ << endl;
	cout << "평균:" << ave_ << endl;
}
int main(void) {
	
	Stu hong;
	hong.setScore();
	hong.showScore();

	return 0;
}