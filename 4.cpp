//�������� 2-3�ζ� ��ȣ ����
#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>
#include<algorithm>

using namespace std;
#define NUM 6


int main(void) {
	int size;
	int temp;
	bool state = 1;

	cout << "������ �� �� �����Ͻðڽ��ϱ�? : "; cin >> size;

 
 (1) �ζǹ�ȣ�� ��� ���� ���� 2���� �迭�� ����� �����Ѵ�
	int** Lotto = new int* [size + 1];
	for (int i = 0; i < size; i++)
	{
		//�ζǹ�ȣ 6���� ���� �迭�� �ּҸ� Lotto �������� �迭�� i��° ��ҿ� ��Ҵ�.
		*(Lotto + i) = new int[NUM]; 
	}
	*(Lotto + size) = nullptr;

 //(2)���α׷� ����ø��� ���ο� ��ȣ�� ������ �� �ִ� Ÿ�� �õ带 ������ �Ѵ�.
	srand(time(nullptr)); // ���� ���� ���� �õ带 Ÿ�ӿ� ���� �ٲ�� �����Ͽ���.

 (3) �ζǹ�ȣ�� �����ϰ� �װ��� �迭�� ��� �ڵ带 �ۼ��ؾ��Ѵ�
		�̶� �ߺ��� Ž���Ͽ� �ߺ��� ��ȣ�� ��������� ������������ ���ư� ���ο� ��ȣ�� �����.
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < NUM; j++) {
			temp = rand() % 45 + 1;
			for (int k = 0; k < j; k++)
			{
				if (temp == Lotto[i][k])
				{
					state = false;
					break;
				}
				else state = true;
			}
			if (state == false)
			{
				j--;
			}
			else{ Lotto[i][j] = temp; }
		}
		sort(Lotto[i], Lotto[i] + NUM);
	}
	
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < NUM; j++) {
			cout << setw(3) << Lotto[i][j];
		}
		cout << endl;
	}
 
 ���������� ���� �޸� �ݳ��� ���ش�. 
	for (int i = 0; i < (size + 1); i++)
	{
		delete[] * (Lotto + i);
	}
	delete[] Lotto;

	return 0;
}


 ���� ���� �ѹ� ������



#include <iostream>
#include <iomanip>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <algorithm>

using namespace std;

#define NUM 6
#define MAX_NUM 45

int main() {
    int size;
    cout << "������ �� �� �����Ͻðڽ��ϱ�? : ";
    cin >> size;

    vector<vector<int>> Lotto(size, vector<int>(NUM)); // 2���� ���� ����

    srand(time(nullptr));

    for (int i = 0; i < size; ++i) {
        int count = 0;
        while (count < NUM) {
            int temp = rand() % MAX_NUM + 1;
            // �ߺ� Ȯ��
            if (find(Lotto[i].begin(), Lotto[i].begin() + count, temp) == Lotto[i].begin() + count) {
                Lotto[i][count++] = temp;
            }
        }
        sort(Lotto[i].begin(), Lotto[i].end());
    }

    // ���
    for (const auto& ticket : Lotto) {
        for (int num : ticket) {
            cout << setw(3) << num;
        }
        cout << endl;
    }

    return 0;
}
