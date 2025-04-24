#include<iostream>
#include "Slinkedlist.h"

int main(void) {
	Slinkedlist test;

	while (1) {
		int temp;
		cout << "데이터를 입력하세요(종료 -1): "; cin >> temp;
		if (temp == -1) { break; }
		test.addrear(temp);
	}
	test.printLinkedlist();
	cout << "노드의 개수는 : " << test.countNode() << endl;
	return 0;
}