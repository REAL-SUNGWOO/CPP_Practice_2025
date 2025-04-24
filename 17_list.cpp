#include<iostream>
#include<iomanip>

using namespace std;

//단순 연결리스트
class SNode {
public:
	SNode(int data) { data_ = data; link_ = nullptr; }
private:
	int data_;
	SNode* link_; // link_라는 멤버변수는 SNode라는 클래스의 주소를 저장하는 포인터이다.
	friend class Slinkedlist;
};


class Slinkedlist {
private:
	SNode* head_;
	int count_=0; // 멤버변수로 count를 만들경우 추가하는 경우 뿐만 아니라 삭제하는 경우도 고려!
public:
	Slinkedlist(void) { head_ = nullptr; }
	bool Isempty(void);
	void addrear(int data);
	SNode* rearNode(void);
	void printLinkedlist(void);
	void removeFront(void);
	int countNode(void);
	//교수님 안내 없이 그냥 내가 작성해본 멤버함수
	void addFront(int data);
	void removeRear(void);
	bool search(int value);
	void clear(void);
};
bool Slinkedlist :: Isempty(void) {
	return head_ == nullptr;
}
SNode* Slinkedlist:: rearNode(void) {
	//헤드가 nullptr을 가리키고 있으면 while문이 안돌아가기 때문에 
	//굳이 if-else문을 작성하지 않아도 된다.
		SNode* rNode = head_;
		while (rNode->link_)
		{
			rNode = rNode->link_;// 만약 rNode의 링크가 nullptr이면, rNode가 마지막 노드가 된다.
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
	count_++;
}
void Slinkedlist::printLinkedlist(void) {
	if (Isempty()) { cout << "출력할 데이터가 없습니다." << endl; }
	else { 
		SNode* tNode = head_;
		cout << "### 입력된 데이터 ###" << endl;

		while (tNode) // while문은 노드의 링크가 nullptr을 만나면 종료됨.
		{
			cout<< tNode->data_<<" ->> "; //현재 노드의 데이터를 출력함.
			tNode = tNode->link_;
		}
		cout << "nullptr" << endl;
	}
}
void Slinkedlist::removeFront(void) {
	if (Isempty()) { return; }
	SNode* old = head_;
	head_ = head_->link_;//원래 첫번째 노드의 링크필드 값(두번째 노드의 주소)을 새로운 헤드로
	delete old;
	count_--;
}
int Slinkedlist::countNode(void) { return count_; }
//멤버변수로 count 안만든 경우
//int Slinkedlist::countNode(void) {
//	//if (Isempty()) { return 0; }
//
//	//에초에 head_가 nullptr을 가리키고 있으면, 
//	//while문에 들어가는 과정에서 break 되니깐 굳이 위의 라인은 작성하지 않아도 괜찮음.
//	int count = 0;
//
//	SNode* rNode = head_;
//	while (rNode)
//	{
//		count++;
//		rNode = rNode->link_;// rNode가 그 다음 노드를 가리키도록 해야함.
//	}
//	return count;
//}
void Slinkedlist::addFront(int data) {
	SNode* fNode = new SNode(data); // 새로운 노드를 만들고 그거를 임시로 fNode에 주소를 저장한다.
	//만약 헤드가 비어있다면 어떤 노드도 없기 때문에 이것이 첫번째 노드가 되어야 한다.
	if (Isempty()) { head_ = fNode; }
	//기존의 헤더에는 새로운 노드의 주소가 저장되어야 한다.
	//그리고 새로만들어진 노드의 링크필드에는 원래의 헤더의 값이 저장되어야 한다.
	else {fNode->link_ = head_;
	head_ = fNode;
	}
	count_++;
}
void Slinkedlist :: removeRear(void) {
	if (head_ == nullptr) { return; }
	if (head_->link_ == nullptr) { 
		delete head_; 
		head_ = nullptr; 
	}
	else{
		SNode* rNode = head_;
			while (rNode)//head_가 nullptr인 경우를 생각해서 while의 조건을 rNode로 걸었다.
			{
				if (((rNode->link_)->link_)==nullptr) { break; };
				rNode = rNode->link_;
			}
		delete rNode->link_;
		rNode->link_ = nullptr;
		}
	count_--;
}
bool Slinkedlist::search(int value) {
	bool state = false;
	if (Isempty()) { return false; }
	SNode* newNode = head_;
	while(newNode)
	{
		if (newNode->data_ == value) { state = true; break; }
		else { newNode = newNode->link_; }
	}
	return state;
}
void Slinkedlist::clear(void) {
	SNode* old = head_;
	while(head_){	
		head_ = old->link_;
		delete old;
		old = head_;
	}
	count_ = 0;
}


int main(void) {
	Slinkedlist test;

	while(1){
		int temp;
		cout << "데이터를 입력하세요(종료 -1): "; cin >> temp;
		if (temp == -1) { break; }
		test.addrear(temp);
		
	}
	test.removeRear();
	test.printLinkedlist();
	cout<<"노드의 개수는 : "<< test.countNode()<<endl;
	return 0;
}
