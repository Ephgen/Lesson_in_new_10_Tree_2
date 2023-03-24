#include "List2.h"

List2::List2() {
	head = tail = nullptr;
	count = 0;
}
List2::List2(const List2& l) {
	head = tail = nullptr;
	count = 0;

	Element* temp = l.head;
	while (temp != nullptr) {
		AddTail(temp->data);
		temp = temp->next;
	}
}
List2::~List2() {
	DelAll();
}

void List2::AddHead(int n) {
	Element* temp = new Element;
	temp->prev = nullptr;
	temp->data = n;
	temp->next = head;

	if (head != nullptr)
		head->prev = temp;

	if (count == 0)
		head = tail = temp;

	else
		head = temp;

	count++;
}
void List2::AddTail(int n) {
	Element* temp = new Element;
	temp->next = nullptr;
	temp->data = n;
	temp->prev = tail;

	if (tail != nullptr)
		tail->next = temp;

	if (count == 0)
		head = tail = temp;
	else
		tail = temp;
	count++;
}
void List2::Insert(int pos) {
	if (pos < 1 || pos > count + 1) {
		cout << "Error! Incorrect position!\n\n";
		return;
	}
	cout << "Input num -> ";
	int d; cin >> d;
	if (pos == count + 1) {
		AddTail(d);
		return;
	}
	else if (pos == 1) {
		
		AddTail(d);
		return;
	}
	int i = 1;
	Element* ins = head;
	while (i < pos) {
		ins = ins->next;
		i++;
	}
	Element* prevIns = ins->prev;
	Element* temp = new Element;

	cout << "Input number -> "; cin >> temp->data;

	if (prevIns != nullptr && count != 1)
		prevIns->next = temp;
	temp->next = ins;
	temp->prev = prevIns;
	ins->prev = temp;

	count++;
}