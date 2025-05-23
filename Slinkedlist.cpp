#include "Slinkedlist.h"

bool Slinkedlist::Isempty(void) {
	return head_ == nullptr;
}
SNode* Slinkedlist::rearNode(void) {
	//헤드가 nullptr을 가리키고 있으면 while문이 안돌아가기 때문에 
	//굳이 if-else문을 작성하지 않아도 된다.
	SNode* rNode = head_;
	while (rNode->link_)
	{
		rNode = rNode->link_;// 만약 rNode의 링크가 nullptr이면, rNode가 마지막 노드가 된다.
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
	if (Isempty()) { cout << "출력할 데이터가 없습니다." << endl; }
	else {
		SNode* tNode = head_;
		cout << "### 입력된 데이터 ###" << endl;

		while (tNode) // while문은 노드의 링크가 nullptr을 만나면 종료됨.
		{
			cout << tNode->data_ << " ->> "; //현재 노드의 데이터를 출력함.
			tNode = tNode->link_;
		}
	}
}
void Slinkedlist::removeFront(void) {
	if (Isempty()) { return; }
	SNode* old = head_;
	head_ = head_->link_;//원래 첫번째 노드의 링크필드 값(두번째 노드의 주소)을 새로운 헤드로
	delete old;
}
//멤버변수로 count 안만든 경우
int Slinkedlist::countNode(void) {
	//if (Isempty()) { return 0; }

	//에초에 head_가 nullptr을 가리키고 있으면, 
	//while문에 들어가는 과정에서 break 되니깐 굳이 위의 라인은 작성하지 않아도 괜찮음.
	int count = 0;

	SNode* rNode = head_;
	while (rNode)
	{
		count++;
		rNode = rNode->link_;// rNode가 그 다음 노드를 가리키도록 해야함.
	}
	return count;
}