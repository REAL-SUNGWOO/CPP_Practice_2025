#include<iostream>
#include "Slinkedlist.h"

int main(void) {
	Slinkedlist test;

	while (1) {
		int temp;
		cout << "�����͸� �Է��ϼ���(���� -1): "; cin >> temp;
		if (temp == -1) { break; }
		test.addrear(temp);
	}
	test.printLinkedlist();
	cout << "����� ������ : " << test.countNode() << endl;
	return 0;
}