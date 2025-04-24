#ifndef SNode_h
#define SNode_h

class SNode {
public:
	SNode(int data) { data_ = data; link_ = nullptr; }
private:
	int data_;
	SNode* link_; // link_��� ��������� SNode��� Ŭ������ �ּҸ� �����ϴ� �������̴�.
	friend class Slinkedlist;
};
#endif