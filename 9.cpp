//����Ʈ2 �������� 3 ���ڿ��� �Ǽ��� ��ȯ�ϴ� �ڵ�
// string class ����
#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>

using namespace std;


// Ư���� ��찡 �ƴ϶�� ��κ��� ���� �ʱ�ȭ �ؼ� �������.
double my_stof(const string& rStr)
{
	bool pos=true; // ����� ��� :true, ������ ��� : false
	int i=0,j=1; // for���� �ݺ�Ƚ���� ��ü for������ ���� ����.
	double ip=0, fp=0, res=0; //ip :integer part, fp: fraction part

	cout << "�Է� ���ڿ�: ";
	for (int k = 0; k < rStr.size(); k++)
	{
		cout<< rStr[k];
	}
	
	//�� ù��° ��Ұ� ��ȣ���� �ƴ��� Ȯ���ؾ� �Ѵ�.
	if (rStr[0] == '+') { pos = true; i++; }
	else if (rStr[0] == '-') { pos = false; i++; }
	
	int temp=0;
	for (i; i < rStr.size(); i++)
	{
		if(rStr[i]=='.'){
			i++;
			for (i; i < rStr.size(); i++) {
				
				temp = rStr[i] - 48; // Ascii �ڵ�� ���ڴ� 48 ���̰� ���Ƿ� �̷��� ������
				if (temp < 0 || temp>9) break; // �� ��쿡�� ���ڳ� ������ ��ȣ�� �ƴ� �ٸ� ��ȣ�̹Ƿ� �������
				fp += temp;			 // ������ �����ο� ��ȯ�� ������ �����ش�.
				fp *= 10;
				j++;
			}
			fp = fp / pow(10, j);// pow �Լ� ����ϴ� ��� pow(�ŵ������� �� ������� 10, ������ �ŵ����� �� ������?)
			break;
		}
		else
		{
			temp = rStr[i] - 48; // Ascii �ڵ�� ���ڴ� 48 ���̰� ���Ƿ� �̷��� ������
			if (temp < 0 || temp>9) break;
			ip += temp;			 // ������ �����ο� ��ȯ�� ������ �����ش�.
			ip *= 10;			 // �ڸ��� ������ ���ؼ� 10�� �����ش�.
		}
		
	}
	ip /= 10;
	res = ip + fp;
	if (pos == false)
		res *= -1;
	cout << ", ��ȯ�� ����(double): " << res;
	return res;
}




int main(void) {
	
	string test;
	cout << "�Ǽ��� ��ȯ�� ���ڿ�: "; 
	getline(cin, test);

	my_stof(test);

	return 0;
}