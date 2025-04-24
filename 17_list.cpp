#include<iostream>
#include<iomanip>

using namespace std;

//�ܼ� ���Ḯ��Ʈ
class SNode {
public:
	SNode(int data) { data_ = data; link_ = nullptr; }
private:
	int data_;
	SNode* link_; // link_��� ��������� SNode��� Ŭ������ �ּҸ� �����ϴ� �������̴�.
	friend class Slinkedlist;
};


class Slinkedlist {
private:
	SNode* head_;
public:
	Slinkedlist(void) { head_ = nullptr; }
	bool Isempty(void);
	void addrear(int data);
	SNode* rearNode(void);
	void printLinkedlist(void);
	void removeFront(void);
	int countNode(void);
};
bool Slinkedlist :: Isempty(void) {
	return head_ == nullptr;
}
SNode* Slinkedlist:: rearNode(void) {
	//��尡 nullptr�� ����Ű�� ������ while���� �ȵ��ư��� ������ 
	//���� if-else���� �ۼ����� �ʾƵ� �ȴ�.
		SNode* rNode = head_;
		while (rNode->link_)
		{
			rNode = rNode->link_;// ���� rNode�� ��ũ�� nullptr�̸�, rNode�� ������ ��尡 �ȴ�.
		}
		return rNode;
}
void Slinkedlist::addrear(int data){
	SNode* newnode = new SNode(data);
	if (Isempty()) {
		head_ = newnode;
	}
	else {
		SNode* rNode = rearNode();
		rNode->link_ = newnode;
	}
}
void Slinkedlist::printLinkedlist(void) {
	if (Isempty()) { cout << "����� �����Ͱ� �����ϴ�." << endl; }
	else { 
		SNode* tNode = head_;
		cout << "### �Էµ� ������ ###" << endl;

		while (tNode) // while���� ����� ��ũ�� nullptr�� ������ �����.
		{
			cout<< tNode->data_<<" ->> "; //���� ����� �����͸� �����.
			tNode = tNode->link_;
		}
	}
}
void Slinkedlist::removeFront(void) {
	if (Isempty()) { return; }
	SNode* old = head_;
	head_ = head_->link_;//���� ù��° ����� ��ũ�ʵ� ��(�ι�° ����� �ּ�)�� ���ο� ����
	delete old;
}
//��������� count �ȸ��� ���
int Slinkedlist::countNode(void) {
	//if (Isempty()) { return 0; }

	//���ʿ� head_�� nullptr�� ����Ű�� ������, 
	//while���� ���� �������� break �Ǵϱ� ���� ���� ������ �ۼ����� �ʾƵ� ������.
	int count = 0;

	SNode* rNode = head_;
	while (rNode)
	{
		count++;
		rNode = rNode->link_;// rNode�� �� ���� ��带 ����Ű���� �ؾ���.
	}
	return count;
}


int main(void) {
	Slinkedlist test;

	while(1){
		int temp;
		cout << "�����͸� �Է��ϼ���(���� -1): "; cin >> temp;
		if (temp == -1) { break; }
		test.addrear(temp);
	}
	test.printLinkedlist();
	cout<<"����� ������ : "<< test.countNode()<<endl;
	return 0;
}