#ifndef SNode_h
#define SNode_h

class SNode {
public:
	SNode(int data) { data_ = data; link_ = nullptr; }
private:
	int data_;
	SNode* link_; // link_라는 멤버변수는 SNode라는 클래스의 주소를 저장하는 포인터이다.
	friend class Slinkedlist;
};
#endif