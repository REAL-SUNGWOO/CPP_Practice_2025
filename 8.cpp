//�������� 3-4 vector Ŭ���� Ȱ��
#include<iostream>
#include<iomanip>
#include<vector>

using namespace std;

int main(void) {
	
	int dec;
	cout << "������ �Է�: "; cin >> dec;
	vector<int> bset;

	while (dec)
	{
		bset.push_back(dec % 2);
		dec /= 2;
	}

	cout << "2���� ��ȯ: ";
	//������ �����ؼ� vector�� ���Ͱ� �ƴҶ����� while���� �ݺ��Ѵ�.
		while(!bset.empty())
		{
			cout<<bset.back();
			bset.pop_back();
			//vector���� .back()�̶�� ��� �Լ��� ���� �ǵ��� �� ������
		}
	return 0;
}