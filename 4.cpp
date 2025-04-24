//연습문제 2-3로또 번호 생성
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

	cout << "복권을 몇 장 구입하시겠습니까? : "; cin >> size;

 
 //(1) 로또번호를 담기 위한 동적 2차원 배열이 만들어 져야한다
	int** Lotto = new int* [size + 1];
	for (int i = 0; i < size; i++)
	{
		//로또번호 6개를 담을 배열의 주소를 Lotto 포인터형 배열의 i번째 요소에 담았다.
		*(Lotto + i) = new int[NUM]; 
	}
	*(Lotto + size) = nullptr;

 //(2)프로그램 실행시마다 새로운 번호를 생성할 수 있는 타임 시드를 만들어야 한다.
	srand(time(nullptr)); // 랜덤 난수 생성 시드를 타임에 따라서 바뀌도록 설계하였다.

 //(3) 로또번호를 생성하고 그것을 배열에 담는 코드를 작성해야한다
		//이때 중복을 탐지하여 중복된 번호가 만들어지면 이전과정으로 돌아가 새로운 번호를 만든다.
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
 
// 마지막에는 동적 메모리 반납을 해준다. 
	for (int i = 0; i < (size + 1); i++)
	{
		delete[] * (Lotto + i);
	}
	delete[] Lotto;

	return 0;
}


 //벡터 버전 한번 봐보기



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
    cout << "복권을 몇 장 구입하시겠습니까? : ";
    cin >> size;

    vector<vector<int>> Lotto(size, vector<int>(NUM)); // 2차원 벡터 생성

    srand(time(nullptr));

    for (int i = 0; i < size; ++i) {
        int count = 0;
        while (count < NUM) {
            int temp = rand() % MAX_NUM + 1;
            // 중복 확인
            if (find(Lotto[i].begin(), Lotto[i].begin() + count, temp) == Lotto[i].begin() + count) {
                Lotto[i][count++] = temp;
            }
        }
        sort(Lotto[i].begin(), Lotto[i].end());
    }

    // 출력
    for (const auto& ticket : Lotto) {
        for (int num : ticket) {
            cout << setw(3) << num;
        }
        cout << endl;
    }

    return 0;
}
