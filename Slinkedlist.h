#include "SNode.h"
#include<iostream>
using namespace std;

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
