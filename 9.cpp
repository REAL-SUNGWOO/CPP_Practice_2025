//레포트2 연습문제 3 문자열을 실수로 변환하는 코드
// string class 연습
#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>

using namespace std;


// 특별한 경우가 아니라면 대부분의 값은 초기화 해서 사용하자.
double my_stof(const string& rStr)
{
	bool pos=true; // 양수인 경우 :true, 음수인 경우 : false
	int i=0,j=1; // for문의 반복횟수는 전체 for루프가 같이 쓴다.
	double ip=0, fp=0, res=0; //ip :integer part, fp: fraction part

	cout << "입력 문자열: ";
	for (int k = 0; k < rStr.size(); k++)
	{
		cout<< rStr[k];
	}
	
	//맨 첫번째 요소가 부호인지 아닌지 확인해야 한다.
	if (rStr[0] == '+') { pos = true; i++; }
	else if (rStr[0] == '-') { pos = false; i++; }
	
	int temp=0;
	for (i; i < rStr.size(); i++)
	{
		if(rStr[i]=='.'){
			i++;
			for (i; i < rStr.size(); i++) {
				
				temp = rStr[i] - 48; // Ascii 코드와 숫자는 48 차이가 나므로 이렇게 구해줌
				if (temp < 0 || temp>9) break; // 이 경우에는 숫자나 정해진 기호가 아닌 다른 기호이므로 즉시종료
				fp += temp;			 // 기존의 정수부에 변환된 정수를 더해준다.
				fp *= 10;
				j++;
			}
			fp = fp / pow(10, j);// pow 함수 사용하는 방법 pow(거듭제곱의 밑 예를들면 10, 몇으로 거듭제곱 할 것인지?)
			break;
		}
		else
		{
			temp = rStr[i] - 48; // Ascii 코드와 숫자는 48 차이가 나므로 이렇게 구해줌
			if (temp < 0 || temp>9) break;
			ip += temp;			 // 기존의 정수부에 변환된 정수를 더해준다.
			ip *= 10;			 // 자릿수 보정을 위해서 10을 곱해준다.
		}
		
	}
	ip /= 10;
	res = ip + fp;
	if (pos == false)
		res *= -1;
	cout << ", 변환된 숫자(double): " << res;
	return res;
}




int main(void) {
	
	string test;
	cout << "실수로 변환할 문자열: "; 
	getline(cin, test);

	my_stof(test);

	return 0;
}