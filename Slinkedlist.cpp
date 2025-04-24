#include "Slinkedlist.h"

bool Slinkedlist::Isempty(void) {
	return head_ == nullptr;
}
SNode* Slinkedlist::rearNode(void) {
	//��尡 nullptr�� ����Ű�� ������ while���� �ȵ��ư��� ������ 
	//���� if-else���� �ۼ����� �ʾƵ� �ȴ�.
	SNode* rNode = head_;
	while (rNode->link_)
	{
		rNode = rNode->link_;// ���� rNode�� ��ũ�� nullptr�̸�, rNode�� ������ ��尡 �ȴ�.
	}
	return rNode;
}
void Slinkedlist::addrear(int data) {
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
			cout << tNode->data_ << " ->> "; //���� ����� �����͸� �����.
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